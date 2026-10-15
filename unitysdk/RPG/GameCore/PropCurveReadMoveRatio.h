#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropCurveReadMoveRatio; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEREADMOVERATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D948600)
#define RPG_GAMECORE_PROPCURVEREADMOVERATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D948650)
#define RPG_GAMECORE_PROPCURVEREADMOVERATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D948590)

namespace RPG::GameCore
{
	class PropCurveReadMoveRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* WriteTargetType; // 0x20
		::RPG::GameCore::DynamicString* DynamicFloatName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEREADMOVERATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveReadMoveRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveReadMoveRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEREADMOVERATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveReadMoveRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveReadMoveRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEREADMOVERATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
