#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSeriesID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESERIESID_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E3E20)
#define RPG_GAMECORE_BYCOMPARESERIESID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E6E3FA0)
#define RPG_GAMECORE_BYCOMPARESERIESID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E6E3F70)
#define RPG_GAMECORE_BYCOMPARESERIESID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6E3E30)
#define RPG_GAMECORE_BYCOMPARESERIESID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6E3DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSeriesID_TypeDefinitionIndex = 21436;

	class ByCompareSeriesID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
