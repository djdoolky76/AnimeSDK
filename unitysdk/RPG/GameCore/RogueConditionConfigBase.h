#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueConditionConfigBase; }

#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F569F50)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F56AC00)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F56A680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueConditionConfigBase_TypeDefinitionIndex = 20122;

	class RogueConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
