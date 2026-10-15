#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDestructPropAction; }

#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68B320)
#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68B330)
#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68B2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestructPropAction_TypeDefinitionIndex = 18674;

	class FiveDimDestructPropAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestructPropAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestructPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestructPropAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestructPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
