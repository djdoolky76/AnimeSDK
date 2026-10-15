#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooFeatureConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOFEATURECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF4ED0)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAF4730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooFeatureConfigRow_TypeDefinitionIndex = 12364;

	class SpaceZooFeatureConfigRow : public ::System::Object
	{
	public:
		::System::String* LargeImagePath; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* FeatureKey; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 FeatureID; // 0x38
		::System::UInt32 UnlockMissionID; // 0x3C
		::System::UInt32 ResearchPoint; // 0x40
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpaceZooFeatureConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpaceZooFeatureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
