#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByInAlertRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYINALERTRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA26790)
#define RPG_GAMECORE_RTBYINALERTRANGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA26990)
#define RPG_GAMECORE_RTBYINALERTRANGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA26960)
#define RPG_GAMECORE_RTBYINALERTRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA267A0)
#define RPG_GAMECORE_RTBYINALERTRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA26760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByInAlertRange_TypeDefinitionIndex = 24228;

	class RtByInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CheckTargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
