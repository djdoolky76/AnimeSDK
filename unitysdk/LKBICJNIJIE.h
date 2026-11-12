#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEnableOwnerIdleShow; }
namespace RPG::GameCore { class TaskContext; }

#define LKBICJNIJIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC5840)
#define LKBICJNIJIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFC5870)

inline static constexpr unsigned int LKBICJNIJIE_TypeDefinitionIndex = 53460;

	class LKBICJNIJIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableOwnerIdleShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableOwnerIdleShow*))((::PBYTE)hIl2Cpp + LKBICJNIJIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBICJNIJIE_ONTASKBEGIN_OFFSET))(this);
		}

	};
