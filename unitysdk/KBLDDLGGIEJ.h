#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define KBLDDLGGIEJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A497780)
#define KBLDDLGGIEJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A497520)
#define KBLDDLGGIEJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A498060)
#define KBLDDLGGIEJ_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1A4980F0)
#define KBLDDLGGIEJ_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1A4973D0)
#define KBLDDLGGIEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A497E20)

inline static constexpr unsigned int KBLDDLGGIEJ_TypeDefinitionIndex = 44521;

class KBLDDLGGIEJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::CPABOPKIGAL* DGLPCINAMAC; // 0x20
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* OCEJNCPCFDC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDDLGGIEJ__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + KBLDDLGGIEJ_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDDLGGIEJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KBLDDLGGIEJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDDLGGIEJ_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + KBLDDLGGIEJ_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
