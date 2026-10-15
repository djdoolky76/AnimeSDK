#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionGenCurSectionBubbleCell; }

#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51B710)
#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51B720)
#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51B6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionGenCurSectionBubbleCell_TypeDefinitionIndex = 18339;

	class CakeRaceActionGenCurSectionBubbleCell : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 Percent; // 0x10
		::System::UInt32 MaxNum; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONBUBBLECELL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
