#pragma once
#include "unitysdk/unitysdk.h"
class MIBMLOEAJII;
namespace RPG::GameCore { class TaskContext; }

#define HGEBBGIHKOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C947B0)
#define HGEBBGIHKOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C947E0)

inline static constexpr unsigned int HGEBBGIHKOC_TypeDefinitionIndex = 53351;

	class HGEBBGIHKOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MIBMLOEAJII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MIBMLOEAJII*))((::PBYTE)hIl2Cpp + HGEBBGIHKOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBGIHKOC_ONTASKBEGIN_OFFSET))(this);
		}

	};
