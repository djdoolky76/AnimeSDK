#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BF0099341033A224__CCTOR_OFFSET UNITYSDK_OFFSET(0x2505030)

inline static constexpr unsigned int BF0099341033A224_TypeDefinitionIndex = 5135;

class BF0099341033A224 : public ::System::Object
{
public:
	static ::System::String** StaticGet_A117B789E4E12D43()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BF0099341033A224_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_AE88C55E91111DA9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BF0099341033A224_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BF0099341033A224__CCTOR_OFFSET))();
	}
};
