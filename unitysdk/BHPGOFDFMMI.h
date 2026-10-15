#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define BHPGOFDFMMI_ABMBAHKHIIA_OFFSET UNITYSDK_OFFSET(0xB4931B0)
#define BHPGOFDFMMI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4937C0)
#define BHPGOFDFMMI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB4938B0)
#define BHPGOFDFMMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB493980)
#define BHPGOFDFMMI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB492ED0)
#define BHPGOFDFMMI_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB4930B0)
#define BHPGOFDFMMI_GIAHLFBOGMN_OFFSET UNITYSDK_OFFSET(0xB493140)
#define BHPGOFDFMMI_JMEKJPKAOIK_OFFSET UNITYSDK_OFFSET(0xB4936E0)
#define BHPGOFDFMMI_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0xB493690)
#define BHPGOFDFMMI_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB492F40)
#define BHPGOFDFMMI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB4930F0)
#define BHPGOFDFMMI__ONBIND_OFFSET UNITYSDK_OFFSET(0xB492DB0)

inline static constexpr unsigned int BHPGOFDFMMI_TypeDefinitionIndex = 71396;

	class BHPGOFDFMMI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DEPJGODCJDH; // 0x60
		::UnityEngine::Transform* NMLCIJCOLBC; // 0x68
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x70
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x78
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0x80
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void GIAHLFBOGMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_GIAHLFBOGMN_OFFSET))(this);
		}

		::System::Boolean ABMBAHKHIIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_ABMBAHKHIIA_OFFSET))(this);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_NECEALBHFAB_OFFSET))(this);
		}

		::System::Void JMEKJPKAOIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_JMEKJPKAOIK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
