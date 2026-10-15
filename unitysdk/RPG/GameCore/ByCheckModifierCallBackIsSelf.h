#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckModifierCallBackIsSelf; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D465220)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4653A0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D465370)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D465230)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4651F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackIsSelf_TypeDefinitionIndex = 23042;

	class ByCheckModifierCallBackIsSelf : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISSELF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
