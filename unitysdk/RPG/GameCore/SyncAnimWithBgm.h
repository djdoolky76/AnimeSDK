#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncAnimWithBgm; }
namespace RPG::GameCore { class SyncAnimWithBgmChapterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SYNCANIMWITHBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB22220)
#define RPG_GAMECORE_SYNCANIMWITHBGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB22230)
#define RPG_GAMECORE_SYNCANIMWITHBGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB221F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncAnimWithBgm_TypeDefinitionIndex = 22393;

	class SyncAnimWithBgm : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BGMStateName; // 0x18
		::System::Single BPM; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::SyncAnimWithBgmChapterConfig*>* ChapterConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncAnimWithBgm* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncAnimWithBgm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncAnimWithBgm* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncAnimWithBgm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
