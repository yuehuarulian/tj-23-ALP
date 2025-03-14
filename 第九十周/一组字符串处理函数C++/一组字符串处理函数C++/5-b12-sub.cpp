/* 杨瑞灵 2252941 信04 */

/* 函数实现部分，{ }内的东西可以任意调整，目前的return 0只是一个示例，可改变 */

/* 不允许定义任何形式的外部全局、静态全局、宏定义、只读变量 */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlen(const char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int i;
    for (i = 0; str[i] != '\0'; i++)
        continue;
    return i; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcat(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(s1);
    int len2 = tj_strlen(s2);
    for (int i = len1; i <= len1 + len2; i++)
        s1[i] = s2[i - len1];
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncat(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int i;
    int len1 = tj_strlen(s1);
    int len2 = tj_strlen(s2);
    if (len > len2)
    {
        for (i = len1; i <= len1 + len2; i++)
            s1[i] = s2[i - len1];
    }
    else
    {
        for (i = len1; i < len1 + len; i++)
            s1[i] = s2[i - len1];
        s1[i + 1] = '\0';
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcpy(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len2 = tj_strlen(s2);
    for (int i = 0; i <= len2; i++)
        s1[i] = s2[i];
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncpy(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len2 = tj_strlen(s2);
    if (len > len2)
    {
        for (int i = 0; i < len2; i++)
            s1[i] = s2[i];
    }
    else
    {
        for (int i = 0; i < len; i++)
            s1[i] = s2[i];
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(s1);
    int len2 = tj_strlen(s2);
    int i;
    for (i = 0; i <= len1 && i <= len2; i++)
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasecmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(s1);
    int len2 = tj_strlen(s2);
    int i;
    int asc1, asc2;
    for (i = 0; i <= len1 && i <= len2; i++)
    {
        asc1 = s1[i];
        asc2 = s2[i];
        if (asc1 >= 65 && asc1 <= 90)
            asc1 = s1[i] + 32;
        if (asc2 >= 65 && asc2 <= 90)
            asc2 = s2[i] + 32;
        if (asc1 != asc2)
            return asc1 - asc2;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(s1);
    int len2 = tj_strlen(s2);
    int i;
    for (i = 0; i <= len1 && i <= len2 && i < len; i++)
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasencmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(s1);
    int len2 = tj_strlen(s2);
    int i;
    int asc1, asc2;
    for (i = 0; i <= len1 && i <= len2 && i < len; i++)
    {
        asc1 = s1[i];
        asc2 = s2[i];
        if (asc1 >= 65 && asc1 <= 90)
            asc1 = s1[i] + 32;
        if (asc2 >= 65 && asc2 <= 90)
            asc2 = s2[i] + 32;
        if (asc1 != asc2)
            return asc1 - asc2;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strupr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(str);
    int i;
    for (i = 0; i < len1; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlwr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(str);
    int i;
    for (i = 0; i < len1; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strchr(const char str[], char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(str);
    int i;
    for (i = 0; i < len1; i++)
    {
        if (str[i] == ch)
            return i + 1;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strstr(const char str[], const char substr[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(str);
    int len2 = tj_strlen(substr);
    int i,j;
    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2 && i + j < len1; j++)
        {
            if (str[i + j] != substr[j])
                break;
        }
        if (j == len2 )
            return i + 1;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrchr(const char str[], const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(str);
    int i;
    for (i = 0; i < len1; i++)
    {
        if (str[len1 - 1 - i] == ch)
            return len1 - i;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrstr(const char str[], const char substr[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(str);
    int len2 = tj_strlen(substr);
    int i, j;
    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0 && i + j < len1; j--)
        {
            if (str[i + j] != substr[j])
                break;
        }
        if (j == -1)
            return i + 1;
    };
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrev(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(str);
    int i;
    char t;
    for (i = 0; i < len1/2; i++)
    {
        t = str[i];
        str[i] = str[len1 - 1 - i];
        str[len1 - 1 - i] = t;
    }
    return 0; //return值可根据需要修改
}
