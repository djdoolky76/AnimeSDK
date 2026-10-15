#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorGroupSyncTemplateConfigs; }

#define RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B9220)
#define RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B91E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorGroupSyncTemplateConfigs_TypeDefinitionIndex = 17399;

	class FloorGroupSyncTemplateConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorGroupSyncTemplateConfigs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorGroupSyncTemplateConfigs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
