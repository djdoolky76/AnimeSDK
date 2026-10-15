#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandCatchStateListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41B10)
#define RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB41B20)
#define RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandCatchStateListener_TypeDefinitionIndex = 20967;

	class SwitchHandCatchStateListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCatch; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLay; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCatchStateListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCatchStateListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandCatchStateListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandCatchStateListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCATCHSTATELISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
