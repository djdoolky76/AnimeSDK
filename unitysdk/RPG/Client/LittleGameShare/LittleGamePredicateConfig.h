#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class LittleGamePredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E532110)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E531E00)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E5312F0)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5311B0)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E52FB10)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGamePredicateConfig_TypeDefinitionIndex = 10365;

	class LittleGamePredicateConfig : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
