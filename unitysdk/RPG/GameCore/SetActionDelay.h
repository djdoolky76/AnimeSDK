#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetActionDelay; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETACTIONDELAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA64D90)
#define RPG_GAMECORE_SETACTIONDELAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA64E20)
#define RPG_GAMECORE_SETACTIONDELAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA64CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetActionDelay_TypeDefinitionIndex = 22702;

	class SetActionDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::RPG::GameCore::DynamicFloat* NormalizedValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetActionDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetActionDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
