#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ShowSideDialogAction; }
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D823C90)
#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D823CA0)
#define RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D823C40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowSideDialogAction_TypeDefinitionIndex = 24903;

	class ShowSideDialogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* ImagePath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowSideDialogAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowSideDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ShowSideDialogAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ShowSideDialogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWSIDEDIALOGACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
