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

#define MPJNLFLJDLA_CIJOBNNMPHI_OFFSET UNITYSDK_OFFSET(0xBA40370)
#define MPJNLFLJDLA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA40620)
#define MPJNLFLJDLA_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBA40010)
#define MPJNLFLJDLA_DOLEFNIGEMH_OFFSET UNITYSDK_OFFSET(0xBA3FB00)
#define MPJNLFLJDLA_JJCFPOAJPDD_OFFSET UNITYSDK_OFFSET(0xBA3FFD0)
#define MPJNLFLJDLA_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBA40080)
#define MPJNLFLJDLA_NINNDENADJK_OFFSET UNITYSDK_OFFSET(0xBA40250)
#define MPJNLFLJDLA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBA3FAA0)
#define MPJNLFLJDLA_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBA3FF80)
#define MPJNLFLJDLA__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA401F0)

inline static constexpr unsigned int MPJNLFLJDLA_TypeDefinitionIndex = 71610;

	class MPJNLFLJDLA : public ::FMPCODLIOLG
	{
	public:
		::FMPCODLIOLG* HEBFHCBPMFI; // 0x60
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x68
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
		::RPG::Client::BattleAvatarCustomData* NCFIJKJAGIJ; // 0x78
		::System::String* GEJIJFFILEB; // 0x80
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNLFLJDLA_NIJJPBOIGBI_OFFSET))(this);
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
