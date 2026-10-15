#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooSlotTagsRow; }
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOSLOTTAGSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF8D20)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAF86E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSlotTagsRow_TypeDefinitionIndex = 12379;

	class SpaceZooSlotTagsRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 FeatureID; // 0x18
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpaceZooSlotTagsRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpaceZooSlotTagsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
