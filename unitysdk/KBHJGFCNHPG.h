#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CacheCharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define KBHJGFCNHPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB3013A0)
#define KBHJGFCNHPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3013D0)

	class KBHJGFCNHPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + KBHJGFCNHPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHJGFCNHPG_ONTASKBEGIN_OFFSET))(this);
		}

	};
