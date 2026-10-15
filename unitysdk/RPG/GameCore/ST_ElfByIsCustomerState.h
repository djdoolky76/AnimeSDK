#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfCustomerState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ElfByIsCustomerState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7A3B0)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA7A5A0)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA7A570)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7A3C0)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7A380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsCustomerState_TypeDefinitionIndex = 21544;

	class ST_ElfByIsCustomerState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfCustomerState State; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
