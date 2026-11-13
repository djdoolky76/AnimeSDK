#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetIgnoreTimeRewindLockRangeLimit; }
namespace RPG::GameCore { class TaskContext; }

#define KCKCGKBEPOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A487550)
#define KCKCGKBEPOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A487580)

inline static constexpr unsigned int KCKCGKBEPOC_TypeDefinitionIndex = 54551;

	class KCKCGKBEPOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*))((::PBYTE)hIl2Cpp + KCKCGKBEPOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCGKBEPOC_ONTASKBEGIN_OFFSET))(this);
		}

	};
