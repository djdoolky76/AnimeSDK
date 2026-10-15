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

#define FOFEHEIJHFB_ABMBAHKHIIA_OFFSET UNITYSDK_OFFSET(0x158DC8D0)
#define FOFEHEIJHFB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x158DCE70)
#define FOFEHEIJHFB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x158DCF40)
#define FOFEHEIJHFB_CPCNOCJLNPM_OFFSET UNITYSDK_OFFSET(0x158DC710)
#define FOFEHEIJHFB_CTOR_OFFSET UNITYSDK_OFFSET(0x158DCFE0)
#define FOFEHEIJHFB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x158DC490)
#define FOFEHEIJHFB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x158DC660)
#define FOFEHEIJHFB_GIAHLFBOGMN_OFFSET UNITYSDK_OFFSET(0x158DC870)
#define FOFEHEIJHFB_GJFNEPDMOGM_OFFSET UNITYSDK_OFFSET(0x158DC7F0)
#define FOFEHEIJHFB_JMEKJPKAOIK_OFFSET UNITYSDK_OFFSET(0x158DCDA0)
#define FOFEHEIJHFB_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0x158DCD30)
#define FOFEHEIJHFB_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x158DC4F0)
#define FOFEHEIJHFB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x158DC6A0)
#define FOFEHEIJHFB__ONBIND_OFFSET UNITYSDK_OFFSET(0x158DC430)

inline static constexpr unsigned int FOFEHEIJHFB_TypeDefinitionIndex = 71882;

	class FOFEHEIJHFB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x60
		::PHILMGOOGCK* AKCIJFEMHKB; // 0x68
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFEHEIJHFB_EKGCGIDIFJJ_OFFSET))(this);
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
