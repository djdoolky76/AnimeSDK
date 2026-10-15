#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareLittleGameLevelVarShort; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48E110)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48E3B0)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48E370)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48E120)
#define RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48E0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLittleGameLevelVarShort_TypeDefinitionIndex = 21427;

	class ByCompareLittleGameLevelVarShort : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELITTLEGAMELEVELVARSHORT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
