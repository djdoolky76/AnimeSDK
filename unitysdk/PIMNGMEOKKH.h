#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define PIMNGMEOKKH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11B744A0)
#define PIMNGMEOKKH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11B743C0)
#define PIMNGMEOKKH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11B74840)
#define PIMNGMEOKKH__CTOR_OFFSET UNITYSDK_OFFSET(0x11B74750)

inline static constexpr unsigned int PIMNGMEOKKH_TypeDefinitionIndex = 59488;

class PIMNGMEOKKH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* DGNFHGKPLAG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMNGMEOKKH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMNGMEOKKH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PIMNGMEOKKH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMNGMEOKKH_GDEOPIBNOIN_OFFSET))(this);
	}
};
