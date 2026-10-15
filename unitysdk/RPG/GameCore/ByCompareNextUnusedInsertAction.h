#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareNextUnusedInsertAction; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4970C0)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D497350)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D497310)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4970D0)
#define RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D497080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNextUnusedInsertAction_TypeDefinitionIndex = 23053;

	class ByCompareNextUnusedInsertAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterIs; // 0x20
		::System::String* CustomTagIs; // 0x28
		::RPG::GameCore::InsertActionType ActionTypeIs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENEXTUNUSEDINSERTACTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
