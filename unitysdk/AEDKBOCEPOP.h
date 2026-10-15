#pragma once
#include "unitysdk/unitysdk.h"
class PCMMMJCEELO;
namespace RPG::GameCore { class TaskContext; }

#define AEDKBOCEPOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB14C6D0)
#define AEDKBOCEPOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB14C700)

inline static constexpr unsigned int AEDKBOCEPOP_TypeDefinitionIndex = 53215;

	class AEDKBOCEPOP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PCMMMJCEELO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PCMMMJCEELO*))((::PBYTE)hIl2Cpp + AEDKBOCEPOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDKBOCEPOP_ONTASKBEGIN_OFFSET))(this);
		}

	};
