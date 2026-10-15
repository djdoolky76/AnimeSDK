#pragma once
#include "unitysdk/unitysdk.h"
class HELMBGJNNEN;
namespace RPG::GameCore { class TaskContext; }

#define GCMJLGODDDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15984A10)
#define GCMJLGODDDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15984A40)

	class GCMJLGODDDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HELMBGJNNEN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HELMBGJNNEN*))((::PBYTE)hIl2Cpp + GCMJLGODDDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMJLGODDDM_ONTASKBEGIN_OFFSET))(this);
		}

	};
