#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define IPNLNOJACOF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16ABA900)
#define IPNLNOJACOF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16ABA750)
#define IPNLNOJACOF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16ABACE0)
#define IPNLNOJACOF_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x16ABACF0)
#define IPNLNOJACOF_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x16ABA500)
#define IPNLNOJACOF__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABAB80)

inline static constexpr unsigned int IPNLNOJACOF_TypeDefinitionIndex = 87972;

class IPNLNOJACOF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PAIHEKLNANL; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* JENKCHAHJCK; // 0x30
	::KCMIFNGABDC_1<::System::Single>* KCMGPKPIEJF; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* JIFJIDDPGAK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLNOJACOF__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IPNLNOJACOF_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLNOJACOF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IPNLNOJACOF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLNOJACOF_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IPNLNOJACOF_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
