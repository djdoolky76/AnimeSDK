#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicConditionConfigBase; }

#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A5DB0)
#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A6150)
#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A5F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicConditionConfigBase_TypeDefinitionIndex = 19575;

	class RogueMagicConditionConfigBase : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
