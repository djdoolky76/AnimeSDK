#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleHitCountUITop; }

#define DKFEBGBMEDB_CTOR_OFFSET UNITYSDK_OFFSET(0x18C12C90)
#define DKFEBGBMEDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C12CC0)

inline static constexpr unsigned int DKFEBGBMEDB_TypeDefinitionIndex = 56908;

	class DKFEBGBMEDB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleHitCountUITop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleHitCountUITop*))((::PBYTE)hIl2Cpp + DKFEBGBMEDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFEBGBMEDB_ONTASKBEGIN_OFFSET))(this);
		}

	};
