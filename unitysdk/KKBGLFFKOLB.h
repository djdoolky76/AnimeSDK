#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define KKBGLFFKOLB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18631B70)
#define KKBGLFFKOLB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x186317F0)
#define KKBGLFFKOLB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18632310)
#define KKBGLFFKOLB_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x18632280)
#define KKBGLFFKOLB_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x186313C0)
#define KKBGLFFKOLB__CTOR_OFFSET UNITYSDK_OFFSET(0x18631F50)

inline static constexpr unsigned int KKBGLFFKOLB_TypeDefinitionIndex = 79870;

class KKBGLFFKOLB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* JENKCHAHJCK; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* FFILKPBEFIP; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* PAIHEKLNANL; // 0x40
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* NGIFHHAPGBB; // 0x50
	::KCMIFNGABDC_1<::System::Boolean>* JIFJIDDPGAK; // 0x58
	::KCMIFNGABDC_1<::System::Boolean>* LONJAACGIEB; // 0x60
	::KCMIFNGABDC_1<::System::Boolean>* GCFGKEIHKHE; // 0x68
	::KCMIFNGABDC_1<::System::Single>* KCMGPKPIEJF; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGLFFKOLB__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + KKBGLFFKOLB_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGLFFKOLB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KKBGLFFKOLB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + KKBGLFFKOLB_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGLFFKOLB_GDEOPIBNOIN_OFFSET))(this);
	}
};
