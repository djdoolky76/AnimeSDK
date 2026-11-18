#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HHHNNEFJGIB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10104C10)
#define HHHNNEFJGIB_FCMMNBKPEOI_OFFSET UNITYSDK_OFFSET(0x10104FC0)
#define HHHNNEFJGIB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10104A60)
#define HHHNNEFJGIB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10105280)
#define HHHNNEFJGIB_ILCNCILODLH_OFFSET UNITYSDK_OFFSET(0x10104C80)
#define HHHNNEFJGIB_JCNNFDFICBG_OFFSET UNITYSDK_OFFSET(0x10105160)
#define HHHNNEFJGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x10104E60)

inline static constexpr unsigned int HHHNNEFJGIB_TypeDefinitionIndex = 65097;

class HHHNNEFJGIB : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* FPIEBDKEJAH; // 0x0
	::KCMIFNGABDC_1<::System::Single>* ONIDOHFPKPL; // 0x28
	::KCMIFNGABDC_1<::System::Single>* MFMNNDNDGNE; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38
	::KCMIFNGABDC_1<::System::String*>* FBJACFCCMBH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHNNEFJGIB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHNNEFJGIB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHHNNEFJGIB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ILCNCILODLH(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHHNNEFJGIB_ILCNCILODLH_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHNNEFJGIB_GDEOPIBNOIN_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* FCMMNBKPEOI(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHHNNEFJGIB_FCMMNBKPEOI_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Single JCNNFDFICBG()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HHHNNEFJGIB_JCNNFDFICBG_OFFSET))();
	}
};
