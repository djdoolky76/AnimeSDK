#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueDialogueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNPCConfig; }
namespace RPG::GameCore { class RogueNPCDialogueConfig; }

#define RPG_GAMECORE_ROGUENPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1CC70)
#define RPG_GAMECORE_ROGUENPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1CB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNPCConfig_TypeDefinitionIndex = 18002;

	class RogueNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RogueDialogueType DialogueType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::RogueNPCDialogueConfig*>* DialogueList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNPCConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNPCConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
