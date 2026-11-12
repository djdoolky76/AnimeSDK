#pragma once
#include "unitysdk/unitysdk.h"
class PMFOAOOBHAL;
namespace RPG::GameCore { class TaskContext; }

#define CDMHDHBHJND_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D7AB0)
#define CDMHDHBHJND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD0D7AE0)

inline static constexpr unsigned int CDMHDHBHJND_TypeDefinitionIndex = 60077;

	class CDMHDHBHJND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PMFOAOOBHAL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PMFOAOOBHAL*))((::PBYTE)hIl2Cpp + CDMHDHBHJND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMHDHBHJND_ONTASKBEGIN_OFFSET))(this);
		}

	};
