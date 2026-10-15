#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSpawnPropAction; }

#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AF7C0)
#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AF7D0)
#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AF750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpawnPropAction_TypeDefinitionIndex = 18671;

	class FiveDimSpawnPropAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
