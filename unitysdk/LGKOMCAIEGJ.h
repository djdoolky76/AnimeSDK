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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGKOMCAIEGJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6954C0)
#define LGKOMCAIEGJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB6955E0)
#define LGKOMCAIEGJ_BPAKKMMCLHE_OFFSET UNITYSDK_OFFSET(0xB694F30)
#define LGKOMCAIEGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB6956D0)
#define LGKOMCAIEGJ_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB6946F0)
#define LGKOMCAIEGJ_EHDAJJMPAPB_OFFSET UNITYSDK_OFFSET(0xB695310)
#define LGKOMCAIEGJ_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB694240)
#define LGKOMCAIEGJ_GIPNBDJDKNN_OFFSET UNITYSDK_OFFSET(0xB694CC0)
#define LGKOMCAIEGJ_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xB695400)
#define LGKOMCAIEGJ_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xB6952C0)
#define LGKOMCAIEGJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB6942E0)
#define LGKOMCAIEGJ_KPAILHIMENM_OFFSET UNITYSDK_OFFSET(0xB6951A0)
#define LGKOMCAIEGJ_LEPOBJANNPE_OFFSET UNITYSDK_OFFSET(0xB6950C0)
#define LGKOMCAIEGJ_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xB694520)
#define LGKOMCAIEGJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB694790)
#define LGKOMCAIEGJ_OBOACBANEOI_OFFSET UNITYSDK_OFFSET(0xB694B20)
#define LGKOMCAIEGJ_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB694480)
#define LGKOMCAIEGJ_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB694660)
#define LGKOMCAIEGJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xB6941E0)

inline static constexpr unsigned int LGKOMCAIEGJ_TypeDefinitionIndex = 71771;

	class LGKOMCAIEGJ : public ::FMPCODLIOLG
	{
	public:
		::PKMJADCNABI* DCMIEFDOKFN; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleAlertType, ::System::Action_1<::EIIJNHOOCOM*>*>* DBFBJNLGNML; // 0x70
		::JKHIJPDPODG* KBGINGJOMKP; // 0x78
		::HNLOPNDDJNA* HNOHDMKFCNK; // 0x80
		::RPG::Client::PrefabLoadMeta* KEOBHBJACPK; // 0x88
		::DBBFCIGNGNO* PAEOONOIKOK; // 0x90
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
