#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorFCVSyncTemplateConfig; }

#define RPG_GAMECORE_FLOORFCVSYNCTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B9130)
#define RPG_GAMECORE_FLOORFCVSYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B90F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorFCVSyncTemplateConfig_TypeDefinitionIndex = 17402;

	class FloorFCVSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORFCVSYNCTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorFCVSyncTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorFCVSyncTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORFCVSYNCTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
