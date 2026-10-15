#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorSyncTemplateConfigs; }

#define RPG_GAMECORE_FLOORSYNCTEMPLATECONFIGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B9720)
#define RPG_GAMECORE_FLOORSYNCTEMPLATECONFIGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B96E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorSyncTemplateConfigs_TypeDefinitionIndex = 17413;

	class FloorSyncTemplateConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSYNCTEMPLATECONFIGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorSyncTemplateConfigs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorSyncTemplateConfigs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSYNCTEMPLATECONFIGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
