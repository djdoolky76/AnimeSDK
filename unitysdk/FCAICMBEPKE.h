#pragma once
#include "unitysdk/unitysdk.h"
class LJCIMDNCABJ;
namespace RPG::GameCore { class TaskContext; }

#define FCAICMBEPKE_CTOR_OFFSET UNITYSDK_OFFSET(0x165C6620)
#define FCAICMBEPKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165C6650)

inline static constexpr unsigned int FCAICMBEPKE_TypeDefinitionIndex = 53974;

	class FCAICMBEPKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LJCIMDNCABJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LJCIMDNCABJ*))((::PBYTE)hIl2Cpp + FCAICMBEPKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAICMBEPKE_ONTASKBEGIN_OFFSET))(this);
		}

	};
