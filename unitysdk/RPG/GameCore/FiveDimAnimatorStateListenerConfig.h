#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAnimatorListenConfig; }
namespace RPG::GameCore { class FiveDimAnimatorStateListenerConfig; }

#define RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AEB30)
#define RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AEB40)
#define RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AEB00)

namespace RPG::GameCore
{
	class FiveDimAnimatorStateListenerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsAnimatorStateListener; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::FiveDimAnimatorListenConfig*>* ListenerList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORSTATELISTENERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
