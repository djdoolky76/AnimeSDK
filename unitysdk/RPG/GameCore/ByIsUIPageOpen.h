#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsUIPageOpen; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISUIPAGEOPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D529E20)
#define RPG_GAMECORE_BYISUIPAGEOPEN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D529FE0)
#define RPG_GAMECORE_BYISUIPAGEOPEN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D529FB0)
#define RPG_GAMECORE_BYISUIPAGEOPEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D529E30)
#define RPG_GAMECORE_BYISUIPAGEOPEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D529DF0)

namespace RPG::GameCore
{
	class ByIsUIPageOpen : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* PageName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
