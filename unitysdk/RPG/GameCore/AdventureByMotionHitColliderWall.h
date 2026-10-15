#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByMotionHitColliderWall; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BFCC0)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3BFED0)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3BFEA0)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3BFCD0)
#define RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3BFC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMotionHitColliderWall_TypeDefinitionIndex = 20225;

	class AdventureByMotionHitColliderWall : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::System::String*>* DetectLayers; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOTIONHITCOLLIDERWALL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
