#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NKHKIKHLFGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1A7E10)

inline static constexpr unsigned int NKHKIKHLFGE_TypeDefinitionIndex = 46982;

class NKHKIKHLFGE : public ::System::Object
{
public:
	static ::System::String** StaticGet_OFCJJPNPEDN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NKHKIKHLFGE_TypeDefinitionIndex)->GetStaticField(0x47470);
	}
	static ::System::String** StaticGet_BAPPBPOEDBA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NKHKIKHLFGE_TypeDefinitionIndex)->GetStaticField(0x47478);
	}
	static ::System::String** StaticGet_KCAICHNIMCK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NKHKIKHLFGE_TypeDefinitionIndex)->GetStaticField(0x47480);
	}
	static ::System::String** StaticGet_DEKAFPJEJNN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NKHKIKHLFGE_TypeDefinitionIndex)->GetStaticField(0x47488);
	}
	static ::System::String** StaticGet_BEBNLEOBJGJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NKHKIKHLFGE_TypeDefinitionIndex)->GetStaticField(0x47490);
	}
	static ::System::String** StaticGet_BNDKIGKNIJB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NKHKIKHLFGE_TypeDefinitionIndex)->GetStaticField(0x47498);
	}
	static ::System::String** StaticGet_BLEKLPHDLCO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NKHKIKHLFGE_TypeDefinitionIndex)->GetStaticField(0x474A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKHKIKHLFGE__CCTOR_OFFSET))();
	}
};
