#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkipTriggerSoundSource.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameWorld; }

#define GFHINBKBMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B497120)
#define GFHINBKBMAJ_JLMHHFCBOGJ_OFFSET UNITYSDK_OFFSET(0x1B496FD0)
#define GFHINBKBMAJ_MOHDJINJBDB_OFFSET UNITYSDK_OFFSET(0x1B497090)
#define GFHINBKBMAJ_MPBEMIPGCDG_OFFSET UNITYSDK_OFFSET(0x1B497040)

inline static constexpr unsigned int GFHINBKBMAJ_TypeDefinitionIndex = 57680;

	class GFHINBKBMAJ : public ::System::Object
	{
	public:
		::System::UInt32 AIAKJHGNFOC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHINBKBMAJ_CTOR_OFFSET))(this);
		}

		::System::Void JLMHHFCBOGJ(::RPG::GameCore::SkipTriggerSoundSource a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkipTriggerSoundSource, ::System::Boolean))((::PBYTE)hIl2Cpp + GFHINBKBMAJ_JLMHHFCBOGJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean MPBEMIPGCDG(::RPG::GameCore::SkipTriggerSoundSource a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkipTriggerSoundSource))((::PBYTE)hIl2Cpp + GFHINBKBMAJ_MPBEMIPGCDG_OFFSET))(this, a1);
		}

		static ::System::Boolean MOHDJINJBDB(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::SkipTriggerSoundSource a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::SkipTriggerSoundSource))((::PBYTE)hIl2Cpp + GFHINBKBMAJ_MOHDJINJBDB_OFFSET))(a1, a2);
		}

	};
