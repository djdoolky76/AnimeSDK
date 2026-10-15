#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SO_TriggerCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define JDIACABHPME_CTOR_OFFSET UNITYSDK_OFFSET(0x165BD180)
#define JDIACABHPME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165BD1D0)
#define JDIACABHPME_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165BD3B0)

inline static constexpr unsigned int JDIACABHPME_TypeDefinitionIndex = 52125;

	class JDIACABHPME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_TriggerCustomString*))((::PBYTE)hIl2Cpp + JDIACABHPME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIACABHPME_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIACABHPME_ONTASKRESET_OFFSET))(this);
		}

	};
