#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePerformance; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4994A0)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D499670)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D499640)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4994B0)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D499470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePerformance_TypeDefinitionIndex = 20315;

	class ByComparePerformance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* PerformanceID_DS; // 0x20
		::System::UInt32 PerformanceID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
