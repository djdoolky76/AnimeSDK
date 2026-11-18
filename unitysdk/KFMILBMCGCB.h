#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KFMILBMCGCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1520B490)

inline static constexpr unsigned int KFMILBMCGCB_TypeDefinitionIndex = 63617;

class KFMILBMCGCB : public ::System::Object
{
public:
	static ::System::String** StaticGet_ILFEHMJFKHA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_TypeDefinitionIndex)->GetStaticField(0x46840);
	}
	static ::System::String** StaticGet_BMOLIEKNLBE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_TypeDefinitionIndex)->GetStaticField(0x46848);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMILBMCGCB__CCTOR_OFFSET))();
	}
};
