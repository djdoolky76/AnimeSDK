#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooBagSlotsRow; }
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOBAGSLOTSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF2CA0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAF2660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooBagSlotsRow_TypeDefinitionIndex = 12377;

	class SpaceZooBagSlotsRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x18
		::System::UInt32 CatteryID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpaceZooBagSlotsRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpaceZooBagSlotsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
