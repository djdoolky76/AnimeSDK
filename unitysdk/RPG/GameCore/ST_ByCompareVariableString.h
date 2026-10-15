#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByCompareVariableString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA45530)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA45770)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA45740)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA45540)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA45500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByCompareVariableString_TypeDefinitionIndex = 20074;

	class ST_ByCompareVariableString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* StateName; // 0x20
		::System::String* VarName; // 0x28
		::System::String* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
