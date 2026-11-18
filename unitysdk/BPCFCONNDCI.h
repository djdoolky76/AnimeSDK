#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLPAIJDHMMC.h"
#include "unitysdk/System/Object.h"

#define BPCFCONNDCI_CFJKAHKJNEN_OFFSET UNITYSDK_OFFSET(0x16859110)
#define BPCFCONNDCI_CIKKHBMBFFJ_OFFSET UNITYSDK_OFFSET(0x168590B0)
#define BPCFCONNDCI_JPILGDHGNCH_OFFSET UNITYSDK_OFFSET(0x16859100)
#define BPCFCONNDCI__CTOR_OFFSET UNITYSDK_OFFSET(0x168590A0)

inline static constexpr unsigned int BPCFCONNDCI_TypeDefinitionIndex = 87224;

class BPCFCONNDCI : public ::System::Object
{
public:
	// static const ::System::Int32 GFAICKADLBD = 0x3E7; // 0x0
	::System::Int32 HLPPGDOIPDF; // 0x10
	::OLPAIJDHMMC ABOCGLAOJGC; // 0x14
	::System::Boolean FBILHHBPEHD; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 _MCJBMNFEBKJ_k__BackingField; // 0x1C
	::System::Int32 BDHPLFIKOIL; // 0x20

	::System::Void _ctor(::System::Int32 KGAKHGJEHDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCFCONNDCI__CTOR_OFFSET))(this, KGAKHGJEHDH);
	}

	::System::Void CIKKHBMBFFJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCFCONNDCI_CIKKHBMBFFJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JPILGDHGNCH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCFCONNDCI_JPILGDHGNCH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CFJKAHKJNEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCFCONNDCI_CFJKAHKJNEN_OFFSET))(this);
	}
};
