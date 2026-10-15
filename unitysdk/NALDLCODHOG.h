#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEntityEvent; }

#define NALDLCODHOG_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA38F0)
#define NALDLCODHOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAA3920)

inline static constexpr unsigned int NALDLCODHOG_TypeDefinitionIndex = 52523;

	class NALDLCODHOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEntityEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEntityEvent*))((::PBYTE)hIl2Cpp + NALDLCODHOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALDLCODHOG_ONTASKBEGIN_OFFSET))(this);
		}

	};
