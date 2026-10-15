#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define NIDGHBBHCDG_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDA5F0)
#define NIDGHBBHCDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBDA620)

inline static constexpr unsigned int NIDGHBBHCDG_TypeDefinitionIndex = 56396;

	class NIDGHBBHCDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + NIDGHBBHCDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDGHBBHCDG_ONTASKBEGIN_OFFSET))(this);
		}

	};
