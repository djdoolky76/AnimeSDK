#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCurrentSkillUseParam; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A5240)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A5470)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A5440)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A5250)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A5210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentSkillUseParam_TypeDefinitionIndex = 22554;

	class ByCompareCurrentSkillUseParam : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
