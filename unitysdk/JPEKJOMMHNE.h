#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JPEKJOMMHNE_DBELDMHPALM_OFFSET UNITYSDK_OFFSET(0x14FC8280)
#define JPEKJOMMHNE_DHEDMJCKMPP_OFFSET UNITYSDK_OFFSET(0x14FC8400)
#define JPEKJOMMHNE_PHCLCFGEPFH_OFFSET UNITYSDK_OFFSET(0x14FC8340)
#define JPEKJOMMHNE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FC8270)

inline static constexpr unsigned int JPEKJOMMHNE_TypeDefinitionIndex = 38562;

class JPEKJOMMHNE : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_HANFJLMNHAN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JPEKJOMMHNE_TypeDefinitionIndex)->GetStaticField(0xDA80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEKJOMMHNE__CCTOR_OFFSET))();
	}

	static ::System::Boolean DBELDMHPALM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPEKJOMMHNE_DBELDMHPALM_OFFSET))();
	}

	static ::System::Boolean PHCLCFGEPFH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPEKJOMMHNE_PHCLCFGEPFH_OFFSET))();
	}

	static ::System::Boolean DHEDMJCKMPP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPEKJOMMHNE_DHEDMJCKMPP_OFFSET))();
	}
};
