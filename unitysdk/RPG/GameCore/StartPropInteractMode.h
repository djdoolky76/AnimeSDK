#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropInteractMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropInteractOverrideData01; }
namespace RPG::GameCore { class StartPropInteractMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STARTPROPINTERACTMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF0270)
#define RPG_GAMECORE_STARTPROPINTERACTMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF02A0)
#define RPG_GAMECORE_STARTPROPINTERACTMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF0220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartPropInteractMode_TypeDefinitionIndex = 20387;

	class StartPropInteractMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropInteractMode Mode; // 0x20
		::System::Boolean UseOverrideData; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropInteractOverrideData01* OverrideData01; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPINTERACTMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartPropInteractMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartPropInteractMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPINTERACTMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartPropInteractMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartPropInteractMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPINTERACTMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
