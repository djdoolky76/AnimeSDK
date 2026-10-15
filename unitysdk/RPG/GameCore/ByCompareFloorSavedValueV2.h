#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareFloorSavedValueV2; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AFA10)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4AFCA0)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4AFC60)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4AFA20)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4AF9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorSavedValueV2_TypeDefinitionIndex = 20707;

	class ByCompareFloorSavedValueV2 : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicString* DynamicName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Int16 CompareValue; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
