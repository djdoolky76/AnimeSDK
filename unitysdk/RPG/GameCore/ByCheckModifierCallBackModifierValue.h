#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckModifierCallBackModifierValue; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D493150)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4933C0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D493390)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D493160)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D493120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackModifierValue_TypeDefinitionIndex = 23046;

	class ByCheckModifierCallBackModifierValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ModifierValueType ValueType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKMODIFIERVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
