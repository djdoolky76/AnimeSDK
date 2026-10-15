#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPValueType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareBP; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46EAC0)
#define RPG_GAMECORE_BYCOMPAREBP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D46ED50)
#define RPG_GAMECORE_BYCOMPAREBP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D46ED10)
#define RPG_GAMECORE_BYCOMPAREBP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D46EAD0)
#define RPG_GAMECORE_BYCOMPAREBP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46EA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareBP_TypeDefinitionIndex = 23057;

	class ByCompareBP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::RPG::GameCore::BPValueType ValueType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
