#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMOIBEFBKCL;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace RPG::Client { class RogueFinishInfo; }

#define RPG_CLIENT_ROGUESEASONFINISHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDF6A360)
#define RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET UNITYSDK_OFFSET(0xDF6A3F0)

namespace RPG::Client
{
	class RogueSeasonFinishInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueFinishInfo* RogueFinishInfo; // 0x10
		::PKPICFPDHEO* _LineupInfo; // 0x18
		::KHNBFDNKLHE* _SceneInfo; // 0x20
		::System::Boolean AlreadyFinish; // 0x28
		::System::Void _ctor(::IMOIBEFBKCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMOIBEFBKCL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void QuitRogueMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET))(this);
		}

	};
}
