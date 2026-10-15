#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }

#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D8E20)
#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D8E30)
#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D8D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetBillboardAction_TypeDefinitionIndex = 18777;

	class FiveDimSetBillboardAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimSetBillboardInfo* BillboardInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
