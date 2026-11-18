#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define JNDIDJMJFFD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18A264B0)
#define JNDIDJMJFFD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18A263D0)
#define JNDIDJMJFFD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18A26A30)
#define JNDIDJMJFFD_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x18A269A0)
#define JNDIDJMJFFD_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x18A26280)
#define JNDIDJMJFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A268B0)

inline static constexpr unsigned int JNDIDJMJFFD_TypeDefinitionIndex = 88670;

class JNDIDJMJFFD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* JHKCHMHFJFN; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* BJDBKHFJGEM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDIDJMJFFD__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + JNDIDJMJFFD_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDIDJMJFFD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JNDIDJMJFFD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + JNDIDJMJFFD_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDIDJMJFFD_GDEOPIBNOIN_OFFSET))(this);
	}
};
