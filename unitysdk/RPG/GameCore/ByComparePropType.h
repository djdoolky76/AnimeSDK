#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CCBD0)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CCDE0)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CCDB0)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CCBE0)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CCBA0)

namespace RPG::GameCore
{
	class ByComparePropType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::PropType>* Types; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
