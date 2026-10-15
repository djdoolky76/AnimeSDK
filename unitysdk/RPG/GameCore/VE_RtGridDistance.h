#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_RtGridDistance; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTGRIDDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC85D10)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC85F10)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC85EE0)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC85D20)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC85CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtGridDistance_TypeDefinitionIndex = 24260;

	class VE_RtGridDistance : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
