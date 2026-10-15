#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateConditionConfigBase; }

#define RPG_GAMECORE_FATECONDITIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69AA80)
#define RPG_GAMECORE_FATECONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69AE20)
#define RPG_GAMECORE_FATECONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69AC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateConditionConfigBase_TypeDefinitionIndex = 19247;

	class FateConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
