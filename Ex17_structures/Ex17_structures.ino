struct Animal {
  String family;
  int weight;
  boolean alive;
  int age;
  String placeOfBirth;
  int ID;
} lion, panda;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  lion.ID = 1;
  lion.family = "cat";
  lion.weight = 200;
  lion.alive = true;
  lion.age = 8;
  lion.placeOfBirth = "South Africa";

  panda.ID = 2;
  panda.family = "bear";
  panda.weight = 300;
  panda.alive = true;
  panda.age = 4;
  panda.placeOfBirth = "China";

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Lion information");
  printAnimal(lion);
  delay(3000);
  Serial.println("Panda information");
  printAnimal(panda);
  delay(3000);

  swapWeight(&lion, &panda);

  Serial.println("The weight of the lion and the panda have been swapped:");
  Serial.print("The weight (Lion): ");
  Serial.println(lion.weight);

  Serial.print("The weight (Panda): ");
  Serial.println(panda.weight);
  Serial.println("");

  best(&lion, &panda);

}

void printAnimal(struct Animal a) {
  Serial.print("The ID is: ");
  Serial.println(a.ID);
  Serial.print("The family is: ");
  Serial.println(a.family);
  Serial.print("The weight is: ");
  Serial.println(a.weight);
  Serial.print("Life status: ");
  if (a.alive == 1) {
    Serial.println("alive");
  } else {
    Serial.println("dead");
  }
  Serial.print("The age is: ");
  Serial.println(a.age);
  Serial.print("The place of birth is: ");
  Serial.println(a.placeOfBirth);
  Serial.println("");




}

void swapWeight(struct Animal *a, struct Animal *b) {
  int temp;
  temp   = a->weight;
  a->weight   = b->weight;
  b->weight  =  temp;

}

void best(struct Animal *a, struct Animal *b) {
  int temp;
  if (a->weight == b->weight) {
  } else if (a->weight > b->weight) {
    temp   = a->ID;
    a->ID   = b->ID;
    b->ID  =  temp;
  } else {
    temp   = a->ID;
    a->ID   = b->ID;
    b->ID  =  temp;
  }




}
