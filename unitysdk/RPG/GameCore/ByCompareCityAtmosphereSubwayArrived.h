#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCityAtmosphereSubwayArrived; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A1EB0)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A2060)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A2030)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A1EC0)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A1E80)

namespace RPG::GameCore
{
	class ByCompareCityAtmosphereSubwayArrived : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
