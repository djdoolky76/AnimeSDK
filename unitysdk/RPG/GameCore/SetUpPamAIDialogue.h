#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetUpPamAIDialogue; }

#define RPG_GAMECORE_SETUPPAMAIDIALOGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9330)
#define RPG_GAMECORE_SETUPPAMAIDIALOGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC9340)
#define RPG_GAMECORE_SETUPPAMAIDIALOGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC9270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUpPamAIDialogue_TypeDefinitionIndex = 21108;

	class SetUpPamAIDialogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPAMAIDIALOGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUpPamAIDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUpPamAIDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPAMAIDIALOGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUpPamAIDialogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUpPamAIDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPAMAIDIALOGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
