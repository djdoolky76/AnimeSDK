#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitDrinkMakerCheersShowMainPage; }

#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC96540)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC96550)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC96500)

namespace RPG::GameCore
{
	class WaitDrinkMakerCheersShowMainPage : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
