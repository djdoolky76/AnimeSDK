#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PNDMHFGFJEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9F7580)

inline static constexpr unsigned int PNDMHFGFJEB_TypeDefinitionIndex = 63678;

struct alignas(8) PNDMHFGFJEB
{
	static ::System::String** StaticGet_EFKEMFHPDHA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PNDMHFGFJEB_TypeDefinitionIndex)->GetStaticField(0x4F060);
	}
	// static const ::System::Single IKMOFDCLMEA; // 0x0
	// static const ::System::Single GGMPLGPDGPA; // 0x0
	// static const ::System::String* GNBAEJEOKCH; // 0x0
	::System::String* KIHGNGKBADE; // 0x10
	::System::Boolean GGNDNGDBJDE; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single MOKIKLEHPKC; // 0x1C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNDMHFGFJEB__CCTOR_OFFSET))();
	}
};
