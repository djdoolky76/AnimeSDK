#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LockTargetHP; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOCKTARGETHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F1F90)
#define RPG_GAMECORE_LOCKTARGETHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F1FA0)
#define RPG_GAMECORE_LOCKTARGETHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F1F50)

namespace RPG::GameCore
{
	class LockTargetHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LockHPStrength Strength; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* LockKey; // 0x28
		::RPG::GameCore::DynamicFloat* Threshold; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockTargetHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockTargetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockTargetHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockTargetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
