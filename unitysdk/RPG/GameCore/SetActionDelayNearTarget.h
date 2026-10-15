#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NearType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetActionDelayNearTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETACTIONDELAYNEARTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA928E0)
#define RPG_GAMECORE_SETACTIONDELAYNEARTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA928F0)
#define RPG_GAMECORE_SETACTIONDELAYNEARTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA928B0)

namespace RPG::GameCore
{
	class SetActionDelayNearTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* NearTargetType; // 0x20
		::RPG::GameCore::NearType NearType; // 0x28
		::System::Boolean IsInit; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TargetEvaluator* CustomSource; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAYNEARTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetActionDelayNearTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetActionDelayNearTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAYNEARTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetActionDelayNearTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetActionDelayNearTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAYNEARTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
