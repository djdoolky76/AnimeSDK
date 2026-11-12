#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByMainMissionFinish; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYMAINMISSIONFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73CA90)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E73CC40)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E73CC10)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E73CAA0)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E73CA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByMainMissionFinish_TypeDefinitionIndex = 20812;

	class ByMainMissionFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
