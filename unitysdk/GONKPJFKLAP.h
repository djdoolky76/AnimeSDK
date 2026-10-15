#pragma once
#include "unitysdk/unitysdk.h"
class DANFCLODJNK;
namespace RPG::GameCore { class TaskContext; }

#define GONKPJFKLAP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3BAE0)
#define GONKPJFKLAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B3BB10)

	class GONKPJFKLAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DANFCLODJNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DANFCLODJNK*))((::PBYTE)hIl2Cpp + GONKPJFKLAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONKPJFKLAP_ONTASKBEGIN_OFFSET))(this);
		}

	};
