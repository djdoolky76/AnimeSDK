#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareIsBookAvailable; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D489AC0)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D489CB0)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D489C80)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D489AD0)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D489A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsBookAvailable_TypeDefinitionIndex = 20883;

	class ByCompareIsBookAvailable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BookSeriesID; // 0x20
		::System::UInt32 BookID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
