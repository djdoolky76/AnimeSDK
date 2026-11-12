#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddTimelineEntity; }
namespace RPG::GameCore { class TaskContext; }

#define KLPCNNPGFJL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD815C0)
#define KLPCNNPGFJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD815F0)

inline static constexpr unsigned int KLPCNNPGFJL_TypeDefinitionIndex = 54523;

	class KLPCNNPGFJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimelineEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimelineEntity*))((::PBYTE)hIl2Cpp + KLPCNNPGFJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPCNNPGFJL_ONTASKBEGIN_OFFSET))(this);
		}

	};
