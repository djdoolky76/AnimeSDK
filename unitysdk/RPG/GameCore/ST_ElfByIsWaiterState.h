#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfWaiterState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ElfByIsWaiterState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7B010)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA7B200)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA7B1D0)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7B020)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7AFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsWaiterState_TypeDefinitionIndex = 21546;

	class ST_ElfByIsWaiterState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfWaiterState State; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
