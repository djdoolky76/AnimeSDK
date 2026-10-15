#pragma once
#include "unitysdk/unitysdk.h"
class HELMBGJNNEN;
namespace RPG::GameCore { class TaskContext; }

#define GCMJLGODDDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15979A40)
#define GCMJLGODDDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15979A70)

inline static constexpr unsigned int GCMJLGODDDM_TypeDefinitionIndex = 53927;

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
