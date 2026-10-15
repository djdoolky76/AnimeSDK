#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropPredicateWithEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D951180)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D9513E0)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D951390)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9511B0)
#define RPG_GAMECORE_PROPPREDICATEWITHENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D951130)

namespace RPG::GameCore
{
	class PropPredicateWithEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EntityType>* LayerMask; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPREDICATEWITHENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
