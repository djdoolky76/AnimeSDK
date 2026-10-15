#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyAiVisionExcludeTagRuntime; }
namespace RPG::GameCore { class TaskContext; }

#define KLHONDCNGCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB521970)
#define KLHONDCNGCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5219A0)

inline static constexpr unsigned int KLHONDCNGCF_TypeDefinitionIndex = 53024;

	class KLHONDCNGCF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime*))((::PBYTE)hIl2Cpp + KLHONDCNGCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHONDCNGCF_ONTASKBEGIN_OFFSET))(this);
		}

	};
