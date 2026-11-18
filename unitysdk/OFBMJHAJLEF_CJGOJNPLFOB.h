#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFBMJHAJLEF_JPAEKKNLIHL;

#define OFBMJHAJLEF_CJGOJNPLFOB_COAGJBIJDKL_OFFSET UNITYSDK_OFFSET(0x1006DEF0)
#define OFBMJHAJLEF_CJGOJNPLFOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1006DEE0)

inline static constexpr unsigned int OFBMJHAJLEF_CJGOJNPLFOB_TypeDefinitionIndex = 56495;

class OFBMJHAJLEF_CJGOJNPLFOB : public ::System::Object
{
public:
	::OFBMJHAJLEF_JPAEKKNLIHL* FGBNBFHOKAA; // 0x10
	::System::Int32 EFMODEHHJJG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_CJGOJNPLFOB__CTOR_OFFSET))(this);
	}

	::System::Void COAGJBIJDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBMJHAJLEF_CJGOJNPLFOB_COAGJBIJDKL_OFFSET))(this);
	}
};
