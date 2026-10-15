#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShowAttackTimeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ShowAttackTime; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWATTACKTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD6BF0)
#define RPG_GAMECORE_SHOWATTACKTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD6C00)
#define RPG_GAMECORE_SHOWATTACKTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD6BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAttackTime_TypeDefinitionIndex = 22930;

	class ShowAttackTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ShowAttackTimeType IconType; // 0x20
		::System::Boolean ShowInActionMode; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DynamicFloat* BaseAttackTime; // 0x28
		::RPG::GameCore::DynamicFloat* EnhancedAttackTime; // 0x30
		::System::Boolean IsShow; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAttackTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAttackTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAttackTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAttackTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
