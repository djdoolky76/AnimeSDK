#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyActionDelay; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYACTIONDELAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8622E0)
#define RPG_GAMECORE_MODIFYACTIONDELAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8622F0)
#define RPG_GAMECORE_MODIFYACTIONDELAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8622B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyActionDelay_TypeDefinitionIndex = 22701;

	class ModifyActionDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AddValue; // 0x20
		::RPG::GameCore::DynamicFloat* AddNormalizedValue; // 0x28
		::System::Boolean InitModify; // 0x30
		::System::Boolean ChangeDelayVersion; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIONDELAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyActionDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIONDELAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyActionDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIONDELAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
