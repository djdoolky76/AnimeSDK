#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FBFHABGAOCK___C_IPJNBJOHPEH_OFFSET UNITYSDK_OFFSET(0x142830B0)
#define FBFHABGAOCK___C_KLHLPDFIGKH_OFFSET UNITYSDK_OFFSET(0x14283120)
#define FBFHABGAOCK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14283060)
#define FBFHABGAOCK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142830A0)

inline static constexpr unsigned int FBFHABGAOCK___c_TypeDefinitionIndex = 67661;

class FBFHABGAOCK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FBFHABGAOCK___c_TypeDefinitionIndex)->GetStaticField(0x3AC30);
	}
	static ::System::Action** StaticGet___9__6_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FBFHABGAOCK___c_TypeDefinitionIndex)->GetStaticField(0x3AC38);
	}
	static ::System::Action** StaticGet___9__5_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FBFHABGAOCK___c_TypeDefinitionIndex)->GetStaticField(0x3AC40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBFHABGAOCK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK___C__CTOR_OFFSET))(this);
	}

	::System::Void IPJNBJOHPEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK___C_IPJNBJOHPEH_OFFSET))(this);
	}

	::System::Void KLHLPDFIGKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK___C_KLHLPDFIGKH_OFFSET))(this);
	}
};
