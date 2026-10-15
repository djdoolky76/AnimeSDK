#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifyCoolDown; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYCOOLDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D891510)
#define RPG_GAMECORE_MODIFYCOOLDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D891520)
#define RPG_GAMECORE_MODIFYCOOLDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8914E0)

namespace RPG::GameCore
{
	class ModifyCoolDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Int32 SkillIndex; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x24
		::System::Int32 ModifyValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCOOLDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCoolDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCoolDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCOOLDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCoolDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCoolDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCOOLDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
