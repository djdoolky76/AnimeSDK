#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class DBMAHDDGMHM_1;

#define LKGPKGCENCN_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x158F41A0)
#define LKGPKGCENCN_EEMJNGHDHPM_OFFSET UNITYSDK_OFFSET(0x158F4280)
#define LKGPKGCENCN_HHJMIFEPJPC_OFFSET UNITYSDK_OFFSET(0x158F4210)
#define LKGPKGCENCN_LNFBGMLKFPO_OFFSET UNITYSDK_OFFSET(0x158F40A0)
#define LKGPKGCENCN_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x158F4030)
#define LKGPKGCENCN_MJIEEJGIGMJ_OFFSET UNITYSDK_OFFSET(0x158F4120)
#define LKGPKGCENCN_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x158F3F60)
#define LKGPKGCENCN__CTOR_OFFSET UNITYSDK_OFFSET(0x158F4020)

inline static constexpr unsigned int LKGPKGCENCN_TypeDefinitionIndex = 80366;

class LKGPKGCENCN : public ::JJEJBPGJPJN
{
public:
	::DBMAHDDGMHM_1<::System::Int32>* HMPOGGBAHHJ; // 0x88
	::DBMAHDDGMHM_1<::System::Boolean>* AGMKCGDOPII; // 0x90
	::DBMAHDDGMHM_1<::System::Int32>* NJBDMLNIPNP; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGPKGCENCN__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGPKGCENCN_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGPKGCENCN_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Void LNFBGMLKFPO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGPKGCENCN_LNFBGMLKFPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MJIEEJGIGMJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKGPKGCENCN_MJIEEJGIGMJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGPKGCENCN_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Boolean HHJMIFEPJPC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGPKGCENCN_HHJMIFEPJPC_OFFSET))(this);
	}

	::System::Void EEMJNGHDHPM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKGPKGCENCN_EEMJNGHDHPM_OFFSET))(this, EGEGIMGMJHN);
	}
};
