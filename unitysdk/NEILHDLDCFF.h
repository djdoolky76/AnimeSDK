#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GEPOPJAHMDM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

template <typename T> class DFNGPLNPPEG_1;

#define NEILHDLDCFF_HKHNFKIGJMH_OFFSET UNITYSDK_OFFSET(0x1727FD80)
#define NEILHDLDCFF_IBNLJKFKHDN_OFFSET UNITYSDK_OFFSET(0x7A3490)
#define NEILHDLDCFF_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x7A3480)

inline static constexpr unsigned int NEILHDLDCFF_TypeDefinitionIndex = 64913;

struct alignas(4) NEILHDLDCFF
{
	::System::Boolean KNDMMHPDPIB(::System::Single& PMNLNNGEIFM, ::MoleMole::EntityHandle& HPADNAEINPK, ::DFNGPLNPPEG_1<::GEPOPJAHMDM>*& HINEJHJDICB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::MoleMole::EntityHandle&, ::DFNGPLNPPEG_1<::GEPOPJAHMDM>*&))((::PBYTE)hIl2Cpp + NEILHDLDCFF_KNDMMHPDPIB_OFFSET))(this, PMNLNNGEIFM, HPADNAEINPK, HINEJHJDICB);
	}

	::System::Boolean IBNLJKFKHDN(::System::Single& PMNLNNGEIFM, ::MoleMole::EntityHandle& HPADNAEINPK, ::DFNGPLNPPEG_1<::GEPOPJAHMDM>*& NFKAJAIMGJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::MoleMole::EntityHandle&, ::DFNGPLNPPEG_1<::GEPOPJAHMDM>*&))((::PBYTE)hIl2Cpp + NEILHDLDCFF_IBNLJKFKHDN_OFFSET))(this, PMNLNNGEIFM, HPADNAEINPK, NFKAJAIMGJM);
	}

	static ::System::Boolean HKHNFKIGJMH(::System::Single& PMNLNNGEIFM, ::MoleMole::EntityHandle& HPADNAEINPK, ::GEPOPJAHMDM& IJAEPDFDKCD, ::System::Boolean IMLAEGFDKKO)
	{
		return ((::System::Boolean(*)(::System::Single&, ::MoleMole::EntityHandle&, ::GEPOPJAHMDM&, ::System::Boolean))((::PBYTE)hIl2Cpp + NEILHDLDCFF_HKHNFKIGJMH_OFFSET))(PMNLNNGEIFM, HPADNAEINPK, IJAEPDFDKCD, IMLAEGFDKKO);
	}
};
