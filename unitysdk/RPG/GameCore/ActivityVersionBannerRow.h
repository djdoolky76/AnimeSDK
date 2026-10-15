#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityVersionBannerRow; }

#define RPG_GAMECORE_ACTIVITYVERSIONBANNERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D356D90)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3567E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityVersionBannerRow_TypeDefinitionIndex = 11229;

	class ActivityVersionBannerRow : public ::System::Object
	{
	public:
		::RPG::GameCore::MainMissionType Type; // 0x10
		::System::UInt32 ChapterID; // 0x14
		::System::UInt32 ActivityID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityVersionBannerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityVersionBannerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
