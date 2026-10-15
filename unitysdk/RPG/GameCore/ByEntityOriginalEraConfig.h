#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByEntityOriginalEraConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C4A20)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C4BE0)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C4BB0)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C4A30)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C49F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityOriginalEraConfig_TypeDefinitionIndex = 22335;

	class ByEntityOriginalEraConfig : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
