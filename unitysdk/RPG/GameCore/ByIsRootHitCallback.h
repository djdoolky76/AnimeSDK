#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsRootHitCallback; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROOTHITCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D520B70)
#define RPG_GAMECORE_BYISROOTHITCALLBACK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D520CF0)
#define RPG_GAMECORE_BYISROOTHITCALLBACK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D520CC0)
#define RPG_GAMECORE_BYISROOTHITCALLBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D520B80)
#define RPG_GAMECORE_BYISROOTHITCALLBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D520B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRootHitCallback_TypeDefinitionIndex = 23499;

	class ByIsRootHitCallback : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROOTHITCALLBACK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
