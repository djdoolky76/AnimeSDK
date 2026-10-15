#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchMascotSection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchMascotSetSectionVisible; }

#define RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB446F0)
#define RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB44700)
#define RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB446B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotSetSectionVisible_TypeDefinitionIndex = 22000;

	class SwitchMascotSetSectionVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchMascotSection Section; // 0x18
		::System::Boolean Visible; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotSetSectionVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotSetSectionVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotSetSectionVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotSetSectionVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
