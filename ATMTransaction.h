#ifndef ATMTRANSACTION_H_HEADER_INCLUDED_9DB9B1E6
#define ATMTRANSACTION_H_HEADER_INCLUDED_9DB9B1E6

// It is used to save information about transactions performed by the ATM
//##ModelId=5E0BD0B403AA
class ATMTransaction
{
  public:
    // Called after the credit card is inserted into the Card reader
    //##ModelId=5E0BBC4002DF
    createNewTransaction();

    // Called after the customer has entered the PIN code value from the ATM
    // keyboard
    //##ModelId=5E0BBDE60119
    Boolean checkPINCod();

    // It is called after completion of all actions of the ATM for customer
    // service
    //##ModelId=5E0BBE2301A6
    completeTransaction();

    // The card reader reads the value of this attribute from the customer's
    // credit card
    //##ModelId=5E0BBD1C01E5
    int valueIDCard;
    // The card reader reads the value of this attribute from the customer's
    // credit card
    //##ModelId=5E0BBD53037B
    int valuePINcod;
    // The value of this attribute is entered by the customer from the ATM
    // keyboard
    //##ModelId=5E0BBD9E00FA
    int inputPINcod;
    // The value of this attribute is entered by the customer from the ATM
    // keyboard
    //##ModelId=5E0BBDCC01A6
    int inputSum;
};



#endif /* ATMTRANSACTION_H_HEADER_INCLUDED_9DB9B1E6 */
