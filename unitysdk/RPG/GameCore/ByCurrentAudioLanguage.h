#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentAudioLanguage; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E9680)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E9840)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E9810)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E9690)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E9650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentAudioLanguage_TypeDefinitionIndex = 23814;

	class ByCurrentAudioLanguage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* AudioLanguage; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
