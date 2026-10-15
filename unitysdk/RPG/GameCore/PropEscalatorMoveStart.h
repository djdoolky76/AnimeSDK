#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropEscalatorMoveStart; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPESCALATORMOVESTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94A740)
#define RPG_GAMECORE_PROPESCALATORMOVESTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94A780)
#define RPG_GAMECORE_PROPESCALATORMOVESTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94A6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEscalatorMoveStart_TypeDefinitionIndex = 21017;

	class PropEscalatorMoveStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Speed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropEscalatorMoveStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropEscalatorMoveStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropEscalatorMoveStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropEscalatorMoveStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
