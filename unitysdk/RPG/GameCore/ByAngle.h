#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAngle; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANGLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D482E20)
#define RPG_GAMECORE_BYANGLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4830E0)
#define RPG_GAMECORE_BYANGLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4830A0)
#define RPG_GAMECORE_BYANGLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D482E30)
#define RPG_GAMECORE_BYANGLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D482DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAngle_TypeDefinitionIndex = 20776;

	class ByAngle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
