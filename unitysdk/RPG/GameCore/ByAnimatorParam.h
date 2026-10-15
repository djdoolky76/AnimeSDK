#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAnimatorComparableParameterType.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAnimatorParam; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYANIMATORPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D456510)
#define RPG_GAMECORE_BYANIMATORPARAM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4568A0)
#define RPG_GAMECORE_BYANIMATORPARAM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D456870)
#define RPG_GAMECORE_BYANIMATORPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D456520)
#define RPG_GAMECORE_BYANIMATORPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4564E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnimatorParam_TypeDefinitionIndex = 20804;

	class ByAnimatorParam : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::EAnimatorComparableParameterType ParamType; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* ParamName; // 0x30
		::RPG::GameCore::ParamType ParamCompareType; // 0x38
		::System::Single FloatValue; // 0x3C
		::System::Int32 IntegerValue; // 0x40
		::System::Boolean BooleanValue; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
