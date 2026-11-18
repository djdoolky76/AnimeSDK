#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MDCFIIDFCLP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1569D690)

inline static constexpr unsigned int MDCFIIDFCLP_TypeDefinitionIndex = 45023;

class MDCFIIDFCLP : public ::System::Object
{
public:
	static ::System::String** StaticGet_KNCHBFKHIKL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MDCFIIDFCLP_TypeDefinitionIndex)->GetStaticField(0x3B980);
	}
	static ::System::String** StaticGet_DOEPOFOODHL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MDCFIIDFCLP_TypeDefinitionIndex)->GetStaticField(0x3B988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDCFIIDFCLP__CCTOR_OFFSET))();
	}
};
