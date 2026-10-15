#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueConditionEffectConfig; }

#define RPG_GAMECORE_ROGUEDIALOGUECONDITIONEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C7BE0)
#define RPG_GAMECORE_ROGUEDIALOGUECONDITIONEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9C7BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueConditionEffectConfig_TypeDefinitionIndex = 19632;

	class RogueDialogueConditionEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUECONDITIONEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueConditionEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueConditionEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUECONDITIONEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
