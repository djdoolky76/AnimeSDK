#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_RtBattlePropertyRatio; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC563B0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC565C0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC56590)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC563C0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC56380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattlePropertyRatio_TypeDefinitionIndex = 24270;

	class VE_RtBattlePropertyRatio : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtAbilityProperty Property; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattlePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattlePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattlePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattlePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
