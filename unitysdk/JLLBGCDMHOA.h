#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomStringList; }

#define JLLBGCDMHOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB2494D0)
#define JLLBGCDMHOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB249500)

inline static constexpr unsigned int JLLBGCDMHOA_TypeDefinitionIndex = 58774;

	class JLLBGCDMHOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomStringList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomStringList*))((::PBYTE)hIl2Cpp + JLLBGCDMHOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBGCDMHOA_ONTASKBEGIN_OFFSET))(this);
		}

	};
