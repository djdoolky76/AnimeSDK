#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_RtDistance; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC57E30)
#define RPG_GAMECORE_VE_RTDISTANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC58030)
#define RPG_GAMECORE_VE_RTDISTANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC58000)
#define RPG_GAMECORE_VE_RTDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC57E40)
#define RPG_GAMECORE_VE_RTDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC57E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtDistance_TypeDefinitionIndex = 24266;

	class VE_RtDistance : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
