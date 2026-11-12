#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameTemplateConfig; }

#define RPG_GAMECORE_LITTLEGAMETEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA29E20)
#define RPG_GAMECORE_LITTLEGAMETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA29DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameTemplateConfig_TypeDefinitionIndex = 19081;

	class LittleGameTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
