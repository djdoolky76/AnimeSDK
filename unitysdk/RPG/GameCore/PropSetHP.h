#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSetHP; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9541D0)
#define RPG_GAMECORE_PROPSETHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D954200)
#define RPG_GAMECORE_PROPSETHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D954170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetHP_TypeDefinitionIndex = 22069;

	class PropSetHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FixPoint HP; // 0x20
		::RPG::GameCore::FixPoint MaxHP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
