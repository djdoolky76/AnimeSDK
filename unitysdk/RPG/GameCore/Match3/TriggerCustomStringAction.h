#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class TriggerCustomStringAction; }
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8521F0)
#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D852200)
#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8521A0)

namespace RPG::GameCore::Match3
{
	class TriggerCustomStringAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* CustomString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::TriggerCustomStringAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::TriggerCustomStringAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::TriggerCustomStringAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::TriggerCustomStringAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
