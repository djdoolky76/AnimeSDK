#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAnd; }
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYAND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4827F0)
#define RPG_GAMECORE_BYAND_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4829C0)
#define RPG_GAMECORE_BYAND_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D482990)
#define RPG_GAMECORE_BYAND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D482800)
#define RPG_GAMECORE_BYAND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4827C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnd_TypeDefinitionIndex = 23796;

	class ByAnd : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PredicateConfig*>* PredicateList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
