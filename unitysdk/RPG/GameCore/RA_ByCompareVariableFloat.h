#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RA_ByCompareVariableFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D963660)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D9638B0)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D963880)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D963670)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D963630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByCompareVariableFloat_TypeDefinitionIndex = 20053;

	class RA_ByCompareVariableFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VarName; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Single CompareValue; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
