#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LEKNBIMMAPF_DOAMANGMMNP_OFFSET UNITYSDK_OFFSET(0x158CF830)
#define LEKNBIMMAPF_KJLOGFGGLKI_OFFSET UNITYSDK_OFFSET(0x158CF5C0)
#define LEKNBIMMAPF__CCTOR_OFFSET UNITYSDK_OFFSET(0x158CF5B0)

inline static constexpr unsigned int LEKNBIMMAPF_TypeDefinitionIndex = 82694;

class LEKNBIMMAPF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_IHHFEHEDGLN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LEKNBIMMAPF_TypeDefinitionIndex)->GetStaticField(0xCB10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEKNBIMMAPF__CCTOR_OFFSET))();
	}

	static ::System::Void KJLOGFGGLKI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEKNBIMMAPF_KJLOGFGGLKI_OFFSET))();
	}

	static ::System::Void DOAMANGMMNP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEKNBIMMAPF_DOAMANGMMNP_OFFSET))();
	}
};
