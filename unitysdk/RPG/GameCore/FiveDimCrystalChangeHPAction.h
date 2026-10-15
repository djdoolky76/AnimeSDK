#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCrystalChangeHPAction; }

#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B6CB0)
#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B6CC0)
#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B6C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCrystalChangeHPAction_TypeDefinitionIndex = 18780;

	class FiveDimCrystalChangeHPAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Int32 Value; // 0x10
		::System::Boolean DelayDisableCollider; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
