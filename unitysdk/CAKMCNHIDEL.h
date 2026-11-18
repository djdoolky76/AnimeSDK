#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIOACLBKNAE.h"
#include "unitysdk/System/ValueType.h"

class BPHGNMNLLHF;
class FGAGCFOLHGI;

#define CAKMCNHIDEL_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x52F9C0)
#define CAKMCNHIDEL_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x7E8EF0)
#define CAKMCNHIDEL_LJPKKKCEKCF_OFFSET UNITYSDK_OFFSET(0x7E8F00)
#define CAKMCNHIDEL_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x52F9B0)
#define CAKMCNHIDEL_PKJKIICODFI_OFFSET UNITYSDK_OFFSET(0x7E8F10)
#define CAKMCNHIDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int CAKMCNHIDEL_TypeDefinitionIndex = 75147;

struct alignas(8) CAKMCNHIDEL
{
	::System::Int32 OANICELIDLI; // 0x10
	::System::Byte _padding0[0x4];
	::BPHGNMNLLHF* NGHCGPEMMHP; // 0x18

	::System::Void _ctor(::System::Int32 EOGLMAEPALE, ::BPHGNMNLLHF* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + CAKMCNHIDEL__CTOR_OFFSET))(this, EOGLMAEPALE, LJBPECKCCEA);
	}

	::FGAGCFOLHGI* KGNEJKNNODJ()
	{
		return ((::FGAGCFOLHGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKMCNHIDEL_KGNEJKNNODJ_OFFSET))(this);
	}

	::OIOACLBKNAE LJPKKKCEKCF()
	{
		return ((::OIOACLBKNAE(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKMCNHIDEL_LJPKKKCEKCF_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKMCNHIDEL_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKMCNHIDEL_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Boolean PKJKIICODFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKMCNHIDEL_PKJKIICODFI_OFFSET))(this);
	}
};
