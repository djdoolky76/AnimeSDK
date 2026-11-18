#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIMBPEEPOML.h"
#include "unitysdk/System/ValueType.h"

class BPHGNMNLLHF;
class KCOAGGHCODK;

#define LOHPJBGOAFG_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x52F9C0)
#define LOHPJBGOAFG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x52F9A0)
#define LOHPJBGOAFG_LJPKKKCEKCF_OFFSET UNITYSDK_OFFSET(0x52F990)
#define LOHPJBGOAFG_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x52F9B0)
#define LOHPJBGOAFG_PKJKIICODFI_OFFSET UNITYSDK_OFFSET(0x52F9E0)
#define LOHPJBGOAFG__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int LOHPJBGOAFG_TypeDefinitionIndex = 92203;

struct alignas(8) LOHPJBGOAFG
{
	::System::Int32 GCOKMKPLLPP; // 0x10
	::System::Byte _padding0[0x4];
	::BPHGNMNLLHF* NGHCGPEMMHP; // 0x18

	::System::Void _ctor(::System::Int32 EOGLMAEPALE, ::BPHGNMNLLHF* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + LOHPJBGOAFG__CTOR_OFFSET))(this, EOGLMAEPALE, LJBPECKCCEA);
	}

	::EIMBPEEPOML LJPKKKCEKCF()
	{
		return ((::EIMBPEEPOML(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJBGOAFG_LJPKKKCEKCF_OFFSET))(this);
	}

	::KCOAGGHCODK* KGNEJKNNODJ()
	{
		return ((::KCOAGGHCODK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJBGOAFG_KGNEJKNNODJ_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJBGOAFG_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJBGOAFG_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Boolean PKJKIICODFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJBGOAFG_PKJKIICODFI_OFFSET))(this);
	}
};
