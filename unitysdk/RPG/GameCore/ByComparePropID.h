#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropID; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49D1C0)
#define RPG_GAMECORE_BYCOMPAREPROPID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49D3B0)
#define RPG_GAMECORE_BYCOMPAREPROPID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49D380)
#define RPG_GAMECORE_BYCOMPAREPROPID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49D1D0)
#define RPG_GAMECORE_BYCOMPAREPROPID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49D190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropID_TypeDefinitionIndex = 21960;

	class ByComparePropID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 PropID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
