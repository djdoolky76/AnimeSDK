#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPIDBMGAMPG_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x1078BD80)
#define MPIDBMGAMPG_OMPFLKCBFHF_1_OFFSET UNITYSDK_OFFSET(0x1078BE00)
#define MPIDBMGAMPG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1078BF00)
#define MPIDBMGAMPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1078BD30)

inline static constexpr unsigned int MPIDBMGAMPG_TypeDefinitionIndex = 90334;

class MPIDBMGAMPG : public ::System::Object
{
public:
	// static const ::System::Int32 NEOBCFBKGMH = 0x20; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DPKOIBEFPAO>* IGMGDAMKPBE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIDBMGAMPG__CTOR_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF(::System::Int32 IDIEBKGPLDD, ::DPKOIBEFPAO& FDGOKNAPJPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + MPIDBMGAMPG_IBBLCAOMCKF_OFFSET))(this, IDIEBKGPLDD, FDGOKNAPJPN);
	}

	::DPKOIBEFPAO OMPFLKCBFHF_1(::System::Int32 IDIEBKGPLDD)
	{
		return ((::DPKOIBEFPAO(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MPIDBMGAMPG_OMPFLKCBFHF_1_OFFSET))(this, IDIEBKGPLDD);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIDBMGAMPG_PHOADBJGFBE_OFFSET))(this);
	}
};
