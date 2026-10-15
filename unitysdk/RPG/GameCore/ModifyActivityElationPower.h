#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyActivityElationPower; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8625E0)
#define RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8625F0)
#define RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8625B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyActivityElationPower_TypeDefinitionIndex = 23149;

	class ModifyActivityElationPower : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyActivityElationPower* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyActivityElationPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyActivityElationPower* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyActivityElationPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
