#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetPhainonChargePoint; }

#define RPG_GAMECORE_SETPHAINONCHARGEPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABEC10)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABEC20)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABEBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPhainonChargePoint_TypeDefinitionIndex = 23155;

	class SetPhainonChargePoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPhainonChargePoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPhainonChargePoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPhainonChargePoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPhainonChargePoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
