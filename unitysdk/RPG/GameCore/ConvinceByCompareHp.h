#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceByCompareHp; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE3A0)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5AE5C0)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5AE590)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AE3B0)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AE370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceByCompareHp_TypeDefinitionIndex = 21836;

	class ConvinceByCompareHp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
