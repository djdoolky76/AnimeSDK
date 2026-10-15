#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByLocalPlayerIsFakeAvatar; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52AF00)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52B080)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52B050)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52AF10)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52AED0)

namespace RPG::GameCore
{
	class ByLocalPlayerIsFakeAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
