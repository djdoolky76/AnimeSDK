#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GravityBallCondition; }

#define RPG_GAMECORE_GRAVITYBALLCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723360)
#define RPG_GAMECORE_GRAVITYBALLCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D723220)

namespace RPG::GameCore
{
	class GravityBallCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PuzzleID; // 0x10
		::RPG::GameCore::DynamicString* GroupEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
