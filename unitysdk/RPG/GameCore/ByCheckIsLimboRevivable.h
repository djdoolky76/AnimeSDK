#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckIsLimboRevivable; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D462C30)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D462DB0)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D462D80)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D462C40)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D462C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckIsLimboRevivable_TypeDefinitionIndex = 23035;

	class ByCheckIsLimboRevivable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
