#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareFloorCustomStringV2; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AE5C0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4AE840)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4AE800)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4AE5D0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4AE580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomStringV2_TypeDefinitionIndex = 20701;

	class ByCompareFloorCustomStringV2 : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IgnoreCase; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* Name; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicString* CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
