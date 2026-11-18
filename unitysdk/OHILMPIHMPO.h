#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define OHILMPIHMPO_BNGEOAODMIA_OFFSET UNITYSDK_OFFSET(0x16C16A70)
#define OHILMPIHMPO_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x16C16A80)
#define OHILMPIHMPO_FHDPEKFHCFH_OFFSET UNITYSDK_OFFSET(0x16C16940)
#define OHILMPIHMPO_HLFOLBGJLAE_OFFSET UNITYSDK_OFFSET(0x16C168F0)
#define OHILMPIHMPO_HMIPBLJEHBM_OFFSET UNITYSDK_OFFSET(0x16C16990)
#define OHILMPIHMPO_INLIEPAKKDI_OFFSET UNITYSDK_OFFSET(0x16C16A90)
#define OHILMPIHMPO_LBBNEGIFGGJ_OFFSET UNITYSDK_OFFSET(0x16C169E0)
#define OHILMPIHMPO_NHKBAGIDNAF_OFFSET UNITYSDK_OFFSET(0x16C16930)
#define OHILMPIHMPO__CTOR_OFFSET UNITYSDK_OFFSET(0x16C168E0)

inline static constexpr unsigned int OHILMPIHMPO_TypeDefinitionIndex = 87017;

class OHILMPIHMPO : public ::System::Object
{
public:
	::System::Func_1<::System::Int32>* GJMFOAGDKIG; // 0x10
	::System::Boolean _BGPIIGMAMGJ_k__BackingField; // 0x18
	::System::Boolean _OFNLHHFIFIO_k__BackingField; // 0x19

	::System::Void _ctor(::System::Func_1<::System::Int32>* NMFABAAMEDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OHILMPIHMPO__CTOR_OFFSET))(this, NMFABAAMEDK);
	}

	::System::Void HLFOLBGJLAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHILMPIHMPO_HLFOLBGJLAE_OFFSET))(this);
	}

	::System::Void NHKBAGIDNAF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHILMPIHMPO_NHKBAGIDNAF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FHDPEKFHCFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHILMPIHMPO_FHDPEKFHCFH_OFFSET))(this);
	}

	::System::Void HMIPBLJEHBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHILMPIHMPO_HMIPBLJEHBM_OFFSET))(this);
	}

	::System::Boolean LBBNEGIFGGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHILMPIHMPO_LBBNEGIFGGJ_OFFSET))(this);
	}

	::System::Void BNGEOAODMIA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHILMPIHMPO_BNGEOAODMIA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHILMPIHMPO_DOCGMAIMGNJ_OFFSET))(this);
	}

	::System::Boolean INLIEPAKKDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHILMPIHMPO_INLIEPAKKDI_OFFSET))(this);
	}
};
