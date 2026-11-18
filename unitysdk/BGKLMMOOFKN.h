#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKLNAMKMHJM.h"
#include "unitysdk/IODPOEFKGOI.h"
#include "unitysdk/KGPAGGILINE_1.h"
#include "unitysdk/System/ValueType.h"

#define BGKLMMOOFKN_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x74BAA0)
#define BGKLMMOOFKN__CTOR_OFFSET UNITYSDK_OFFSET(0x74BA90)

inline static constexpr unsigned int BGKLMMOOFKN_TypeDefinitionIndex = 53987;

struct alignas(8) BGKLMMOOFKN
{
	::KGPAGGILINE_1<::CKLNAMKMHJM> FAJMLCFOJEM; // 0x10
	::System::Single LGKOMANDAJL; // 0x18
	::System::Single NCENAMHKLKL; // 0x1C
	::System::Boolean FEGLBCMMNCH; // 0x20
	::System::Boolean LHLPAONEAOO; // 0x21
	::System::Boolean HNABADGEGJA; // 0x22
	::System::Boolean INMOLPHKOCC; // 0x23
	::System::Int32 ABJCMAEIEJL; // 0x24
	::System::Int32 OCPGIDDANEF; // 0x28
	::KGPAGGILINE_1<::IODPOEFKGOI> DIFIMFHCAEH; // 0x2C
	::System::Boolean EIKBJBEGFOG; // 0x34
	::System::Boolean OPLCCMILEBO; // 0x35
	::System::Byte _padding0[0x2];
	::System::Single HMIPKCMEGKI; // 0x38

	::System::Void _ctor(::KGPAGGILINE_1<::CKLNAMKMHJM> NABGJOBFJPH, ::System::Single LEMOLEGDAIN, ::System::Single FGGPOFHFEIE, ::System::Boolean IBADGOILBEK, ::System::Boolean GEDBGHKDNJC, ::System::Boolean LMPLMEKKIOM, ::System::Boolean BNBLFLPFHPK, ::System::Int32 LKMGOPOJJEE, ::System::Int32 OPKDBNDEALC, ::KGPAGGILINE_1<::IODPOEFKGOI> APHEMIEFEAL, ::System::Boolean KHHAFLKMOMB, ::System::Boolean EIGJAIAPPPN, ::System::Single CFAGCDAKLGF)
	{
		return ((::System::Void(*)(::PVOID, ::KGPAGGILINE_1<::CKLNAMKMHJM>, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::KGPAGGILINE_1<::IODPOEFKGOI>, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + BGKLMMOOFKN__CTOR_OFFSET))(this, NABGJOBFJPH, LEMOLEGDAIN, FGGPOFHFEIE, IBADGOILBEK, GEDBGHKDNJC, LMPLMEKKIOM, BNBLFLPFHPK, LKMGOPOJJEE, OPKDBNDEALC, APHEMIEFEAL, KHHAFLKMOMB, EIGJAIAPPPN, CFAGCDAKLGF);
	}

	::System::Void GPKMPDHNCGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKLMMOOFKN_GPKMPDHNCGL_OFFSET))(this);
	}
};
