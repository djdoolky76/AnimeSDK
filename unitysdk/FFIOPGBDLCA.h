#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define FFIOPGBDLCA_CTOR_OFFSET UNITYSDK_OFFSET(0x16662F50)
#define FFIOPGBDLCA_FGBILEBHCDB_OFFSET UNITYSDK_OFFSET(0x16662DC0)
#define FFIOPGBDLCA_GET_BATTLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16662C20)
#define FFIOPGBDLCA_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x16662C40)
#define FFIOPGBDLCA_GET_TARGETTURNOWNER_OFFSET UNITYSDK_OFFSET(0x16662C60)
#define FFIOPGBDLCA_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x16662D50)
#define FFIOPGBDLCA_ONHECDIEGPN_OFFSET UNITYSDK_OFFSET(0x16662C80)
#define FFIOPGBDLCA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16662F00)
#define FFIOPGBDLCA_SET_BATTLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16662C30)
#define FFIOPGBDLCA_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x16662C50)
#define FFIOPGBDLCA_SET_TARGETTURNOWNER_OFFSET UNITYSDK_OFFSET(0x16662C70)

inline static constexpr unsigned int FFIOPGBDLCA_TypeDefinitionIndex = 62407;

	class FFIOPGBDLCA : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* _GameMode_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _TargetTurnOwner_k__BackingField; // 0x18
		::RPG::GameCore::BattleInstance* _BattleInstance_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleInstance* get_BattleInstance()
		{
			return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_GET_BATTLEINSTANCE_OFFSET))(this);
		}

		::System::Void set_BattleInstance(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_SET_BATTLEINSTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedGameMode* get_GameMode()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Void set_GameMode(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_SET_GAMEMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TargetTurnOwner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_GET_TARGETTURNOWNER_OFFSET))(this);
		}

		::System::Void set_TargetTurnOwner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_SET_TARGETTURNOWNER_OFFSET))(this, a1);
		}

		::System::Boolean ONHECDIEGPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_ONHECDIEGPN_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_PJPFIHFAHGO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FGBILEBHCDB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIOPGBDLCA_FGBILEBHCDB_OFFSET))(this);
		}

	};
