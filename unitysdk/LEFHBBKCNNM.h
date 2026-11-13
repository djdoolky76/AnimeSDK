#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEntityForbidCameraDither; }
namespace RPG::GameCore { class TaskContext; }

#define LEFHBBKCNNM_CTOR_OFFSET UNITYSDK_OFFSET(0x18C2F540)
#define LEFHBBKCNNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C2F570)

inline static constexpr unsigned int LEFHBBKCNNM_TypeDefinitionIndex = 57627;

	class LEFHBBKCNNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityForbidCameraDither* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityForbidCameraDither*))((::PBYTE)hIl2Cpp + LEFHBBKCNNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFHBBKCNNM_ONTASKBEGIN_OFFSET))(this);
		}

	};
