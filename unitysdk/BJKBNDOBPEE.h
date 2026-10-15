#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvCharacterFindChest; }
namespace RPG::GameCore { class TaskContext; }

#define BJKBNDOBPEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A3C80)
#define BJKBNDOBPEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7A3CB0)

	class BJKBNDOBPEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterFindChest* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterFindChest*))((::PBYTE)hIl2Cpp + BJKBNDOBPEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBNDOBPEE_ONTASKBEGIN_OFFSET))(this);
		}

	};
