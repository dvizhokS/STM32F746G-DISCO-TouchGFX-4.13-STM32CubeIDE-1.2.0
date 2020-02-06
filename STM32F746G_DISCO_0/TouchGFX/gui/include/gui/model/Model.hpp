#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

//    int getCurrentTemperature() const {return currentTemperature;}	//m

    void tick();

private:
//    int currentTemperature;	//m

protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
