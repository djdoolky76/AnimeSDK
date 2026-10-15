#pragma once
#include "unitysdk/unitysdk.h"
class GBNMAFLAHED;
namespace RPG::GameCore { class TaskContext; }

#define IBNBLBEGAMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E360B0)
#define IBNBLBEGAMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E360E0)

inline static constexpr unsigned int IBNBLBEGAMM_TypeDefinitionIndex = 53340;

	class IBNBLBEGAMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GBNMAFLAHED* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GBNMAFLAHED*))((::PBYTE)hIl2Cpp + IBNBLBEGAMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBLBEGAMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
