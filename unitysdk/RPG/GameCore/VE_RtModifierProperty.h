#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_RtModifierProperty; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC86370)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC86660)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC86600)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC863B0)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC86310)

namespace RPG::GameCore
{
	class VE_RtModifierProperty : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ModifierName; // 0x28
		::RPG::GameCore::NumOperationType OperationType; // 0x30
		::RPG::GameCore::RtModifierPropertyType Property; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtModifierProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtModifierProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtModifierProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtModifierProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtModifierProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtModifierProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtModifierProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtModifierProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
