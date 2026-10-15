#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestPhaseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A5570)
#define RPG_GAMECORE_FIGHTFESTPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6A4C00)

namespace RPG::GameCore
{
	class FightFestPhaseRow : public ::System::Object
	{
	public:
		::System::String* IconPath1; // 0x10
		::System::String* IconPath2; // 0x18
		::Il2CppArray<::System::UInt32>* PhaseTutorialParams; // 0x20
		::System::String* Board3DTexture; // 0x28
		::System::String* LukaAnimTrigger; // 0x30
		::System::String* MiniIconPath1; // 0x38
		::RPG::GameCore::FightFestPhaseType PhaseType; // 0x40
		::System::UInt32 PhaseID; // 0x44
		::RPG::Client::TextID TargetTips; // 0x48
		::RPG::Client::TextID PhaseTitle; // 0x58
		::RPG::Client::TextID BoardTitle; // 0x68
		::System::UInt32 SortWeight; // 0x78
		::System::UInt32 UnlockSubMissionID; // 0x7C
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
