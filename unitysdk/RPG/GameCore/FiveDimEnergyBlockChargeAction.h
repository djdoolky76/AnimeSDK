#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimEnergyBlockChargeAction; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB440)
#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BB470)
#define RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BB3F0)

namespace RPG::GameCore
{
	class FiveDimEnergyBlockChargeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::MVector3 EndPosition; // 0x10
		::System::Single Duration; // 0x1C
		::RPG::GameCore::FloatCurve* YOffsetCurve; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENERGYBLOCKCHARGEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
