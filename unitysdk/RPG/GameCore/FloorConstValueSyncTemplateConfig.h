#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorConstValueSyncTemplateConfig; }

#define RPG_GAMECORE_FLOORCONSTVALUESYNCTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E4F50)
#define RPG_GAMECORE_FLOORCONSTVALUESYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E4F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorConstValueSyncTemplateConfig_TypeDefinitionIndex = 17408;

	class FloorConstValueSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUESYNCTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorConstValueSyncTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorConstValueSyncTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUESYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
