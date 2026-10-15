#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveTimelineEntity; }
namespace RPG::GameCore { class TaskContext; }

#define HIKFHPGKDBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE33B0)
#define HIKFHPGKDBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CE33E0)

inline static constexpr unsigned int HIKFHPGKDBL_TypeDefinitionIndex = 53386;

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
