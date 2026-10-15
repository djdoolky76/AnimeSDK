#pragma once
#include "unitysdk/unitysdk.h"
class IAJEHABKDFG;
namespace RPG::GameCore { class TaskContext; }

#define BFENACEDFNM_CTOR_OFFSET UNITYSDK_OFFSET(0xB160140)
#define BFENACEDFNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB160170)

inline static constexpr unsigned int BFENACEDFNM_TypeDefinitionIndex = 58025;

	class BFENACEDFNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IAJEHABKDFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IAJEHABKDFG*))((::PBYTE)hIl2Cpp + BFENACEDFNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFENACEDFNM_ONTASKBEGIN_OFFSET))(this);
		}

	};
