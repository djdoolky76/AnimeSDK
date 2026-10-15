#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsShowInActionBar; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSHOWINACTIONBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D521BF0)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D521DA0)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D521D70)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D521C00)
#define RPG_GAMECORE_BYISSHOWINACTIONBAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D521BC0)

namespace RPG::GameCore
{
	class ByIsShowInActionBar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSHOWINACTIONBAR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
