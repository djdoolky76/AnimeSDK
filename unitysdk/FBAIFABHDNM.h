#pragma once
#include "unitysdk/unitysdk.h"
class LKJFPIFKPNE;
namespace RPG::GameCore { class TaskContext; }

#define FBAIFABHDNM_CTOR_OFFSET UNITYSDK_OFFSET(0x15682470)
#define FBAIFABHDNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156824A0)

inline static constexpr unsigned int FBAIFABHDNM_TypeDefinitionIndex = 57944;

	class FBAIFABHDNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LKJFPIFKPNE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LKJFPIFKPNE*))((::PBYTE)hIl2Cpp + FBAIFABHDNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAIFABHDNM_ONTASKBEGIN_OFFSET))(this);
		}

	};
