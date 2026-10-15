#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class TrySkipTutorialAction; }

#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8523C0)
#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8523D0)
#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8522F0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int TrySkipTutorialAction_TypeDefinitionIndex = 24920;

	class TrySkipTutorialAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::TrySkipTutorialAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::TrySkipTutorialAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::TrySkipTutorialAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::TrySkipTutorialAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
