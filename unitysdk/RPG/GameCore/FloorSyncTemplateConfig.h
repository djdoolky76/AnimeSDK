#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorSyncTemplateConfig; }

#define RPG_GAMECORE_FLOORSYNCTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B96D0)
#define RPG_GAMECORE_FLOORSYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B9690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorSyncTemplateConfig_TypeDefinitionIndex = 17412;

	class FloorSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSYNCTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorSyncTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorSyncTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
