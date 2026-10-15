#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareAIVariableInt; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46B0E0)
#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D46B340)
#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D46B310)
#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D46B0F0)
#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46B0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAIVariableInt_TypeDefinitionIndex = 20040;

	class ByCompareAIVariableInt : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VarName; // 0x20
		::RPG::GameCore::CompareType EquationType; // 0x28
		::System::Int32 TargetValue; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
