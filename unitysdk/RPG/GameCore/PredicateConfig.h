#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93EBC0)
#define RPG_GAMECORE_PREDICATECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D93E8B0)
#define RPG_GAMECORE_PREDICATECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D93E850)
#define RPG_GAMECORE_PREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93E710)
#define RPG_GAMECORE_PREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93E6D0)

namespace RPG::GameCore
{
	class PredicateConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Inverse; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
