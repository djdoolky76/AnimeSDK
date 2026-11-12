#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class PHILMGOOGCK;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }

#define FOFEHEIJHFB_ABMBAHKHIIA_OFFSET UNITYSDK_OFFSET(0x16816160)
#define FOFEHEIJHFB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16816700)
#define FOFEHEIJHFB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x168167D0)
#define FOFEHEIJHFB_CPCNOCJLNPM_OFFSET UNITYSDK_OFFSET(0x16815FA0)
#define FOFEHEIJHFB_CTOR_OFFSET UNITYSDK_OFFSET(0x16816870)
#define FOFEHEIJHFB_GIAHLFBOGMN_OFFSET UNITYSDK_OFFSET(0x16816100)
#define FOFEHEIJHFB_GJFNEPDMOGM_OFFSET UNITYSDK_OFFSET(0x16816080)
#define FOFEHEIJHFB_JMEKJPKAOIK_OFFSET UNITYSDK_OFFSET(0x16816630)
#define FOFEHEIJHFB_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0x168165C0)
#define FOFEHEIJHFB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16815F30)
#define FOFEHEIJHFB__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16815D80)
#define FOFEHEIJHFB__ONBIND_OFFSET UNITYSDK_OFFSET(0x16815CC0)
#define FOFEHEIJHFB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16815D20)
#define FOFEHEIJHFB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16815EF0)

inline static constexpr unsigned int FOFEHEIJHFB_TypeDefinitionIndex = 73904;

	class FOFEHEIJHFB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x68
		::PHILMGOOGCK* AKCIJFEMHKB; // 0x70
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FOFEHEIJHFB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void GJFNEPDMOGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_GJFNEPDMOGM_OFFSET))(this);
		}

		::System::Void GIAHLFBOGMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_GIAHLFBOGMN_OFFSET))(this);
		}

		::System::Boolean ABMBAHKHIIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_ABMBAHKHIIA_OFFSET))(this);
		}

		::System::Void CPCNOCJLNPM(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_CPCNOCJLNPM_OFFSET))(this, a1, a2);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_NECEALBHFAB_OFFSET))(this);
		}

		::System::Void JMEKJPKAOIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_JMEKJPKAOIK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
