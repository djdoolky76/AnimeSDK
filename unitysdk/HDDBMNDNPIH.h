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
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HDDBMNDNPIH_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x19E038A0)
#define HDDBMNDNPIH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19E03830)
#define HDDBMNDNPIH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19E03400)
#define HDDBMNDNPIH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19E043E0)
#define HDDBMNDNPIH_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x19E04350)
#define HDDBMNDNPIH_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x19E032B0)
#define HDDBMNDNPIH__CTOR_OFFSET UNITYSDK_OFFSET(0x19E04060)

inline static constexpr unsigned int HDDBMNDNPIH_TypeDefinitionIndex = 93081;

class HDDBMNDNPIH : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* OIBPHKLPFKM; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* NNBFOCPCNLM; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* CJPAEJHGBKF; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* COKGHNNGBOB; // 0x38
	::KCMIFNGABDC_1<::System::String*>* CDAJBBJCABG; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x48
	::CPABOPKIGAL* MMFNFINOFPN; // 0x50
	::KCMIFNGABDC_1<::System::Int32>* HBMPEJOIIDO; // 0x58
	::KCMIFNGABDC_1<::System::String*>* BJKJPDICKLN; // 0x60
	::KCMIFNGABDC_1<::System::String*>* ADBMMBJKMAO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBMNDNPIH__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HDDBMNDNPIH_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBMNDNPIH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDDBMNDNPIH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HDDBMNDNPIH_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDDBMNDNPIH_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBMNDNPIH_GDEOPIBNOIN_OFFSET))(this);
	}
};
