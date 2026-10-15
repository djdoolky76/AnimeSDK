#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckModifierCallBackName; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D493A10)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D493C10)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D493BE0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D493A20)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4939E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackName_TypeDefinitionIndex = 23043;

	class ByCheckModifierCallBackName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
