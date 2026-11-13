#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLECOLLEGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3097B0)
#define RPG_GAMECORE_BATTLECOLLEGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C3092A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeConfigRow_TypeDefinitionIndex = 12908;

	class BattleCollegeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* AimList; // 0x18
		::System::String* VideoCoverPath; // 0x20
		::System::UInt32 StageIntroDescIDList; // 0x28
		::System::UInt32 FloorID; // 0x2C
		::RPG::Client::TextID StageIntroTitle; // 0x30
		::System::UInt32 BattleAreaID; // 0x40
		::System::UInt32 SortID; // 0x44
		::System::UInt32 TutorialTypeGroupID; // 0x48
		::System::UInt32 VideoAssetID; // 0x4C
		::System::UInt32 ID; // 0x50
		::System::UInt32 RewardID; // 0x54
		::System::UInt32 StageID; // 0x58
		::System::UInt32 PlaneID; // 0x5C
		::System::UInt32 TutorialID; // 0x60
		::System::UInt32 BattleAreaGroupID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleCollegeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleCollegeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
