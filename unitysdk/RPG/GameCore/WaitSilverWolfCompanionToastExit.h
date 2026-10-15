#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitSilverWolfCompanionToastExit; }

#define RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC74030)
#define RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC74040)
#define RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC74000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSilverWolfCompanionToastExit_TypeDefinitionIndex = 21704;

	class WaitSilverWolfCompanionToastExit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MissionID; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::System::Single MaxWaitTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSilverWolfCompanionToastExit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSilverWolfCompanionToastExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSilverWolfCompanionToastExit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSilverWolfCompanionToastExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSILVERWOLFCOMPANIONTOASTEXIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
