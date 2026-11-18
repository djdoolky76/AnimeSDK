#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;

#define CFNDEFMJJDC_BMAOHFCLCKE_OFFSET UNITYSDK_OFFSET(0x10E37550)
#define CFNDEFMJJDC_CHNFLIMDGNE_OFFSET UNITYSDK_OFFSET(0x10E37780)
#define CFNDEFMJJDC_MJCJBNEEMLC_OFFSET UNITYSDK_OFFSET(0x10E377E0)

inline static constexpr unsigned int CFNDEFMJJDC_TypeDefinitionIndex = 80015;

class CFNDEFMJJDC : public ::System::Object
{
public:
	static ::System::Boolean BMAOHFCLCKE(::CJIEIHEDMME* KOGCMKPNJCI)
	{
		return ((::System::Boolean(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CFNDEFMJJDC_BMAOHFCLCKE_OFFSET))(KOGCMKPNJCI);
	}

	static ::System::Boolean CHNFLIMDGNE(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Boolean(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CFNDEFMJJDC_CHNFLIMDGNE_OFFSET))(LADPIPOMBJM);
	}

	static ::System::Void MJCJBNEEMLC(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CFNDEFMJJDC_MJCJBNEEMLC_OFFSET))(LADPIPOMBJM);
	}
};
