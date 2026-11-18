#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEBMAOFBBEN.h"
#include "unitysdk/BHELLEGKALM.h"
#include "unitysdk/BNHPDBDCOAJ.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/MLGOKCHMCPO.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EGOJNNIFDJJ;
class ENGKPGFGGLM;
namespace Foundation::ViewObject { class ITraitSyncEntityCreator; }
namespace System { class EventArgs; }
namespace System::Threading { class CancellationTokenSource; }

#define GKMJINDLJMI_AAACFFKGNFN_OFFSET UNITYSDK_OFFSET(0x179F7E60)
#define GKMJINDLJMI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x179F75E0)
#define GKMJINDLJMI_BIGGECGFALM_OFFSET UNITYSDK_OFFSET(0x179F70D0)
#define GKMJINDLJMI_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x179F7ED0)
#define GKMJINDLJMI_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x179F7DE0)
#define GKMJINDLJMI_DPFLFHEBKJM_OFFSET UNITYSDK_OFFSET(0x179F7EC0)
#define GKMJINDLJMI_GPAMOAONOOO_OFFSET UNITYSDK_OFFSET(0x179F7840)
#define GKMJINDLJMI_HHPFLEOOHIM_OFFSET UNITYSDK_OFFSET(0x179F67B0)
#define GKMJINDLJMI_HJHMEECAMAP_OFFSET UNITYSDK_OFFSET(0x179F7E50)
#define GKMJINDLJMI_IJDGONJOOFA_OFFSET UNITYSDK_OFFSET(0x179F6220)
#define GKMJINDLJMI_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x179F7830)
#define GKMJINDLJMI_JLCAGKNAIFH_OFFSET UNITYSDK_OFFSET(0x179F6C30)
#define GKMJINDLJMI_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x179F7E40)
#define GKMJINDLJMI_KIOCJCEJAFB_OFFSET UNITYSDK_OFFSET(0x179F75F0)
#define GKMJINDLJMI_MHOAIECIELJ_OFFSET UNITYSDK_OFFSET(0x179F7EE0)
#define GKMJINDLJMI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x179F6BE0)
#define GKMJINDLJMI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x179F5A30)
#define GKMJINDLJMI_ONEVENT_OFFSET UNITYSDK_OFFSET(0x179F7000)
#define GKMJINDLJMI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x179F5920)
#define GKMJINDLJMI_PJCCAILEHKH_OFFSET UNITYSDK_OFFSET(0x179F7E70)
#define GKMJINDLJMI_POMHCMGMAPM_OFFSET UNITYSDK_OFFSET(0x179F5BE0)
#define GKMJINDLJMI_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x179F6150)
#define GKMJINDLJMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x179F57E0)
#define GKMJINDLJMI__CTOR_OFFSET UNITYSDK_OFFSET(0x179F75A0)

inline static constexpr unsigned int GKMJINDLJMI_TypeDefinitionIndex = 65319;

class GKMJINDLJMI
{
public:
	::MoleMole::EntityHandle PHHDHIBOCKA; // 0x28
	::BNHPDBDCOAJ FJBGACFCBPA; // 0x38
	::Foundation::ViewObject::ITraitSyncEntityCreator* GDPAJJEIIDJ; // 0x48
	::System::Threading::CancellationTokenSource* CBLAIGHMGKG; // 0x50
	::EGOJNNIFDJJ* BCFBJFHJEOB; // 0x58
	::System::Boolean KKDBJNANCJJ; // 0x60
	::System::Boolean NPIPJMPPAEG; // 0x61
	::System::Boolean GKMOGBLJGBL; // 0x62
	::System::Boolean LLDJAIMIGMK; // 0x63
	::MoleMole::Config::EntityType _FMCMEFLMGCG_k__BackingField; // 0x64
	::System::Int32 LIJDJFOGLCF; // 0x68
	::BEBMAOFBBEN _IFCAPOPPGIL_k__BackingField; // 0x6C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMJINDLJMI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_ONENABLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GKMJINDLJMI_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GKMJINDLJMI_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void KIOCJCEJAFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_KIOCJCEJAFB_OFFSET))(this);
	}

	::System::Void IJDGONJOOFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_IJDGONJOOFA_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void GPAMOAONOOO(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GKMJINDLJMI_GPAMOAONOOO_OFFSET))(this, HPADNAEINPK);
	}

	::System::Void HHPFLEOOHIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_HHPFLEOOHIM_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GKMJINDLJMI_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void HJHMEECAMAP(::MoleMole::Config::EntityType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + GKMJINDLJMI_HJHMEECAMAP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AAACFFKGNFN(::BEBMAOFBBEN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BEBMAOFBBEN))((::PBYTE)hIl2Cpp + GKMJINDLJMI_AAACFFKGNFN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PJCCAILEHKH(::Foundation::ViewObject::ITraitSyncEntityCreator* ELEIACDBIPL)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ITraitSyncEntityCreator*))((::PBYTE)hIl2Cpp + GKMJINDLJMI_PJCCAILEHKH_OFFSET))(this, ELEIACDBIPL);
	}

	::System::Void JLCAGKNAIFH(::BHELLEGKALM NKCHHHKMBNA)
	{
		return ((::System::Void(*)(::PVOID, ::BHELLEGKALM))((::PBYTE)hIl2Cpp + GKMJINDLJMI_JLCAGKNAIFH_OFFSET))(this, NKCHHHKMBNA);
	}

	::System::Void POMHCMGMAPM(::MLGOKCHMCPO NGIMPFDABMF)
	{
		return ((::System::Void(*)(::PVOID, ::MLGOKCHMCPO))((::PBYTE)hIl2Cpp + GKMJINDLJMI_POMHCMGMAPM_OFFSET))(this, NGIMPFDABMF);
	}

	::MoleMole::Config::EntityType DPFLFHEBKJM()
	{
		return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_DPFLFHEBKJM_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GKMJINDLJMI_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BIGGECGFALM(::System::UInt32 JHGKGEGGGFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKMJINDLJMI_BIGGECGFALM_OFFSET))(this, JHGKGEGGGFF);
	}

	::BEBMAOFBBEN MHOAIECIELJ()
	{
		return ((::BEBMAOFBBEN(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMJINDLJMI_MHOAIECIELJ_OFFSET))(this);
	}
};
