#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfTakeOutState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ElfByIsTakeOutState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7A9E0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA7ABD0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA7ABA0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7A9F0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7A9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsTakeOutState_TypeDefinitionIndex = 21545;

	class ST_ElfByIsTakeOutState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfTakeOutState State; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
