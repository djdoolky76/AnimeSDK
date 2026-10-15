#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareHP; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D486640)
#define RPG_GAMECORE_BYCOMPAREHP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4868B0)
#define RPG_GAMECORE_BYCOMPAREHP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D486880)
#define RPG_GAMECORE_BYCOMPAREHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D486650)
#define RPG_GAMECORE_BYCOMPAREHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D486610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHP_TypeDefinitionIndex = 22992;

	class ByCompareHP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
