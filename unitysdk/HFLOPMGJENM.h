#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HFLOPMGJENM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1494A460)

inline static constexpr unsigned int HFLOPMGJENM_TypeDefinitionIndex = 68934;

struct alignas(8) HFLOPMGJENM
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HFLOPMGJENM_TypeDefinitionIndex)->GetStaticField(0x37410);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean JDAGKAMAGAK; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFLOPMGJENM__CCTOR_OFFSET))();
	}
};
