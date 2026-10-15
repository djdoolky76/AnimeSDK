#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByLocalWin; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALWIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52B880)
#define RPG_GAMECORE_BYLOCALWIN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52BA00)
#define RPG_GAMECORE_BYLOCALWIN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52B9D0)
#define RPG_GAMECORE_BYLOCALWIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52B890)
#define RPG_GAMECORE_BYLOCALWIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52B850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalWin_TypeDefinitionIndex = 23532;

	class ByLocalWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
