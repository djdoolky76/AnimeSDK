#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverStyle.h"
#include "unitysdk/RPG/GameCore/ComicDessertFeverStyle.h"
class CJGONIGMDJC;
namespace RPG::GameCore { class TaskContext; }

#define ONCCMFOLNAD_CTOR_OFFSET UNITYSDK_OFFSET(0x17D76990)
#define ONCCMFOLNAD_JMCNHABBGBA_OFFSET UNITYSDK_OFFSET(0x17D76B60)
#define ONCCMFOLNAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D769C0)

inline static constexpr unsigned int ONCCMFOLNAD_TypeDefinitionIndex = 53828;

	class ONCCMFOLNAD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CJGONIGMDJC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CJGONIGMDJC*))((::PBYTE)hIl2Cpp + ONCCMFOLNAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCCMFOLNAD_ONTASKBEGIN_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::ComicDessert::FeverStyle JMCNHABBGBA(::RPG::GameCore::ComicDessertFeverStyle a1)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::FeverStyle(*)(::RPG::GameCore::ComicDessertFeverStyle))((::PBYTE)hIl2Cpp + ONCCMFOLNAD_JMCNHABBGBA_OFFSET))(a1);
		}

	};
