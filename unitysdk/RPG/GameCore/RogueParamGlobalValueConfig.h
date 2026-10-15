#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamGlobalValueConfig; }

#define RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2AA60)
#define RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2AA70)
#define RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2AA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamGlobalValueConfig_TypeDefinitionIndex = 19833;

	class RogueParamGlobalValueConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamGlobalValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamGlobalValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamGlobalValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamGlobalValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMGLOBALVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
