#pragma once
#include "unitysdk/unitysdk.h"
class GNJOOFCEGAG;
namespace RPG::GameCore { class TaskContext; }

#define LHCCENLOJDL_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A0EE0)
#define LHCCENLOJDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6A0F10)

inline static constexpr unsigned int LHCCENLOJDL_TypeDefinitionIndex = 55399;

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
