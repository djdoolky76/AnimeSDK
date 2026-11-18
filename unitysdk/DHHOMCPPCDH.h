#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/INPKPAEBOLJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class EventArgs; }

#define DHHOMCPPCDH_AKJAMCLFFIK_OFFSET UNITYSDK_OFFSET(0x12BB2EE0)
#define DHHOMCPPCDH_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x12BB2D20)
#define DHHOMCPPCDH_DIEHFNJPGKO_OFFSET UNITYSDK_OFFSET(0x12BB2FB0)
#define DHHOMCPPCDH_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x12BB30A0)
#define DHHOMCPPCDH_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x12BB3100)
#define DHHOMCPPCDH_JCAECGMPHGC_OFFSET UNITYSDK_OFFSET(0x12BB3110)
#define DHHOMCPPCDH_JHPCILKBJDF_OFFSET UNITYSDK_OFFSET(0x12BB2D30)
#define DHHOMCPPCDH_JKCLNGPMMPG_OFFSET UNITYSDK_OFFSET(0x12BB2B30)
#define DHHOMCPPCDH_JKNAKPDAINF_OFFSET UNITYSDK_OFFSET(0x12BB2870)
#define DHHOMCPPCDH_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x12BB2EF0)
#define DHHOMCPPCDH_KLCLOHMOMBJ_OFFSET UNITYSDK_OFFSET(0x12BB2F00)
#define DHHOMCPPCDH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12BB2990)
#define DHHOMCPPCDH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12BB26E0)
#define DHHOMCPPCDH_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12BB2BE0)
#define DHHOMCPPCDH_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x12BB2C30)
#define DHHOMCPPCDH__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB2630)
#define DHHOMCPPCDH__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB2CE0)

inline static constexpr unsigned int DHHOMCPPCDH_TypeDefinitionIndex = 79796;

class DHHOMCPPCDH
{
public:
	// static const ::System::String* FPIEBDKEJAH; // 0x0
	::System::UInt32 PEMCGMAEHJF; // 0x28
	::System::Boolean ABIHPNIIIPB; // 0x2C
	::System::Boolean _KLABMGNOFKI_k__BackingField; // 0x2D
	::System::Boolean DDHBBGNDDMG; // 0x2E

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHHOMCPPCDH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Boolean JHPCILKBJDF(::MoleMole::EntityHandle& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_JHPCILKBJDF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void AKJAMCLFFIK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_AKJAMCLFFIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void KLCLOHMOMBJ(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_KLCLOHMOMBJ_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void DIEHFNJPGKO(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_DIEHFNJPGKO_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JKCLNGPMMPG(::INPKPAEBOLJ FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::INPKPAEBOLJ))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_JKCLNGPMMPG_OFFSET))(this, FKMHMOELCIO);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void JKNAKPDAINF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_JKNAKPDAINF_OFFSET))(this);
	}

	::System::Boolean JCAECGMPHGC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHOMCPPCDH_JCAECGMPHGC_OFFSET))(this);
	}
};
