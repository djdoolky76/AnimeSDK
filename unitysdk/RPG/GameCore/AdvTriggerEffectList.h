#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvTriggerEffectList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVTRIGGEREFFECTLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3864E0)
#define RPG_GAMECORE_ADVTRIGGEREFFECTLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D386690)
#define RPG_GAMECORE_ADVTRIGGEREFFECTLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D386660)
#define RPG_GAMECORE_ADVTRIGGEREFFECTLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3864F0)
#define RPG_GAMECORE_ADVTRIGGEREFFECTLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3864B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTriggerEffectList_TypeDefinitionIndex = 22317;

	class AdvTriggerEffectList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ConfigNameList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGEREFFECTLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGEREFFECTLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGEREFFECTLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGEREFFECTLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGEREFFECTLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
