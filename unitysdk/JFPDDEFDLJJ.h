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

#define JFPDDEFDLJJ_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x13CBA5C0)
#define JFPDDEFDLJJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13CBA550)
#define JFPDDEFDLJJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13CBA120)
#define JFPDDEFDLJJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13CBAF80)
#define JFPDDEFDLJJ_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x13CBAEF0)
#define JFPDDEFDLJJ_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x13CB9FD0)
#define JFPDDEFDLJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBAC00)

inline static constexpr unsigned int JFPDDEFDLJJ_TypeDefinitionIndex = 61870;

class JFPDDEFDLJJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* OIBPHKLPFKM; // 0x28
	::KCMIFNGABDC_1<::System::String*>* ADBMMBJKMAO; // 0x30
	::KCMIFNGABDC_1<::System::String*>* ABHACBINODB; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* HBMPEJOIIDO; // 0x40
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* COKGHNNGBOB; // 0x48
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x50
	::KCMIFNGABDC_1<::System::String*>* BJKJPDICKLN; // 0x58
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* CJPAEJHGBKF; // 0x60
	::KCMIFNGABDC_1<::System::String*>* CDAJBBJCABG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPDDEFDLJJ__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + JFPDDEFDLJJ_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPDDEFDLJJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JFPDDEFDLJJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JFPDDEFDLJJ_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + JFPDDEFDLJJ_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPDDEFDLJJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
