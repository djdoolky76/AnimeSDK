#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimResetBillboardAction; }

#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D76A0)
#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D76B0)
#define RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7600)

namespace RPG::GameCore
{
	class FiveDimResetBillboardAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 MapIconID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESETBILLBOARDACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
