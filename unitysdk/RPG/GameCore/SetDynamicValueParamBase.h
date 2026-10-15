#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueParamBase; }

#define RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA6D80)
#define RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAE330)
#define RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAADFC0)

namespace RPG::GameCore
{
	class SetDynamicValueParamBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueParamBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueParamBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
