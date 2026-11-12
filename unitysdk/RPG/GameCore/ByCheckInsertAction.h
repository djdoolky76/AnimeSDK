#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionCheckType.h"
#include "unitysdk/RPG/GameCore/InsertActionSelectionType.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckInsertAction; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCHECKINSERTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A01D0)
#define RPG_GAMECORE_BYCHECKINSERTACTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E6A04C0)
#define RPG_GAMECORE_BYCHECKINSERTACTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E6A0480)
#define RPG_GAMECORE_BYCHECKINSERTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6A01F0)
#define RPG_GAMECORE_BYCHECKINSERTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6A0190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckInsertAction_TypeDefinitionIndex = 23482;

	class ByCheckInsertAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionSelectionType Selection; // 0x20
		::RPG::GameCore::InsertActionCheckType CheckType; // 0x24
		::RPG::GameCore::TargetEvaluator* CasterIs; // 0x28
		::System::String* CustomTagIs; // 0x30
		::RPG::GameCore::InsertActionType ActionTypeIs; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKINSERTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckInsertAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKINSERTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckInsertAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKINSERTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKINSERTACTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKINSERTACTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
