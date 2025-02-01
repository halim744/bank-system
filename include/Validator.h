#ifndef VALIDATOR_H
#define VALIDATOR_H
class Validator {
public:
    static bool IdValidator(int id, int ids[]) {
         for (int i = 0;i < 5;i++) {
             if (id == ids[i])
                 return true;
         }
         return false;
    }
    static bool PassValidator(string password, string passwords[]) {
        for (int i = 0;i < 5;i++) {
            if (password == passwords[i])
                return true;
        }
        return false;
    }
};

#endif // VALIDATOR_H
