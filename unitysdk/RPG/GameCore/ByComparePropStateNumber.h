#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropStateNumber; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49E610)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49E910)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49E8E0)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49E620)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49E5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropStateNumber_TypeDefinitionIndex = 21690;

	class ByComparePropStateNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* PropIDList; // 0x28
		::RPG::GameCore::PropState State; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x34
		::System::UInt32 CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
