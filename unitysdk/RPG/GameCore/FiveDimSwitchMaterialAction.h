#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FiveDimSwitchMaterialAction; }

#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A6A70)
#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F7A6A80)
#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7A69A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSwitchMaterialAction_TypeDefinitionIndex = 18923;

	class FiveDimSwitchMaterialAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::DynamicFloat* MaterialID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSwitchMaterialAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSwitchMaterialAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSwitchMaterialAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSwitchMaterialAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
