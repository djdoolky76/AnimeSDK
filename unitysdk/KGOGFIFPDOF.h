#pragma once
#include "unitysdk/unitysdk.h"
class OHPBLENCFAK;
namespace RPG::GameCore { class TaskContext; }

#define KGOGFIFPDOF_CTOR_OFFSET UNITYSDK_OFFSET(0x197820D0)
#define KGOGFIFPDOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19782100)

inline static constexpr unsigned int KGOGFIFPDOF_TypeDefinitionIndex = 56887;

	class KGOGFIFPDOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OHPBLENCFAK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OHPBLENCFAK*))((::PBYTE)hIl2Cpp + KGOGFIFPDOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOGFIFPDOF_ONTASKBEGIN_OFFSET))(this);
		}

	};
