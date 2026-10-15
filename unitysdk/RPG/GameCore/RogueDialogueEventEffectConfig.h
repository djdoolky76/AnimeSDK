#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueEventEffectConfig; }

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C7F90)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9C7F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventEffectConfig_TypeDefinitionIndex = 17917;

	class RogueDialogueEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueEventEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueEventEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
