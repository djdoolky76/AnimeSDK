#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCODBMFHPH;
class PDKDGMLAHPM;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xCA36F00)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xCA37140)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0xCA37770)
#define RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xCA56570)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int GamePhase_TypeDefinitionIndex = 76293;

	class GamePhase : public ::System::Object
	{
	public:
		::GOCODBMFHPH* _PhaseManager; // 0x10
		::System::Void _ctor(::GOCODBMFHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCODBMFHPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* get__GameContext()
		{
			return ((::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__GAMECONTEXT_OFFSET))(this);
		}

		::System::Void SendMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_SENDMESSAGE_OFFSET))(this, a1, a2);
		}

		::PDKDGMLAHPM* get__NetworkService()
		{
			return ((::PDKDGMLAHPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GAMEPHASE_GET__NETWORKSERVICE_OFFSET))(this);
		}

	};
}
