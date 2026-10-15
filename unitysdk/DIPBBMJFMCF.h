#pragma once
#include "unitysdk/unitysdk.h"
class FDLLLCJCOPH;
namespace RPG::GameCore { class TaskContext; }

#define DIPBBMJFMCF_CTOR_OFFSET UNITYSDK_OFFSET(0xF221060)
#define DIPBBMJFMCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF221090)

inline static constexpr unsigned int DIPBBMJFMCF_TypeDefinitionIndex = 55212;

	class DIPBBMJFMCF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FDLLLCJCOPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FDLLLCJCOPH*))((::PBYTE)hIl2Cpp + DIPBBMJFMCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPBBMJFMCF_ONTASKBEGIN_OFFSET))(this);
		}

	};
