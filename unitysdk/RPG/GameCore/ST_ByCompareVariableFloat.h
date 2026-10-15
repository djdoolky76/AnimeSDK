#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByCompareVariableFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA723B0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA72640)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA72610)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA723C0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA72380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByCompareVariableFloat_TypeDefinitionIndex = 20073;

	class ST_ByCompareVariableFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* StateName; // 0x20
		::System::String* VarName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Single CompareValue; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
