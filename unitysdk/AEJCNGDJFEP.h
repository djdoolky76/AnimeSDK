#pragma once
#include "unitysdk/unitysdk.h"
class DGAOCHGKJKJ;
class GEDPDGBJNJO;
namespace RPG::GameCore { class TaskContext; }

#define AEJCNGDJFEP_CTOR_OFFSET UNITYSDK_OFFSET(0x18DA25F0)
#define AEJCNGDJFEP_JFGJDHHMPEP_OFFSET UNITYSDK_OFFSET(0x18DA28C0)
#define AEJCNGDJFEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DA2620)

inline static constexpr unsigned int AEJCNGDJFEP_TypeDefinitionIndex = 56101;

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
