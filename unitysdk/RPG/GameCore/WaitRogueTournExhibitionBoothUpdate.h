#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitRogueTournExhibitionBoothUpdate; }

#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA07E0)
#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA07F0)
#define RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA07A0)

namespace RPG::GameCore
{
	class WaitRogueTournExhibitionBoothUpdate : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNEXHIBITIONBOOTHUPDATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
