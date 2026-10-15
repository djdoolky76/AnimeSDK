#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ShowBattleMessage; }

#define RPG_GAMECORE_SHOWBATTLEMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA790)
#define RPG_GAMECORE_SHOWBATTLEMESSAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA7B0)
#define RPG_GAMECORE_SHOWBATTLEMESSAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleMessage_TypeDefinitionIndex = 22483;

	class ShowBattleMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID ContentID; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ParamList; // 0x28
		::System::Single LifetimeNormal; // 0x30
		::System::Single LifetimeMin; // 0x34
		::System::Boolean WaitShowPageFinish; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEMESSAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEMESSAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEMESSAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
