#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class IANEMJNCHDN;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define IANEMJNCHDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDBEC0)
#define IANEMJNCHDN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CEDC130)
#define IANEMJNCHDN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CEDC0D0)
#define IANEMJNCHDN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEDBF00)
#define IANEMJNCHDN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEDBE60)

	class IANEMJNCHDN : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* DCLGGMAEMAO; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANEMJNCHDN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IANEMJNCHDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IANEMJNCHDN*))((::PBYTE)hIl2Cpp + IANEMJNCHDN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IANEMJNCHDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IANEMJNCHDN*))((::PBYTE)hIl2Cpp + IANEMJNCHDN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::IANEMJNCHDN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IANEMJNCHDN*))((::PBYTE)hIl2Cpp + IANEMJNCHDN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::IANEMJNCHDN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IANEMJNCHDN*))((::PBYTE)hIl2Cpp + IANEMJNCHDN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
