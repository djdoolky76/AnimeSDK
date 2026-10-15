#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPamOnlineFirst; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMONLINEFIRST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52F430)
#define RPG_GAMECORE_BYPAMONLINEFIRST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52F5B0)
#define RPG_GAMECORE_BYPAMONLINEFIRST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52F580)
#define RPG_GAMECORE_BYPAMONLINEFIRST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52F440)
#define RPG_GAMECORE_BYPAMONLINEFIRST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52F400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamOnlineFirst_TypeDefinitionIndex = 20010;

	class ByPamOnlineFirst : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
