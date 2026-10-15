#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorFSVSyncTemplateConfig; }

#define RPG_GAMECORE_FLOORFSVSYNCTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B9180)
#define RPG_GAMECORE_FLOORFSVSYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B9140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorFSVSyncTemplateConfig_TypeDefinitionIndex = 17405;

	class FloorFSVSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORFSVSYNCTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorFSVSyncTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorFSVSyncTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORFSVSYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
