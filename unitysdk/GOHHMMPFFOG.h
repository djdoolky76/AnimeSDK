#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOHHMMPFFOG_GKDIJAMGJDK.h"
#include "unitysdk/GOHHMMPFFOG_IDMDMIFABBD.h"
#include "unitysdk/System/Object.h"

#define GOHHMMPFFOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1491AC80)

inline static constexpr unsigned int GOHHMMPFFOG_TypeDefinitionIndex = 49513;

class GOHHMMPFFOG : public ::System::Object
{
public:
	static ::GOHHMMPFFOG_GKDIJAMGJDK* StaticGet_LLIMNHELPHA()
	{
		return (::GOHHMMPFFOG_GKDIJAMGJDK*)Il2CppClass::FromTypeDefinitionIndex(GOHHMMPFFOG_TypeDefinitionIndex)->GetStaticField(0xFC30);
	}
	static ::GOHHMMPFFOG_IDMDMIFABBD* StaticGet_LLAJGGPPIED()
	{
		return (::GOHHMMPFFOG_IDMDMIFABBD*)Il2CppClass::FromTypeDefinitionIndex(GOHHMMPFFOG_TypeDefinitionIndex)->GetStaticField(0xFC4C);
	}
	static ::GOHHMMPFFOG_IDMDMIFABBD* StaticGet_HBHNPKPPKFE()
	{
		return (::GOHHMMPFFOG_IDMDMIFABBD*)Il2CppClass::FromTypeDefinitionIndex(GOHHMMPFFOG_TypeDefinitionIndex)->GetStaticField(0xFC64);
	}
	static ::GOHHMMPFFOG_GKDIJAMGJDK* StaticGet_LKDLLEODENI()
	{
		return (::GOHHMMPFFOG_GKDIJAMGJDK*)Il2CppClass::FromTypeDefinitionIndex(GOHHMMPFFOG_TypeDefinitionIndex)->GetStaticField(0xFC7C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOHHMMPFFOG__CCTOR_OFFSET))();
	}
};
