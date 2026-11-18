#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OGHPLDCLMHI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15F6B2F0)
#define OGHPLDCLMHI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15F6AFD0)
#define OGHPLDCLMHI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15F6BB80)
#define OGHPLDCLMHI_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15F6BC10)
#define OGHPLDCLMHI_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15F6AE80)
#define OGHPLDCLMHI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F6B950)

inline static constexpr unsigned int OGHPLDCLMHI_TypeDefinitionIndex = 79795;

class OGHPLDCLMHI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* KFNMNOEAIBM; // 0x18
	::KCMIFNGABDC_1<::System::Single>* HFGFLBIIIEL; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* BMBEFLEKEJF; // 0x38
	::KCMIFNGABDC_1<::System::String*>* LFBCIKEBGEJ; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* BOHBDHAPLDN; // 0x48
	::CPABOPKIGAL* HMNPNEALHEH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHPLDCLMHI__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OGHPLDCLMHI_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHPLDCLMHI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OGHPLDCLMHI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHPLDCLMHI_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OGHPLDCLMHI_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
