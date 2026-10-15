#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetCrossHairVisible; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA973F0)
#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA97400)
#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA973C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetCrossHairVisible_TypeDefinitionIndex = 22945;

	class SetTargetCrossHairVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetCrossHairVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetCrossHairVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetCrossHairVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetCrossHairVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
