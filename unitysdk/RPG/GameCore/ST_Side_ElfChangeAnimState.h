#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_ElfChangeAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA82D50)
#define RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA82D60)
#define RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA82D20)

namespace RPG::GameCore
{
	class ST_Side_ElfChangeAnimState : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Delay; // 0x18
		::System::UInt32 State; // 0x1C
		::System::String* AudioEventName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_ElfChangeAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_ElfChangeAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_ElfChangeAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_ElfChangeAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
