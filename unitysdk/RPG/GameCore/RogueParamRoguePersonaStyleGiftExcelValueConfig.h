#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaStyleGiftExcelValueConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDA60)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FDA70)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FDA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaStyleGiftExcelValueConfig_TypeDefinitionIndex = 19861;

	class RogueParamRoguePersonaStyleGiftExcelValueConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
