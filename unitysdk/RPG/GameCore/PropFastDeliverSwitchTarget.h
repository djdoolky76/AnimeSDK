#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropFastDeliverSwitchTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91FD70)
#define RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D91FDB0)
#define RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91FD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverSwitchTarget_TypeDefinitionIndex = 22162;

	class PropFastDeliverSwitchTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsClockWise; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* PitchMoveItemPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverSwitchTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverSwitchTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverSwitchTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverSwitchTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSWITCHTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
