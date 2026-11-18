#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FPDBJOBGJJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C28C0)

inline static constexpr unsigned int FPDBJOBGJJP_TypeDefinitionIndex = 47945;

class FPDBJOBGJJP : public ::System::Object
{
public:
	static ::System::String** StaticGet_BPNCEGABNOG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FPDBJOBGJJP_TypeDefinitionIndex)->GetStaticField(0x3C9A0);
	}
	static ::System::String** StaticGet_LPLNBLIDKOB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FPDBJOBGJJP_TypeDefinitionIndex)->GetStaticField(0x3C9A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDBJOBGJJP__CCTOR_OFFSET))();
	}
};
