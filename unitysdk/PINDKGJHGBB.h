#pragma once
#include "unitysdk/unitysdk.h"
class KHCCJMGHFIJ;
namespace RPG::GameCore { class TaskContext; }

#define PINDKGJHGBB_CTOR_OFFSET UNITYSDK_OFFSET(0xC272430)
#define PINDKGJHGBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC272460)

inline static constexpr unsigned int PINDKGJHGBB_TypeDefinitionIndex = 55050;

	class PINDKGJHGBB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KHCCJMGHFIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KHCCJMGHFIJ*))((::PBYTE)hIl2Cpp + PINDKGJHGBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINDKGJHGBB_ONTASKBEGIN_OFFSET))(this);
		}

	};
