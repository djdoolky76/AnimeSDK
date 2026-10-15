#pragma once
#include "unitysdk/unitysdk.h"
class EGKMFINAFHB;
namespace RPG::GameCore { class TaskContext; }

#define LHINEDDINDL_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AD770)
#define LHINEDDINDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6AD7A0)

inline static constexpr unsigned int LHINEDDINDL_TypeDefinitionIndex = 55564;

	class LHINEDDINDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EGKMFINAFHB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EGKMFINAFHB*))((::PBYTE)hIl2Cpp + LHINEDDINDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHINEDDINDL_ONTASKBEGIN_OFFSET))(this);
		}

	};
