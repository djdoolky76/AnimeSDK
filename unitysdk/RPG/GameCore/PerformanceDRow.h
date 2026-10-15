#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceDRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F9E80)
#define RPG_GAMECORE_PERFORMANCEDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F9600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDRow_TypeDefinitionIndex = 14330;

	class PerformanceDRow : public ::System::Object
	{
	public:
		::System::String* PerformanceCharacter; // 0x10
		::System::String* PerformancePath; // 0x18
		::RPG::GameCore::StoryBlackType StartBlack; // 0x20
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x24
		::System::UInt32 PlaneID; // 0x28
		::System::Boolean EndWithCrack; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x30
		::RPG::GameCore::StoryBlackType EndBlack; // 0x34
		::System::UInt32 PerformanceID; // 0x38
		::System::UInt32 GroupID; // 0x3C
		::System::UInt32 FloorID; // 0x40
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
