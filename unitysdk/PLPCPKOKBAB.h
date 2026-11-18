#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
class LOHPBEPDLOG;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PLPCPKOKBAB_BDOJFFKNGGD_OFFSET UNITYSDK_OFFSET(0x1CB51760)
#define PLPCPKOKBAB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1CB50970)
#define PLPCPKOKBAB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1CB503C0)
#define PLPCPKOKBAB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1CB517E0)
#define PLPCPKOKBAB_GEJMBOJICCJ_OFFSET UNITYSDK_OFFSET(0x1CB51600)
#define PLPCPKOKBAB_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1CB51870)
#define PLPCPKOKBAB_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1CB50270)
#define PLPCPKOKBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB51120)

inline static constexpr unsigned int PLPCPKOKBAB_TypeDefinitionIndex = 53184;

class PLPCPKOKBAB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* HJMKLEDFJOO; // 0x20
	::KCMIFNGABDC_1<::System::String*>* OKDAHAJFBKG; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* CJMKJBPGJMO; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* JOKLDJLJOEO; // 0x40
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x48
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x50
	::MKBBPOFGLOF* DHKCBJMHDDM; // 0x58
	::MKBBPOFGLOF* HHAPKAHENGG; // 0x60
	::KCMIFNGABDC_1<::System::Single>* HMMGKADBNFO; // 0x68
	::KCMIFNGABDC_1<::System::String*>* OBMJADCFPGM; // 0x70
	::KCMIFNGABDC_1<::System::Int32>* LKFIDBCDBKJ; // 0x78
	::KCMIFNGABDC_1<::System::Int32>* EKGEIFLPBHB; // 0x80
	::MKBBPOFGLOF* KBMDDFDMDCB; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPCPKOKBAB__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + PLPCPKOKBAB_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPCPKOKBAB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PLPCPKOKBAB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Void GEJMBOJICCJ(::System::Int32 NHJDGBFINHB, ::LOHPBEPDLOG* EILNLHIFNKK)
	{
		return ((::System::Void(*)(::System::Int32, ::LOHPBEPDLOG*))((::PBYTE)hIl2Cpp + PLPCPKOKBAB_GEJMBOJICCJ_OFFSET))(NHJDGBFINHB, EILNLHIFNKK);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPCPKOKBAB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + PLPCPKOKBAB_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid BDOJFFKNGGD(::System::Int32 KANDGOGIJCF, ::System::Int32 NHLCCIEKEPD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PLPCPKOKBAB_BDOJFFKNGGD_OFFSET))(KANDGOGIJCF, NHLCCIEKEPD);
	}
};
