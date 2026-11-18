#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define LDFEBFPGBHD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x152430A0)
#define LDFEBFPGBHD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15242DE0)
#define LDFEBFPGBHD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15243770)
#define LDFEBFPGBHD_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15243800)
#define LDFEBFPGBHD_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15242CF0)
#define LDFEBFPGBHD__CTOR_OFFSET UNITYSDK_OFFSET(0x15243570)

inline static constexpr unsigned int LDFEBFPGBHD_TypeDefinitionIndex = 87221;

class LDFEBFPGBHD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* OOIGAOOFHCA; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x28
	::KCMIFNGABDC_1<::System::String*>* AFFJLOEPLFI; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* NCOGBILBLHO; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* JABMGCCFGBE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFEBFPGBHD__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LDFEBFPGBHD_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFEBFPGBHD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LDFEBFPGBHD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFEBFPGBHD_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LDFEBFPGBHD_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
