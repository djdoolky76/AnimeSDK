#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueEventConfig; }
namespace RPG::GameCore { class RogueDialogueEventOptionConfig; }

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99A4E0)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_IFDNIFBLLHB_OFFSET UNITYSDK_OFFSET(0x1D99A4F0)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99A420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventConfig_TypeDefinitionIndex = 17921;

	class RogueDialogueEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueDialogueEventOptionConfig*>* OptionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::RPG::GameCore::RogueDialogueEventOptionConfig* IFDNIFBLLHB(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDialogueEventOptionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_IFDNIFBLLHB_OFFSET))(this, a1);
		}

	};
}
