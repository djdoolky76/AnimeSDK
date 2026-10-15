#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInCharacterIDGroup; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5170F0)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5172F0)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5172C0)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D517100)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5170C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInCharacterIDGroup_TypeDefinitionIndex = 23367;

	class ByIsInCharacterIDGroup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* Group; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
