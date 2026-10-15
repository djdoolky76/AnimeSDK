#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedirectSkillTargetAffectTeam.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackRedirectSkillTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_STACKREDIRECTSKILLTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB039A0)
#define RPG_GAMECORE_STACKREDIRECTSKILLTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB03A40)
#define RPG_GAMECORE_STACKREDIRECTSKILLTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB038E0)

namespace RPG::GameCore
{
	class StackRedirectSkillTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Probability; // 0x18
		::RPG::GameCore::TargetEvaluator* RedirectTargetType; // 0x20
		::RPG::GameCore::RedirectSkillTargetAffectTeam AffectTeam; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSucceed; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDIRECTSKILLTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackRedirectSkillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackRedirectSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDIRECTSKILLTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackRedirectSkillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackRedirectSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDIRECTSKILLTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
