#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByCompareCharacterID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D390E60)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D391120)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3910A0)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D390EC0)
#define RPG_GAMECORE_ADVBYCOMPARECHARACTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D390DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareCharacterID_TypeDefinitionIndex = 20592;

	class AdvByCompareCharacterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPARECHARACTERID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
