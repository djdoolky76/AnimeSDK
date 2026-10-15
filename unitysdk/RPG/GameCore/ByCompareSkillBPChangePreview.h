#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSkillBPChangePreview; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D3BC0)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D3EE0)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D3EB0)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D3BD0)
#define RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D3B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSkillBPChangePreview_TypeDefinitionIndex = 23508;

	class ByCompareSkillBPChangePreview : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseCurrentSkill; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x24
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::String* MatchedModifierName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLBPCHANGEPREVIEW_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
