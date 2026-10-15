#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestPhaseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D677AF0)
#define RPG_GAMECORE_FIGHTFESTPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D677180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestPhaseRow_TypeDefinitionIndex = 13270;

	class FightFestPhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PhaseTutorialParams; // 0x10
		::System::String* Board3DTexture; // 0x18
		::System::String* MiniIconPath1; // 0x20
		::System::String* LukaAnimTrigger; // 0x28
		::System::String* IconPath2; // 0x30
		::System::String* IconPath1; // 0x38
		::System::UInt32 SortWeight; // 0x40
		::System::UInt32 PhaseID; // 0x44
		::RPG::Client::TextID BoardTitle; // 0x48
		::System::UInt32 UnlockSubMissionID; // 0x58
		::RPG::GameCore::FightFestPhaseType PhaseType; // 0x5C
		::RPG::Client::TextID PhaseTitle; // 0x60
		::RPG::Client::TextID TargetTips; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
