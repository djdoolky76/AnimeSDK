#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByCheckGameMode; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D361540)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D361710)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3616E0)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D361550)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D361510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckGameMode_TypeDefinitionIndex = 20779;

	class AdvByCheckGameMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameModeType>* GameModes; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
