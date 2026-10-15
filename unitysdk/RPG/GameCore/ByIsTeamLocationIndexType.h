#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationIndexType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTeamLocationIndexType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F8DE0)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F90A0)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F9060)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F8DF0)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F8DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeamLocationIndexType_TypeDefinitionIndex = 23032;

	class ByIsTeamLocationIndexType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TeamType TeamType; // 0x28
		::RPG::GameCore::TeamLocationIndexType Type; // 0x2C
		::System::Boolean IgnoreServant; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
