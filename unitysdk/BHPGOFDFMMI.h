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

#define BHPGOFDFMMI_ABMBAHKHIIA_OFFSET UNITYSDK_OFFSET(0x1BAA18F0)
#define BHPGOFDFMMI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAA1F00)
#define BHPGOFDFMMI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAA1FF0)
#define BHPGOFDFMMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA20C0)
#define BHPGOFDFMMI_GIAHLFBOGMN_OFFSET UNITYSDK_OFFSET(0x1BAA1880)
#define BHPGOFDFMMI_JMEKJPKAOIK_OFFSET UNITYSDK_OFFSET(0x1BAA1E20)
#define BHPGOFDFMMI_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0x1BAA1DD0)
#define BHPGOFDFMMI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1BAA1830)
#define BHPGOFDFMMI__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1BAA1680)
#define BHPGOFDFMMI__ONBIND_OFFSET UNITYSDK_OFFSET(0x1BAA14F0)
#define BHPGOFDFMMI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1BAA1610)
#define BHPGOFDFMMI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1BAA17F0)

inline static constexpr unsigned int BHPGOFDFMMI_TypeDefinitionIndex = 73375;

	class BHPGOFDFMMI : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::UnityEngine::Transform* DEPJGODCJDH; // 0x68
		::UnityEngine::Transform* NMLCIJCOLBC; // 0x70
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x78
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
