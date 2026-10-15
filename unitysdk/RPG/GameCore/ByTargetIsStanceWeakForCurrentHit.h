#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentHit; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53C0E0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D53C2E0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D53C2B0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D53C0F0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53C0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeakForCurrentHit_TypeDefinitionIndex = 23515;

	class ByTargetIsStanceWeakForCurrentHit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
