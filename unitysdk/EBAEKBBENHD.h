#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HipplenMiniGameCreateCharacters; }
namespace RPG::GameCore { class TaskContext; }

#define EBAEKBBENHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AD400)
#define EBAEKBBENHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C3AD430)

inline static constexpr unsigned int EBAEKBBENHD_TypeDefinitionIndex = 53384;

	class EBAEKBBENHD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenMiniGameCreateCharacters* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenMiniGameCreateCharacters*))((::PBYTE)hIl2Cpp + EBAEKBBENHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAEKBBENHD_ONTASKBEGIN_OFFSET))(this);
		}

	};
