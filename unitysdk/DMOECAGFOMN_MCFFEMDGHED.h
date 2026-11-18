#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_MCFFEMDGHED__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC6EE0)

inline static constexpr unsigned int DMOECAGFOMN_MCFFEMDGHED_TypeDefinitionIndex = 38274;

class DMOECAGFOMN_MCFFEMDGHED : public ::System::Object
{
public:
	static ::System::String** StaticGet_BMOLIEKNLBE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_MCFFEMDGHED_TypeDefinitionIndex)->GetStaticField(0x47D70);
	}
	static ::System::String** StaticGet_ILFEHMJFKHA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_MCFFEMDGHED_TypeDefinitionIndex)->GetStaticField(0x47D78);
	}
	static ::System::String** StaticGet_GBLBAIFFELP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_MCFFEMDGHED_TypeDefinitionIndex)->GetStaticField(0x47D80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_MCFFEMDGHED__CCTOR_OFFSET))();
	}
};
