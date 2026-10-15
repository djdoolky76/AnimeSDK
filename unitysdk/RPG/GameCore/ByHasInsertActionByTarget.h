#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasInsertActionByTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F8DC0)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F9040)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F8FE0)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F8E00)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F8D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertActionByTarget_TypeDefinitionIndex = 22569;

	class ByHasInsertActionByTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IncludeActiveAction; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
