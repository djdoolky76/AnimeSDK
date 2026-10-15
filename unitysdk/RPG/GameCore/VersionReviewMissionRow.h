#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VersionReviewMissionRow; }

#define RPG_GAMECORE_VERSIONREVIEWMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8EAE0)
#define RPG_GAMECORE_VERSIONREVIEWMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC8E4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VersionReviewMissionRow_TypeDefinitionIndex = 14166;

	class VersionReviewMissionRow : public ::System::Object
	{
	public:
		::System::UInt32 StoryPerformanceID; // 0x10
		::System::UInt32 PreMainMissionID; // 0x14
		::System::UInt32 StoryStartEntranceID; // 0x18
		::System::UInt32 ReviewMainMissionID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONREVIEWMISSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::VersionReviewMissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VersionReviewMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONREVIEWMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
