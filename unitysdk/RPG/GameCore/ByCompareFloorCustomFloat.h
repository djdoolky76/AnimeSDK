#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareFloorCustomFloat; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4ACA40)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4ACCA0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4ACC60)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4ACA50)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4ACA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomFloat_TypeDefinitionIndex = 20693;

	class ByCompareFloorCustomFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
