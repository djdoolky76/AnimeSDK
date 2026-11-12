#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RealityShowBuffUpType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRealityShowConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYREALITYSHOWCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58C1D0)
#define RPG_GAMECORE_ACTIVITYREALITYSHOWCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E58BBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRealityShowConfigRow_TypeDefinitionIndex = 12391;

	class ActivityRealityShowConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffUpNumList; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x28
		::System::UInt32 ModuleID; // 0x30
		::System::UInt32 StageID2; // 0x34
		::System::UInt32 EventID2; // 0x38
		::System::UInt32 BattleAreaID1; // 0x3C
		::System::UInt32 MonsterID; // 0x40
		::System::UInt32 EventID1; // 0x44
		::RPG::Client::TextID Title; // 0x48
		::System::UInt32 GuideID; // 0x58
		::RPG::GameCore::RealityShowBuffUpType BuffUpType; // 0x5C
		::System::UInt32 BattleAreaID2; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Strategy; // 0x68
		::System::UInt32 ID; // 0x78
		::System::UInt32 StageID1; // 0x7C
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
