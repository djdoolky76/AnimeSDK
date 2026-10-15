#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifySpecialSP; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSPECIALSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86CAD0)
#define RPG_GAMECORE_MODIFYSPECIALSP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86CAE0)
#define RPG_GAMECORE_MODIFYSPECIALSP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86CA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySpecialSP_TypeDefinitionIndex = 23069;

	class ModifySpecialSP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* SetValue; // 0x20
		::RPG::GameCore::DynamicFloat* SetMaxSPRatio; // 0x28
		::RPG::GameCore::DynamicFloat* AddValue; // 0x30
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x38
		::RPG::GameCore::DynamicFloat* AddMaxSPRatio; // 0x40
		::RPG::GameCore::DynamicFloat* FixedAddValue; // 0x48
		::RPG::GameCore::DynamicFloat* FixedAddRatio; // 0x50
		::RPG::GameCore::DynamicFloat* FixedAddMaxSPRatio; // 0x58
		::System::Boolean IgnoreBlock; // 0x60
		::System::Boolean SyncToSummoner; // 0x61
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPECIALSP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySpecialSP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySpecialSP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPECIALSP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySpecialSP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySpecialSP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPECIALSP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
