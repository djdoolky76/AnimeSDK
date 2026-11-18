#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LPDONJLLIDD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15905EC0)
#define LPDONJLLIDD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15905C60)
#define LPDONJLLIDD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x159065F0)
#define LPDONJLLIDD_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15906680)
#define LPDONJLLIDD_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15905B10)
#define LPDONJLLIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x15906430)

inline static constexpr unsigned int LPDONJLLIDD_TypeDefinitionIndex = 41701;

class LPDONJLLIDD : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* HMNPNEALHEH; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::Single>* HFGFLBIIIEL; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* BMBEFLEKEJF; // 0x30
	::KCMIFNGABDC_1<::System::String*>* KFNMNOEAIBM; // 0x38
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDONJLLIDD__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LPDONJLLIDD_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDONJLLIDD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LPDONJLLIDD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDONJLLIDD_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LPDONJLLIDD_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
