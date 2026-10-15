#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooInteractionCase.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class SpaceZooInteractionRow; }

#define RPG_GAMECORE_SPACEZOOINTERACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC87E0)
#define RPG_GAMECORE_SPACEZOOINTERACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAC8550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooInteractionRow_TypeDefinitionIndex = 12384;

	class SpaceZooInteractionRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValue* Param; // 0x10
		::RPG::GameCore::SpaceZooInteractionCase Case; // 0x18
		::System::UInt32 PerformanceID; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Int32 Priority; // 0x24
		::System::UInt32 RoomID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOINTERACTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpaceZooInteractionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpaceZooInteractionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOINTERACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
