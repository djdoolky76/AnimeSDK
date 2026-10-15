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

#define FOFEHEIJHFB_ABMBAHKHIIA_OFFSET UNITYSDK_OFFSET(0x158E7900)
#define FOFEHEIJHFB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x158E7EA0)
#define FOFEHEIJHFB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x158E7F70)
#define FOFEHEIJHFB_CPCNOCJLNPM_OFFSET UNITYSDK_OFFSET(0x158E7740)
#define FOFEHEIJHFB_CTOR_OFFSET UNITYSDK_OFFSET(0x158E8010)
#define FOFEHEIJHFB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x158E74C0)
#define FOFEHEIJHFB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x158E7690)
#define FOFEHEIJHFB_GIAHLFBOGMN_OFFSET UNITYSDK_OFFSET(0x158E78A0)
#define FOFEHEIJHFB_GJFNEPDMOGM_OFFSET UNITYSDK_OFFSET(0x158E7820)
#define FOFEHEIJHFB_JMEKJPKAOIK_OFFSET UNITYSDK_OFFSET(0x158E7DD0)
#define FOFEHEIJHFB_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0x158E7D60)
#define FOFEHEIJHFB_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x158E7520)
#define FOFEHEIJHFB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x158E76D0)
#define FOFEHEIJHFB__ONBIND_OFFSET UNITYSDK_OFFSET(0x158E7460)

inline static constexpr unsigned int FOFEHEIJHFB_TypeDefinitionIndex = 71883;

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
