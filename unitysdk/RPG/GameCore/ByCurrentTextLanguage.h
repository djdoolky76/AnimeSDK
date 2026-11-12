#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentTextLanguage; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FDCB0)
#define RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E6FDE70)
#define RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E6FDE40)
#define RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6FDCC0)
#define RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6FDC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentTextLanguage_TypeDefinitionIndex = 24271;

	class ByCurrentTextLanguage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* TextLanguage; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentTextLanguage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentTextLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentTextLanguage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentTextLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTextLanguage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTextLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTextLanguage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTextLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTEXTLANGUAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
