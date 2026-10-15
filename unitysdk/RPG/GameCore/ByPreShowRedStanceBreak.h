#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPreShowRedStanceBreak; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D504030)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D504230)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D504200)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D504040)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D504000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPreShowRedStanceBreak_TypeDefinitionIndex = 23540;

	class ByPreShowRedStanceBreak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillCaster; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
