#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSubMissionState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AD1C0)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4AD420)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4AD3F0)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4AD1D0)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4AD190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSubMissionState_TypeDefinitionIndex = 20312;

	class ByCompareSubMissionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x20
		::RPG::GameCore::SubMissionState SubMissionState; // 0x24
		::System::Boolean AllStoryLine; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
