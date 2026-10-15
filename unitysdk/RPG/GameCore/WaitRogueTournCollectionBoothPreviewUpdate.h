#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothPreviewUpdate; }

#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA0360)
#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA0370)
#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA0320)

namespace RPG::GameCore
{
	class WaitRogueTournCollectionBoothPreviewUpdate : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHPREVIEWUPDATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
