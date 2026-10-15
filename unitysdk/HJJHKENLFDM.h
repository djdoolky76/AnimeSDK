#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtStackProperty; }
namespace RPG::GameCore { class TaskContext; }

#define HJJHKENLFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D26420)
#define HJJHKENLFDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D26450)

inline static constexpr unsigned int HJJHKENLFDM_TypeDefinitionIndex = 53917;

	class HJJHKENLFDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStackProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStackProperty*))((::PBYTE)hIl2Cpp + HJJHKENLFDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJHKENLFDM_ONTASKBEGIN_OFFSET))(this);
		}

	};
