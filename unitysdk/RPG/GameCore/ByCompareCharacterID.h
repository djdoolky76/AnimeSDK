#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCharacterID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHARACTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF798C0)
#define RPG_GAMECORE_BYCOMPARECHARACTERID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DF79B80)
#define RPG_GAMECORE_BYCOMPARECHARACTERID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DF79B00)
#define RPG_GAMECORE_BYCOMPARECHARACTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF79920)
#define RPG_GAMECORE_BYCOMPARECHARACTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF79840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterID_TypeDefinitionIndex = 22966;

	class ByCompareCharacterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
