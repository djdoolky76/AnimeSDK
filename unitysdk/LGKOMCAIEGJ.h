#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DBBFCIGNGNO;
class EIIJNHOOCOM;
class HNLOPNDDJNA;
class JKHIJPDPODG;
class PKMJADCNABI;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGKOMCAIEGJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB69C0F0)
#define LGKOMCAIEGJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB69C210)
#define LGKOMCAIEGJ_BPAKKMMCLHE_OFFSET UNITYSDK_OFFSET(0xB69BB50)
#define LGKOMCAIEGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB69C300)
#define LGKOMCAIEGJ_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB69B310)
#define LGKOMCAIEGJ_EHDAJJMPAPB_OFFSET UNITYSDK_OFFSET(0xB69BF40)
#define LGKOMCAIEGJ_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB69AE50)
#define LGKOMCAIEGJ_GIPNBDJDKNN_OFFSET UNITYSDK_OFFSET(0xB69B8F0)
#define LGKOMCAIEGJ_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xB69C030)
#define LGKOMCAIEGJ_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xB69BEF0)
#define LGKOMCAIEGJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB69AEF0)
#define LGKOMCAIEGJ_KPAILHIMENM_OFFSET UNITYSDK_OFFSET(0xB69BDD0)
#define LGKOMCAIEGJ_LEPOBJANNPE_OFFSET UNITYSDK_OFFSET(0xB69BCF0)
#define LGKOMCAIEGJ_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xB69B140)
#define LGKOMCAIEGJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB69B3B0)
#define LGKOMCAIEGJ_OBOACBANEOI_OFFSET UNITYSDK_OFFSET(0xB69B740)
#define LGKOMCAIEGJ_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB69B0A0)
#define LGKOMCAIEGJ_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB69B280)
#define LGKOMCAIEGJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xB69ADF0)

	class LGKOMCAIEGJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* KEOBHBJACPK; // 0x60
		::DBBFCIGNGNO* PAEOONOIKOK; // 0x68
		::PKMJADCNABI* DCMIEFDOKFN; // 0x70
		::HNLOPNDDJNA* HNOHDMKFCNK; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleAlertType, ::System::Action*>* DBFBJNLGNML; // 0x88
		::JKHIJPDPODG* KBGINGJOMKP; // 0x90
		::System::Boolean HAKHCANCCKK; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void OBOACBANEOI(::EIIJNHOOCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIIJNHOOCOM*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_OBOACBANEOI_OFFSET))(this, a1);
		}

		::System::Void GIPNBDJDKNN(::EIIJNHOOCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIIJNHOOCOM*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_GIPNBDJDKNN_OFFSET))(this, a1);
		}

		::System::Void BPAKKMMCLHE(::EIIJNHOOCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIIJNHOOCOM*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_BPAKKMMCLHE_OFFSET))(this, a1);
		}

		::System::Void LEPOBJANNPE(::EIIJNHOOCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIIJNHOOCOM*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_LEPOBJANNPE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void KPAILHIMENM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_KPAILHIMENM_OFFSET))(this);
		}

		::System::Void EHDAJJMPAPB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_EHDAJJMPAPB_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
