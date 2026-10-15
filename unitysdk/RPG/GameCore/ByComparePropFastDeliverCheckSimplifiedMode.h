#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropFastDeliverCheckSimplifiedMode; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49C170)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49C2F0)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49C2C0)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49C180)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49C140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropFastDeliverCheckSimplifiedMode_TypeDefinitionIndex = 22152;

	class ByComparePropFastDeliverCheckSimplifiedMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
