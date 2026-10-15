#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInDistrict; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINDISTRICT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5186F0)
#define RPG_GAMECORE_BYISINDISTRICT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5188F0)
#define RPG_GAMECORE_BYISINDISTRICT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5188C0)
#define RPG_GAMECORE_BYISINDISTRICT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D518700)
#define RPG_GAMECORE_BYISINDISTRICT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5186C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInDistrict_TypeDefinitionIndex = 20597;

	class ByIsInDistrict : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* DistrictType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDISTRICT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
