#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSeriesID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESERIESID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A5C30)
#define RPG_GAMECORE_BYCOMPARESERIESID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A5DB0)
#define RPG_GAMECORE_BYCOMPARESERIESID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A5D80)
#define RPG_GAMECORE_BYCOMPARESERIESID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A5C40)
#define RPG_GAMECORE_BYCOMPARESERIESID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A5C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSeriesID_TypeDefinitionIndex = 21095;

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
