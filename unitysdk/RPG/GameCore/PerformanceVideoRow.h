#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceVideoRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEVIDEOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB21D70)
#define RPG_GAMECORE_PERFORMANCEVIDEOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB215F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceVideoRow_TypeDefinitionIndex = 14481;

	class PerformanceVideoRow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::RPG::GameCore::StoryBlackType EndBlack; // 0x20
		::System::UInt32 PerformanceID; // 0x24
		::RPG::GameCore::StoryBlackType StartBlack; // 0x28
		::System::Boolean EndWithCrack; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 PlaneID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceVideoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceVideoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
