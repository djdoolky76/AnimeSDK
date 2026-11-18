#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define KFOAKMECMME__CTOR_OFFSET UNITYSDK_OFFSET(0x7AAC70)

inline static constexpr unsigned int KFOAKMECMME_TypeDefinitionIndex = 38798;

struct alignas(4) KFOAKMECMME
{
	::System::Int32 OCDAMGPHHLE; // 0x10
	::System::Int32 IGGAGPIDLGA; // 0x14

	::System::Void _ctor(::System::Int32 APJLCGFPNPI, ::System::Int32 EBOICLFHLPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFOAKMECMME__CTOR_OFFSET))(this, APJLCGFPNPI, EBOICLFHLPK);
	}
};
