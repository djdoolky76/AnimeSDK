#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareIsWolfBroBulletActivated; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B8230)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B83B0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B8380)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B8240)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B8200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsWolfBroBulletActivated_TypeDefinitionIndex = 21990;

	class ByCompareIsWolfBroBulletActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
