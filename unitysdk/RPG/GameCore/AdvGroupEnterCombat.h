#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGroupEnterCombat; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVGROUPENTERCOMBAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A1230)
#define RPG_GAMECORE_ADVGROUPENTERCOMBAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A1240)
#define RPG_GAMECORE_ADVGROUPENTERCOMBAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A1200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGroupEnterCombat_TypeDefinitionIndex = 20559;

	class AdvGroupEnterCombat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPENTERCOMBAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGroupEnterCombat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGroupEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPENTERCOMBAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGroupEnterCombat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGroupEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPENTERCOMBAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
