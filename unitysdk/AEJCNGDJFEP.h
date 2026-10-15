#pragma once
#include "unitysdk/unitysdk.h"
class DGAOCHGKJKJ;
class GEDPDGBJNJO;
namespace RPG::GameCore { class TaskContext; }

#define AEJCNGDJFEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB153FD0)
#define AEJCNGDJFEP_JFGJDHHMPEP_OFFSET UNITYSDK_OFFSET(0xB1542B0)
#define AEJCNGDJFEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB154000)

	class AEJCNGDJFEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DGAOCHGKJKJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DGAOCHGKJKJ*))((::PBYTE)hIl2Cpp + AEJCNGDJFEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJCNGDJFEP_ONTASKBEGIN_OFFSET))(this);
		}

		::GEDPDGBJNJO* JFGJDHHMPEP()
		{
			return ((::GEDPDGBJNJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJCNGDJFEP_JFGJDHHMPEP_OFFSET))(this);
		}

	};
