#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaTimelineConfig; }
namespace RPG::GameCore { class TrackNameList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GACHATIMELINECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D00E0)
#define RPG_GAMECORE_GACHATIMELINECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CD6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaTimelineConfig_TypeDefinitionIndex = 17097;

	class GachaTimelineConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* TicketMaterialDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemRarity, ::RPG::GameCore::TrackNameList*>* MuteRarityTrackNamesDict; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATIMELINECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GachaTimelineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GachaTimelineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATIMELINECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
