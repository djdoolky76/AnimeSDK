#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideCharacterFilteredEffect; }
namespace RPG::GameCore { class TaskContext; }

#define KKELGGELLBK_CTOR_OFFSET UNITYSDK_OFFSET(0xB4BB930)
#define KKELGGELLBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4BB960)

inline static constexpr unsigned int KKELGGELLBK_TypeDefinitionIndex = 55091;

	class KKELGGELLBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideCharacterFilteredEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideCharacterFilteredEffect*))((::PBYTE)hIl2Cpp + KKELGGELLBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKELGGELLBK_ONTASKBEGIN_OFFSET))(this);
		}

	};
