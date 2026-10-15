#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LocationExtraConfig; }
namespace RPG::GameCore { class ModifyDefaultTeamFormation; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D896810)
#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8968A0)
#define RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D896750)

namespace RPG::GameCore
{
	class ModifyDefaultTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* FormationWidthMin; // 0x20
		::RPG::GameCore::DynamicFloat* FormationWidthMax; // 0x28
		::RPG::GameCore::TargetEvaluator* TeamCenter; // 0x30
		::System::Boolean AutoBalance; // 0x38
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::LocationExtraConfig*>* ExtraConfig; // 0x40
		::Il2CppArray<::RPG::GameCore::LocationExtraConfig*>* ExtraConfig2; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyDefaultTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyDefaultTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyDefaultTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyDefaultTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDEFAULTTEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
