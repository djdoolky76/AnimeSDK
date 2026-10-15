#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamSavedValueConfig; }

#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDFA0)
#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FDFB0)
#define RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FDF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamSavedValueConfig_TypeDefinitionIndex = 19832;

	class RogueParamSavedValueConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMSAVEDVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
