#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareDamageTag; }
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A70D0)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A72A0)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A7270)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A70E0)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A70A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareDamageTag_TypeDefinitionIndex = 23570;

	class ByCompareDamageTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DamageTagList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
