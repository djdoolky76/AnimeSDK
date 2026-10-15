#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueEventDynamicConfig; }

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99A5E0)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99A5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventDynamicConfig_TypeDefinitionIndex = 17920;

	class RogueDialogueEventDynamicConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueEventDynamicConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueEventDynamicConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
