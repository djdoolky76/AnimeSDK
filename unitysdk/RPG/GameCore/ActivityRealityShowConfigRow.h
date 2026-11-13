#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RealityShowBuffUpType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRealityShowConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYREALITYSHOWCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA96840)
#define RPG_GAMECORE_ACTIVITYREALITYSHOWCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA96250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRealityShowConfigRow_TypeDefinitionIndex = 12391;

	class ActivityRealityShowConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffUpNumList; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x18
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID Title; // 0x30
		::RPG::GameCore::RealityShowBuffUpType BuffUpType; // 0x40
		::System::UInt32 EventID1; // 0x44
		::System::UInt32 ModuleID; // 0x48
		::System::UInt32 GuideID; // 0x4C
		::System::UInt32 BattleAreaID2; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 StageID1; // 0x58
		::System::UInt32 StageID2; // 0x5C
		::System::UInt32 BattleAreaID1; // 0x60
		::System::UInt32 EventID2; // 0x64
		::System::UInt32 MonsterID; // 0x68
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Strategy; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREALITYSHOWCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRealityShowConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRealityShowConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREALITYSHOWCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
