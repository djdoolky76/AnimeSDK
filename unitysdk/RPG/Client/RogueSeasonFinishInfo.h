#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMOIBEFBKCL;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace RPG::Client { class RogueFinishInfo; }

#define RPG_CLIENT_ROGUESEASONFINISHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDF5F9A0)
#define RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET UNITYSDK_OFFSET(0xDF5FA30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSeasonFinishInfo_TypeDefinitionIndex = 67458;

	class RogueSeasonFinishInfo : public ::System::Object
	{
	public:
		::PKPICFPDHEO* _LineupInfo; // 0x10
		::RPG::Client::RogueFinishInfo* RogueFinishInfo; // 0x18
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
