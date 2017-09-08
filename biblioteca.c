float suma (float numero1,float numero2)
{
    float respuesta;
    respuesta = numero1 + numero2;
    return respuesta;
}
float resta (float numero1,float numero2)
{
    float respuesta;
    respuesta = numero1 - numero2;
    return respuesta;
}
float multiplicacion (float numero1,float numero2)
{
    float respuesta;
    respuesta = numero1 * numero2;
    return respuesta;
}
float division (float numero1,float numero2)
{
    if (numero2 != 0)
    {
        float respuesta;
        respuesta = numero1  / numero2;
        return respuesta;
    }
    else
    {
        return 0.0;
    }
}
float factorial(float numero1)
{

    if (numero1>0)
    {
        float respuesta = 1.0;
        float aux;
        for (aux = numero1; aux > 1; aux--)
        {
            respuesta = respuesta * aux;
        }
        return respuesta;
    }
    else
    {
        return 0;
    }
}

