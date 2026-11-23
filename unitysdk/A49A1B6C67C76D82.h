#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A49A1B6C67C76D82__CCTOR_OFFSET UNITYSDK_OFFSET(0x42BFED0)

inline static constexpr unsigned int A49A1B6C67C76D82_TypeDefinitionIndex = 14111;

class A49A1B6C67C76D82 : public ::System::Object
{
public:
	static ::System::String** StaticGet_B86672ADA9267C87()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A49A1B6C67C76D82_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_AD200FA6263D2929()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A49A1B6C67C76D82_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_A3C4421C5C1784FE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A49A1B6C67C76D82_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::String** StaticGet_BC4B96B0653CBACB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A49A1B6C67C76D82_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::String** StaticGet_B7EFE3FEDF17CAD5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A49A1B6C67C76D82_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::System::String** StaticGet_F91FF2CD52E55643()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A49A1B6C67C76D82_TypeDefinitionIndex)->GetStaticField(0x28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A49A1B6C67C76D82__CCTOR_OFFSET))();
	}
};
