#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockEntityTransform; }
namespace RPG::GameCore { class TaskContext; }

#define PMLFHDCALAA_CTOR_OFFSET UNITYSDK_OFFSET(0xC31C380)
#define PMLFHDCALAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC31C3B0)

inline static constexpr unsigned int PMLFHDCALAA_TypeDefinitionIndex = 58203;

	class PMLFHDCALAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockEntityTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockEntityTransform*))((::PBYTE)hIl2Cpp + PMLFHDCALAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLFHDCALAA_ONTASKBEGIN_OFFSET))(this);
		}

	};
