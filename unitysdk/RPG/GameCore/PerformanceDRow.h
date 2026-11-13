#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceDRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F14E520)
#define RPG_GAMECORE_PERFORMANCEDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F14DCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDRow_TypeDefinitionIndex = 14487;

	class PerformanceDRow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::System::String* PerformanceCharacter; // 0x18
		::System::UInt32 PlaneID; // 0x20
		::System::UInt32 FloorID; // 0x24
		::System::UInt32 PerformanceID; // 0x28
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x2C
		::System::Boolean EndWithCrack; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x34
		::RPG::GameCore::StoryBlackType StartBlack; // 0x38
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x3C
		::RPG::GameCore::StoryBlackType EndBlack; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceDRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceDRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
