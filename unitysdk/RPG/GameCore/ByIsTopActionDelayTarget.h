#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTopActionDelayTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21C630)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E21C870)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E21C840)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E21C640)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E21C600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTopActionDelayTarget_TypeDefinitionIndex = 23478;

	class ByIsTopActionDelayTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* ExcludeTargetType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
