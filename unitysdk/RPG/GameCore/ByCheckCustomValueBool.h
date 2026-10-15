#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckCustomValueBool; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48E5C0)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48E5D0)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48E590)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48E3A0)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48E370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCustomValueBool_TypeDefinitionIndex = 22549;

	class ByCheckCustomValueBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash Key; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
