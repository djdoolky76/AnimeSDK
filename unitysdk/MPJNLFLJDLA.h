#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/EnergyBarType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FMPCODLIOLG;
namespace RPG::Client { class BattleAvatarCustomData; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define MPJNLFLJDLA_CIJOBNNMPHI_OFFSET UNITYSDK_OFFSET(0x1B228490)
#define MPJNLFLJDLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B228750)
#define MPJNLFLJDLA_DOLEFNIGEMH_OFFSET UNITYSDK_OFFSET(0x1B227BB0)
#define MPJNLFLJDLA_JJCFPOAJPDD_OFFSET UNITYSDK_OFFSET(0x1B228080)
#define MPJNLFLJDLA_NINNDENADJK_OFFSET UNITYSDK_OFFSET(0x1B228370)
#define MPJNLFLJDLA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1B227B50)
#define MPJNLFLJDLA_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B228030)
#define MPJNLFLJDLA__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B228140)
#define MPJNLFLJDLA__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B2282B0)
#define MPJNLFLJDLA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B2280D0)

inline static constexpr unsigned int MPJNLFLJDLA_TypeDefinitionIndex = 73597;

	class MPJNLFLJDLA : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::System::String* GEJIJFFILEB; // 0x68
		::RPG::Client::BattleAvatarCustomData* NCFIJKJAGIJ; // 0x70
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x78
		::FMPCODLIOLG* HEBFHCBPMFI; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		// static const ::System::String* OMKOHJDEIAI; // 0x0
		// static const ::System::String* HNIJMOIBJGH; // 0x0
		// static const ::System::String* MNEEHHBPLFM; // 0x0
		// static const ::System::String* KKKELDLCKEH; // 0x0
		// static const ::System::String* PEHOGBGBAFO; // 0x0
		// static const ::System::String* PNNOCABOKLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_ONRETURN_OFFSET))(this);
		}

		::FMPCODLIOLG* JJCFPOAJPDD()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_JJCFPOAJPDD_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MPJNLFLJDLA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNLFLJDLA__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNLFLJDLA__ONBIND_OFFSET))(this);
		}

		::System::Void DOLEFNIGEMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_DOLEFNIGEMH_OFFSET))(this);
		}

		::System::Void CIJOBNNMPHI(::RPG::GameCore::EnergyBarType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarType, ::System::String*))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_CIJOBNNMPHI_OFFSET))(this, a1, a2);
		}

		::System::String* NINNDENADJK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_NINNDENADJK_OFFSET))(this);
		}

	};
