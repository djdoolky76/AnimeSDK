#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define OJLMFBKKCMD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14F88500)
#define OJLMFBKKCMD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14F883B0)
#define OJLMFBKKCMD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14F88710)
#define OJLMFBKKCMD_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x14F88680)
#define OJLMFBKKCMD_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x14F88260)
#define OJLMFBKKCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F88550)

inline static constexpr unsigned int OJLMFBKKCMD_TypeDefinitionIndex = 39391;

class OJLMFBKKCMD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JMAKNLAFHHN; // 0x28
	::KCMIFNGABDC_1<::System::Single>* POPOAOAMBEJ; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* KIAEIAEOCIO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLMFBKKCMD__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OJLMFBKKCMD_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLMFBKKCMD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OJLMFBKKCMD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OJLMFBKKCMD_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLMFBKKCMD_GDEOPIBNOIN_OFFSET))(this);
	}
};
