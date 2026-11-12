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

#define BHPGOFDFMMI_ABMBAHKHIIA_OFFSET UNITYSDK_OFFSET(0xBE26380)
#define BHPGOFDFMMI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE26990)
#define BHPGOFDFMMI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE26A80)
#define BHPGOFDFMMI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE26B50)
#define BHPGOFDFMMI_GIAHLFBOGMN_OFFSET UNITYSDK_OFFSET(0xBE26310)
#define BHPGOFDFMMI_JMEKJPKAOIK_OFFSET UNITYSDK_OFFSET(0xBE268B0)
#define BHPGOFDFMMI_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0xBE26860)
#define BHPGOFDFMMI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBE262C0)
#define BHPGOFDFMMI__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBE26110)
#define BHPGOFDFMMI__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE25F80)
#define BHPGOFDFMMI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBE260A0)
#define BHPGOFDFMMI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBE26280)

inline static constexpr unsigned int BHPGOFDFMMI_TypeDefinitionIndex = 73376;

	class BHPGOFDFMMI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DEPJGODCJDH; // 0x60
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x68
		::UnityEngine::Transform* NMLCIJCOLBC; // 0x70
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BHPGOFDFMMI__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPGOFDFMMI__SETUPVIEW_OFFSET))(this);
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
