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

#define LGKOMCAIEGJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF33390)
#define LGKOMCAIEGJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBF334B0)
#define LGKOMCAIEGJ_BPAKKMMCLHE_OFFSET UNITYSDK_OFFSET(0xBF32DE0)
#define LGKOMCAIEGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBF335A0)
#define LGKOMCAIEGJ_EHDAJJMPAPB_OFFSET UNITYSDK_OFFSET(0xBF331E0)
#define LGKOMCAIEGJ_GIPNBDJDKNN_OFFSET UNITYSDK_OFFSET(0xBF32B80)
#define LGKOMCAIEGJ_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xBF332D0)
#define LGKOMCAIEGJ_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xBF33190)
#define LGKOMCAIEGJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBF32190)
#define LGKOMCAIEGJ_KPAILHIMENM_OFFSET UNITYSDK_OFFSET(0xBF33060)
#define LGKOMCAIEGJ_LEPOBJANNPE_OFFSET UNITYSDK_OFFSET(0xBF32F80)
#define LGKOMCAIEGJ_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xBF323D0)
#define LGKOMCAIEGJ_OBOACBANEOI_OFFSET UNITYSDK_OFFSET(0xBF329D0)
#define LGKOMCAIEGJ_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBF32330)
#define LGKOMCAIEGJ_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBF32510)
#define LGKOMCAIEGJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBF32640)
#define LGKOMCAIEGJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF32040)
#define LGKOMCAIEGJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBF325A0)
#define LGKOMCAIEGJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBF320F0)

inline static constexpr unsigned int LGKOMCAIEGJ_TypeDefinitionIndex = 73780;

	class LGKOMCAIEGJ : public ::FMPCODLIOLG
	{
	public:
		::PKMJADCNABI* DCMIEFDOKFN; // 0x60
		::HNLOPNDDJNA* HNOHDMKFCNK; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::RPG::Client::PrefabLoadMeta* KEOBHBJACPK; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleAlertType, ::System::Action_1<::EIIJNHOOCOM*>*>* DBFBJNLGNML; // 0x80
		::DBBFCIGNGNO* PAEOONOIKOK; // 0x88
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKOMCAIEGJ__INITVARONCE_OFFSET))(this);
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
