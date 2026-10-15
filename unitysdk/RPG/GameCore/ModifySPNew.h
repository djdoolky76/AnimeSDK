#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class ModifySPNew; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSPNEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D898C00)
#define RPG_GAMECORE_MODIFYSPNEW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D898C10)
#define RPG_GAMECORE_MODIFYSPNEW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D898BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySPNew_TypeDefinitionIndex = 22625;

	class ModifySPNew : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* Tag; // 0x20
		::RPG::GameCore::DynamicFloat* SetValue; // 0x28
		::RPG::GameCore::DynamicFloat* SetMaxSPRatio; // 0x30
		::RPG::GameCore::DynamicFloat* AddValue; // 0x38
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x40
		::RPG::GameCore::DynamicFloat* AddMaxSPRatio; // 0x48
		::RPG::GameCore::DynamicFloat* FixedAddValue; // 0x50
		::RPG::GameCore::DynamicFloat* FixedAddRatio; // 0x58
		::RPG::GameCore::DynamicFloat* FixedAddMaxSPRatio; // 0x60
		::System::Boolean IgnoreBlock; // 0x68
		::System::Boolean SyncToSummoner; // 0x69
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPNEW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySPNew* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySPNew*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPNEW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySPNew* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySPNew*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPNEW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
