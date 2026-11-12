#pragma once
#include "unitysdk/unitysdk.h"
class KDPMPGNABPF;
namespace RPG::GameCore { class TaskContext; }

#define GFBLIBKBHLM_CTOR_OFFSET UNITYSDK_OFFSET(0x169222E0)
#define GFBLIBKBHLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16922310)

inline static constexpr unsigned int GFBLIBKBHLM_TypeDefinitionIndex = 54133;

	class GFBLIBKBHLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KDPMPGNABPF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KDPMPGNABPF*))((::PBYTE)hIl2Cpp + GFBLIBKBHLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBLIBKBHLM_ONTASKBEGIN_OFFSET))(this);
		}

	};
