#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitDrinkMakerCheersInitFinish; }

#define RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC96360)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC96370)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC96320)

namespace RPG::GameCore
{
	class WaitDrinkMakerCheersInitFinish : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSINITFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
