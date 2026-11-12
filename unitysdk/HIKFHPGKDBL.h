#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveTimelineEntity; }
namespace RPG::GameCore { class TaskContext; }

#define HIKFHPGKDBL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C3F0A0)
#define HIKFHPGKDBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C3F0D0)

inline static constexpr unsigned int HIKFHPGKDBL_TypeDefinitionIndex = 54548;

	class HIKFHPGKDBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveTimelineEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveTimelineEntity*))((::PBYTE)hIl2Cpp + HIKFHPGKDBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKFHPGKDBL_ONTASKBEGIN_OFFSET))(this);
		}

	};
