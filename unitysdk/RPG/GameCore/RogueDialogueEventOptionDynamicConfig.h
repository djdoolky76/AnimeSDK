#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueEventOptionDynamicConfig; }

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONDYNAMICCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C8410)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONDYNAMICCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9C82F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventOptionDynamicConfig_TypeDefinitionIndex = 17915;

	class RogueDialogueEventOptionDynamicConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::System::UInt32 DisplayID2; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONDYNAMICCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueEventOptionDynamicConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueEventOptionDynamicConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONDYNAMICCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
