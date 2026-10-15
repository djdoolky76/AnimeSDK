#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByEntityTimeScaleZero; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F2A90)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F2C50)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F2C20)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F2AA0)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F2A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityTimeScaleZero_TypeDefinitionIndex = 20590;

	class ByEntityTimeScaleZero : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
