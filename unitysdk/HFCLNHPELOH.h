#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDEMPHFNLOD.h"
#include "unitysdk/HFBNJOHANJG.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HFCLNHPELOH_GJFJLJLIOCJ_OFFSET UNITYSDK_OFFSET(0x7F0C90)
#define HFCLNHPELOH_LONMJPFBAOA_OFFSET UNITYSDK_OFFSET(0x19E0B6C0)
#define HFCLNHPELOH__CTOR_OFFSET UNITYSDK_OFFSET(0x7F0BC0)

inline static constexpr unsigned int HFCLNHPELOH_TypeDefinitionIndex = 60007;

struct alignas(4) HFCLNHPELOH
{
	::System::Boolean IJIIOGHDFKG; // 0x10
	::System::Byte _padding0[0x7];
	::HFBNJOHANJG DEIPJONPFNG; // 0x18
	::HFBNJOHANJG NEMJJKIFGJM; // 0x48
	::HFBNJOHANJG MBJMNLKHCOJ; // 0x78

	::System::Void _ctor(::HFBNJOHANJG& AGHNEGFHKMC, ::HFBNJOHANJG& FOHJKAJFFIK, ::HFBNJOHANJG& NEOJINJHJII)
	{
		return ((::System::Void(*)(::PVOID, ::HFBNJOHANJG&, ::HFBNJOHANJG&, ::HFBNJOHANJG&))((::PBYTE)hIl2Cpp + HFCLNHPELOH__CTOR_OFFSET))(this, AGHNEGFHKMC, FOHJKAJFFIK, NEOJINJHJII);
	}

	static ::System::Void LONMJPFBAOA(::System::Boolean EOPKGAEDCEG, ::System::String* HIONLFKEGIA)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HFCLNHPELOH_LONMJPFBAOA_OFFSET))(EOPKGAEDCEG, HIONLFKEGIA);
	}

	::HFBNJOHANJG GJFJLJLIOCJ(::EDEMPHFNLOD JBBFCGAMDHI)
	{
		return ((::HFBNJOHANJG(*)(::PVOID, ::EDEMPHFNLOD))((::PBYTE)hIl2Cpp + HFCLNHPELOH_GJFJLJLIOCJ_OFFSET))(this, JBBFCGAMDHI);
	}
};
