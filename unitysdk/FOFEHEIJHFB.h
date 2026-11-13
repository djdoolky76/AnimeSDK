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

#define FOFEHEIJHFB_ABMBAHKHIIA_OFFSET UNITYSDK_OFFSET(0x18747580)
#define FOFEHEIJHFB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18747B10)
#define FOFEHEIJHFB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18747BE0)
#define FOFEHEIJHFB_CPCNOCJLNPM_OFFSET UNITYSDK_OFFSET(0x187473C0)
#define FOFEHEIJHFB_CTOR_OFFSET UNITYSDK_OFFSET(0x18747C80)
#define FOFEHEIJHFB_GIAHLFBOGMN_OFFSET UNITYSDK_OFFSET(0x18747520)
#define FOFEHEIJHFB_GJFNEPDMOGM_OFFSET UNITYSDK_OFFSET(0x187474A0)
#define FOFEHEIJHFB_JMEKJPKAOIK_OFFSET UNITYSDK_OFFSET(0x18747A40)
#define FOFEHEIJHFB_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0x187479D0)
#define FOFEHEIJHFB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18747350)
#define FOFEHEIJHFB__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x187471A0)
#define FOFEHEIJHFB__ONBIND_OFFSET UNITYSDK_OFFSET(0x187470E0)
#define FOFEHEIJHFB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18747140)
#define FOFEHEIJHFB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18747310)

inline static constexpr unsigned int FOFEHEIJHFB_TypeDefinitionIndex = 73903;

	class FOFEHEIJHFB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x60
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x68
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
