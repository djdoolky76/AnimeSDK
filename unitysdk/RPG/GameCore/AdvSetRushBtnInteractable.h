#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetRushBtnInteractable; }

#define RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0D60)
#define RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B0D70)
#define RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B0D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetRushBtnInteractable_TypeDefinitionIndex = 20204;

	class AdvSetRushBtnInteractable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsInteractable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetRushBtnInteractable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetRushBtnInteractable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetRushBtnInteractable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetRushBtnInteractable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
