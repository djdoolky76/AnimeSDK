#pragma once
#include "unitysdk/unitysdk.h"
class DGAOCHGKJKJ;
class GEDPDGBJNJO;
namespace RPG::GameCore { class TaskContext; }

#define AEJCNGDJFEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB152840)
#define AEJCNGDJFEP_JFGJDHHMPEP_OFFSET UNITYSDK_OFFSET(0xB152B10)
#define AEJCNGDJFEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB152870)

inline static constexpr unsigned int AEJCNGDJFEP_TypeDefinitionIndex = 54929;

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
