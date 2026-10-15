#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPreShowStanceBreak; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D504710)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D504990)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D504960)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D504720)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5046E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPreShowStanceBreak_TypeDefinitionIndex = 23539;

	class ByPreShowStanceBreak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillCaster; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::PreShowStanceCheckType CheckType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
