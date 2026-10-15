#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueEventDynamicArgConfig; }

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICARGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C7EF0)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICARGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9C7EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventDynamicArgConfig_TypeDefinitionIndex = 17919;

	class RogueDialogueEventDynamicArgConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICARGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueEventDynamicArgConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueEventDynamicArgConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICARGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
