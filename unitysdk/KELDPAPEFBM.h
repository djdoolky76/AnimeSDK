#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ApplyCacheCharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define KELDPAPEFBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5DFD40)
#define KELDPAPEFBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5DFD70)

inline static constexpr unsigned int KELDPAPEFBM_TypeDefinitionIndex = 57557;

	class KELDPAPEFBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + KELDPAPEFBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELDPAPEFBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
