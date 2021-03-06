precedence stack[MAX_SIZE];
static int isp[] = { 0,19,12,12,13,13,0 };
static int icp[] = { 20,19,12,12,13,13,0 };

void POSIN_Con(void)
{
    char symbol; precedence token;
    int n=0; int top=0; int unary_switch=0;
    stack[0]=eos;
    for(token=get_token(&symbol, &n); token != eos; token=get_token(&symbol, &n))
    {
        if((token==operand)||()  printf("%c", symbol);
        else if(token==rparen)
        {
            while(stack[top]!=lparen)   printf_token(pop(&top));
            pop(&top);
        }
        else{
            if(unary_switch==1)
            {
                switch(token)
                {
                    case ''
                }
            }
            unary_switch+=1;
            while(isp[stack[top]]>=icp[token])  printf_token(pop(&top));
            push(&top, token);
        }
    }
    while((token=pop(&top))!=eos)   printf_token(token);
    printf("\n");
}