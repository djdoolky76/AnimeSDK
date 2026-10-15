#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPlayerRide; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AB420)
#define RPG_GAMECORE_ADVPLAYERRIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AB460)
#define RPG_GAMECORE_ADVPLAYERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AB3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerRide_TypeDefinitionIndex = 21032;

	class AdvPlayerRide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* AttachPoint; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerRide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerRide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERRIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
