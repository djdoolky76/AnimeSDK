#pragma once
#include "unitysdk/unitysdk.h"
class FJLJAAFGCBN;
namespace RPG::GameCore { class TaskContext; }

#define LKONGBEKHLH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFAEB0)
#define LKONGBEKHLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFFAEE0)

inline static constexpr unsigned int LKONGBEKHLH_TypeDefinitionIndex = 56699;

	class LKONGBEKHLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FJLJAAFGCBN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FJLJAAFGCBN*))((::PBYTE)hIl2Cpp + LKONGBEKHLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKONGBEKHLH_ONTASKBEGIN_OFFSET))(this);
		}

	};
