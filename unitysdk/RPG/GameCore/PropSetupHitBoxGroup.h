#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSetupHitBoxGroup; }
namespace RPG::GameCore { class SingleHitBoxConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETUPHITBOXGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D955190)
#define RPG_GAMECORE_PROPSETUPHITBOXGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9551C0)
#define RPG_GAMECORE_PROPSETUPHITBOXGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D955140)

namespace RPG::GameCore
{
	class PropSetupHitBoxGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SingleHitBoxConfig*>* HitBoxConfigs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOXGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupHitBoxGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupHitBoxGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOXGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupHitBoxGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupHitBoxGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOXGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
