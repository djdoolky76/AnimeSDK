#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class ModifyGridFightCustomProperty; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FC560)
#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6FC570)
#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6FC520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyGridFightCustomProperty_TypeDefinitionIndex = 22944;

	class ModifyGridFightCustomProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* CustomType; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
