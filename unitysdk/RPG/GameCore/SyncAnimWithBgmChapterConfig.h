#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncAnimWithBgmChapterConfig; }
namespace RPG::GameCore { class SyncAnimWithBgmPhaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SYNCANIMWITHBGMCHAPTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4FE90)
#define RPG_GAMECORE_SYNCANIMWITHBGMCHAPTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB4FCF0)

namespace RPG::GameCore
{
	class SyncAnimWithBgmChapterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ChapterCueEvent; // 0x10
		::Il2CppArray<::RPG::GameCore::SyncAnimWithBgmPhaseConfig*>* PhaseConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::SyncAnimWithBgmPhaseConfig*>* x2PhaseConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGMCHAPTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncAnimWithBgmChapterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncAnimWithBgmChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGMCHAPTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
