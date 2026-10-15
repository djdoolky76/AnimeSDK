#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInsertAction; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINSERTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51B9D0)
#define RPG_GAMECORE_BYISINSERTACTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51BC20)
#define RPG_GAMECORE_BYISINSERTACTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51BBF0)
#define RPG_GAMECORE_BYISINSERTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51B9E0)
#define RPG_GAMECORE_BYISINSERTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51B9A0)

namespace RPG::GameCore
{
	class ByIsInsertAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionType ActionType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypeFilter; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
