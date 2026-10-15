#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class QteCatchGhostRewind; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_QTECATCHGHOSTREWIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95EAD0)
#define RPG_GAMECORE_QTECATCHGHOSTREWIND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95EAE0)
#define RPG_GAMECORE_QTECATCHGHOSTREWIND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95EAA0)

namespace RPG::GameCore
{
	class QteCatchGhostRewind : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Monster; // 0x18
		::RPG::GameCore::TargetEvaluator* TimeCrack; // 0x20
		::RPG::GameCore::TargetEvaluator* ShadowBox; // 0x28
		::RPG::GameCore::DynamicFloat* GoodRadius; // 0x30
		::RPG::GameCore::DynamicFloat* StruggleDuration; // 0x38
		::RPG::GameCore::DynamicFloat* InteractRadius; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::QteCatchGhostRewind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QteCatchGhostRewind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::QteCatchGhostRewind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QteCatchGhostRewind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
