#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LNGHOIGMFGL___C_KCCFDFNOIJC_OFFSET UNITYSDK_OFFSET(0x14DCB510)
#define LNGHOIGMFGL___C_KHOOBKOPCJK_OFFSET UNITYSDK_OFFSET(0x14DCB360)
#define LNGHOIGMFGL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DCB310)
#define LNGHOIGMFGL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DCB350)

inline static constexpr unsigned int LNGHOIGMFGL___c_TypeDefinitionIndex = 50894;

class LNGHOIGMFGL___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__3_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LNGHOIGMFGL___c_TypeDefinitionIndex)->GetStaticField(0x51620);
	}
	static ::System::Action** StaticGet___9__3_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LNGHOIGMFGL___c_TypeDefinitionIndex)->GetStaticField(0x51628);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LNGHOIGMFGL___c_TypeDefinitionIndex)->GetStaticField(0x51630);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNGHOIGMFGL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHOIGMFGL___C__CTOR_OFFSET))(this);
	}

	::System::Void KHOOBKOPCJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHOIGMFGL___C_KHOOBKOPCJK_OFFSET))(this);
	}

	::System::Void KCCFDFNOIJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGHOIGMFGL___C_KCCFDFNOIJC_OFFSET))(this);
	}
};
