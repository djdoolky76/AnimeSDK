#pragma once
#include "unitysdk/unitysdk.h"
class GEOJAFFIJOB;
class MNCOPNHONHO;
namespace RPG::GameCore { class TaskContext; }

#define JJBEMIOFIII_CTOR_OFFSET UNITYSDK_OFFSET(0x17429040)
#define JJBEMIOFIII_IMONOMAKBHM_OFFSET UNITYSDK_OFFSET(0x17429160)
#define JJBEMIOFIII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17429070)

inline static constexpr unsigned int JJBEMIOFIII_TypeDefinitionIndex = 53977;

	class JJBEMIOFIII
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GEOJAFFIJOB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GEOJAFFIJOB*))((::PBYTE)hIl2Cpp + JJBEMIOFIII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBEMIOFIII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean IMONOMAKBHM(::MNCOPNHONHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + JJBEMIOFIII_IMONOMAKBHM_OFFSET))(this, a1);
		}

	};
