#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothUpdate; }

#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC72CF0)
#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC72D00)
#define RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC72CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueTournCollectionBoothUpdate_TypeDefinitionIndex = 22110;

	class WaitRogueTournCollectionBoothUpdate : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUETOURNCOLLECTIONBOOTHUPDATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
