#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RegionEraStateChangeListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D977090)
#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9770A0)
#define RPG_GAMECORE_REGIONERASTATECHANGELISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D977050)

namespace RPG::GameCore
{
	class RegionEraStateChangeListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSwitchToState1; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSwitchToState2; // 0x20
		::System::Boolean ListenCallbackLoop; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGIONERASTATECHANGELISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RegionEraStateChangeListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RegionEraStateChangeListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGIONERASTATECHANGELISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RegionEraStateChangeListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RegionEraStateChangeListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGIONERASTATECHANGELISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
