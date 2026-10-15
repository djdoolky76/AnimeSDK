#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishActionCondition; }

#define RPG_GAMECORE_FINISHACTIONCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67B0B0)
#define RPG_GAMECORE_FINISHACTIONCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D67B070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishActionCondition_TypeDefinitionIndex = 19013;

	class FinishActionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishActionCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishActionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
