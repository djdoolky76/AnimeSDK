#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakGroupConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEPEAKGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0CC40)
#define RPG_GAMECORE_CHALLENGEPEAKGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC0C7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakGroupConfigRow_TypeDefinitionIndex = 13045;

	class ChallengePeakGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* BossUI3DAnimatorPath; // 0x10
		::System::String* ThemeIconPicPath; // 0x18
		::System::String* HandBookPanelBannerPath; // 0x20
		::Il2CppArray<::System::UInt32>* PreLevelIDList; // 0x28
		::System::String* ThemePosterTabPicPath; // 0x30
		::Il2CppArray<::System::String*>* RankIconPathList; // 0x38
		::System::String* BossUI3DPrefabPath; // 0x40
		::System::UInt32 HintGoodsID; // 0x48
		::System::UInt32 RewardGroupID; // 0x4C
		::System::UInt32 ID; // 0x50
		::System::UInt32 ActivityModule; // 0x54
		::System::UInt32 BossLevelID; // 0x58
		::System::UInt32 RecommendID; // 0x5C
		::RPG::Client::TextID Title; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengePeakGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengePeakGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
