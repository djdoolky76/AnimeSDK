#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareScepterFuncType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D1A00)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D1C10)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D1BE0)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D1A10)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D19D0)

namespace RPG::GameCore
{
	class ByCompareScepterFuncType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RogueMagicScepterFuncType Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
