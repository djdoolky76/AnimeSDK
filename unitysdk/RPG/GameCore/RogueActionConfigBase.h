#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActionConfigBase; }

#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E3B0)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A27C0)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A2760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionConfigBase_TypeDefinitionIndex = 19582;

	class RogueActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
