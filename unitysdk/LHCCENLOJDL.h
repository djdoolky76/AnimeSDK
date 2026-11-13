#pragma once
#include "unitysdk/unitysdk.h"
class GNJOOFCEGAG;
namespace RPG::GameCore { class TaskContext; }

#define LHCCENLOJDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB8BA0)
#define LHCCENLOJDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BCB8BD0)

inline static constexpr unsigned int LHCCENLOJDL_TypeDefinitionIndex = 56584;

	class LHCCENLOJDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GNJOOFCEGAG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GNJOOFCEGAG*))((::PBYTE)hIl2Cpp + LHCCENLOJDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCCENLOJDL_ONTASKBEGIN_OFFSET))(this);
		}

	};
