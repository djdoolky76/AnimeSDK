#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyWorkbenchFunctionConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EB5C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EB5D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EB580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchFunctionConfig_TypeDefinitionIndex = 17886;

	class RogueModifierModifyWorkbenchFunctionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchFunctionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchFunctionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchFunctionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyWorkbenchFunctionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
