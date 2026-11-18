#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define GKHKONICHFP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B21460)

inline static constexpr unsigned int GKHKONICHFP_TypeDefinitionIndex = 83795;

class GKHKONICHFP : public ::System::Object
{
public:
	static ::System::String** StaticGet_DFJMJEDIPIE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x448D0);
	}
	static ::System::String** StaticGet_BGNLNBKGAGE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x448D8);
	}
	static ::System::String** StaticGet_FMKGNKGCMFB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x448E0);
	}
	static ::System::String** StaticGet_PCIEMAIGGKE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x448E8);
	}
	static ::System::String** StaticGet_NPDNKPKKENG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x448F0);
	}
	static ::System::String** StaticGet_HMILLELCILC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x448F8);
	}
	static ::System::String** StaticGet_AGFOBEPHKAP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x44900);
	}
	static ::System::String** StaticGet_BNDNJFOJMCB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x44908);
	}
	static ::System::String** StaticGet_NJNNALMMHFG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x44910);
	}
	static ::System::String** StaticGet_OPMBAOEDKNL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GKHKONICHFP_TypeDefinitionIndex)->GetStaticField(0x44918);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHKONICHFP__CCTOR_OFFSET))();
	}
};
