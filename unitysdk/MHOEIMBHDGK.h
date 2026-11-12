#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BNPCGCMCEOH;
class EIDGANKEKNL;
class HNLOPNDDJNA;
namespace RPG::Client { class BattleAlertParam; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }

#define MHOEIMBHDGK_AJCEKLOAHDH_OFFSET UNITYSDK_OFFSET(0xC1FD440)
#define MHOEIMBHDGK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC1FDD00)
#define MHOEIMBHDGK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC1FDDD0)
#define MHOEIMBHDGK_BFBNIOPBGPJ_OFFSET UNITYSDK_OFFSET(0xC1FDC20)
#define MHOEIMBHDGK_CDOMMLLDGHF_OFFSET UNITYSDK_OFFSET(0xC1FD860)
#define MHOEIMBHDGK_CTOR_OFFSET UNITYSDK_OFFSET(0xC1FDE70)
#define MHOEIMBHDGK_HPDGNMKIODD_1_OFFSET UNITYSDK_OFFSET(0xC1FDA90)
#define MHOEIMBHDGK_HPDGNMKIODD_OFFSET UNITYSDK_OFFSET(0xC1FD940)
#define MHOEIMBHDGK_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xC1FD6F0)
#define MHOEIMBHDGK_PLIFMKMPOAH_OFFSET UNITYSDK_OFFSET(0xC1FDB40)
#define MHOEIMBHDGK_PMIOPEECIEL_OFFSET UNITYSDK_OFFSET(0xC1FDB90)
#define MHOEIMBHDGK__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC1FD170)
#define MHOEIMBHDGK__ONBIND_OFFSET UNITYSDK_OFFSET(0xC1FD340)
#define MHOEIMBHDGK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC1FD2E0)
#define MHOEIMBHDGK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC1FD3F0)

inline static constexpr unsigned int MHOEIMBHDGK_TypeDefinitionIndex = 73906;

	class MHOEIMBHDGK : public ::FMPCODLIOLG
	{
	public:
		::EIDGANKEKNL* EKLJLGGAOLA; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::HNLOPNDDJNA* HNOHDMKFCNK; // 0x70
		::RPG::Client::PrefabLoadMeta* NGJEPNGFDKL; // 0x78
		::System::Boolean NHFNIKJPEJM; // 0x80
		::System::Boolean LCEOBHDEKIC; // 0x81
		::System::Boolean FHBNNGCEPFD; // 0x82
		::System::Byte _padding0[0x1];
		::RPG::GameCore::SkillType EJKCNMGEKBG; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MHOEIMBHDGK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void HPDGNMKIODD(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_HPDGNMKIODD_OFFSET))(this, a1);
		}

		::System::Void HPDGNMKIODD_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillType, ::System::Boolean))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_HPDGNMKIODD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PLIFMKMPOAH(::RPG::Client::BattleAlertParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_PLIFMKMPOAH_OFFSET))(this, a1);
		}

		::System::Void CDOMMLLDGHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_CDOMMLLDGHF_OFFSET))(this);
		}

		::System::Void AJCEKLOAHDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_AJCEKLOAHDH_OFFSET))(this);
		}

		::BNPCGCMCEOH* PMIOPEECIEL()
		{
			return ((::BNPCGCMCEOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_PMIOPEECIEL_OFFSET))(this);
		}

		::System::Void BFBNIOPBGPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_BFBNIOPBGPJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOEIMBHDGK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
