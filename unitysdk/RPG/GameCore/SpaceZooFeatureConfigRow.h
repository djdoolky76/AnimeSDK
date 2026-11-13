#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooFeatureConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOFEATURECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F400890)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F4000F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooFeatureConfigRow_TypeDefinitionIndex = 12431;

	class SpaceZooFeatureConfigRow : public ::System::Object
	{
	public:
		::System::String* FeatureKey; // 0x10
		::System::String* LargeImagePath; // 0x18
		::System::String* ImagePath; // 0x20
		::System::UInt32 ResearchPoint; // 0x28
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x2C
		::System::UInt32 FeatureID; // 0x30
		::System::UInt32 UnlockMissionID; // 0x34
		::RPG::Client::TextID Name; // 0x38
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
