#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckUIMode; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CHECKUIMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57D430)
#define RPG_GAMECORE_CHECKUIMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57D440)
#define RPG_GAMECORE_CHECKUIMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57D400)

namespace RPG::GameCore
{
	class CheckUIMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMobile; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPC; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMobileOrPC; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnController; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKUIMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckUIMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckUIMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKUIMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckUIMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckUIMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKUIMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
