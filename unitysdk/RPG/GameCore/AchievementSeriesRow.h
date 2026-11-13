#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AchievementSeriesRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACHIEVEMENTSERIESROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2340)
#define RPG_GAMECORE_ACHIEVEMENTSERIESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E4F1B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementSeriesRow_TypeDefinitionIndex = 10907;

	class AchievementSeriesRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* MainIconPath; // 0x18
		::System::String* CopperIconPath; // 0x20
		::System::String* SilverIconPath; // 0x28
		::System::String* GoldIconPath; // 0x30
		::System::UInt32 SeriesID; // 0x38
		::System::UInt32 ShowParamInt1; // 0x3C
		::RPG::Client::TextID SeriesTitle; // 0x40
		::RPG::GameCore::ShowType ShowType; // 0x50
		::System::UInt32 Priority; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AchievementSeriesRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AchievementSeriesRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
