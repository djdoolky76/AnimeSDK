#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define RPG_GAMECORE_TIMERELAYFLAMEEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB85160)
#define RPG_GAMECORE_TIMERELAYFLAMEEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB85170)
#define RPG_GAMECORE_TIMERELAYFLAMEEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB85130)

namespace RPG::GameCore
{
	class TimeRelayFlameEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Finish; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Quit; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Reset; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TraceBackFail; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* HpZeroFail; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BoxCrushFail; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AutoSpawnFail; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ClonePlayerStart; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ClonePlayerEnd; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FallFail; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ClonePlayerFallFail; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Teleport; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TeleportFail; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ClonePlayerTeleportFail; // 0x80
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PlayerMove; // 0x88
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Ignite; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMEEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRelayFlameEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRelayFlameEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMEEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRelayFlameEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRelayFlameEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMEEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
