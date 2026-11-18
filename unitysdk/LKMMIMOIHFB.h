#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LKMMIMOIHFB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x14DBD9B0)
#define LKMMIMOIHFB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14DBD940)
#define LKMMIMOIHFB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14DBD5D0)
#define LKMMIMOIHFB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14DBE5F0)
#define LKMMIMOIHFB_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x14DBE560)
#define LKMMIMOIHFB_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x14DBD480)
#define LKMMIMOIHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBE2E0)

inline static constexpr unsigned int LKMMIMOIHFB_TypeDefinitionIndex = 91243;

class LKMMIMOIHFB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* BCABIDFJDJD; // 0x18
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* LPILDFJMJFM; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* BJKJPDICKLN; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* OIBPHKLPFKM; // 0x48
	::KCMIFNGABDC_1<::System::String*>* ABHACBINODB; // 0x50
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* COKGHNNGBOB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMMIMOIHFB__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LKMMIMOIHFB_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMMIMOIHFB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LKMMIMOIHFB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LKMMIMOIHFB_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LKMMIMOIHFB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMMIMOIHFB_GDEOPIBNOIN_OFFSET))(this);
	}
};
