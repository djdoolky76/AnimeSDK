#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BaseAdventureCameraLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define DCNGKJFOJEC_CTOR_OFFSET UNITYSDK_OFFSET(0xE2523E0)
#define DCNGKJFOJEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE252410)

inline static constexpr unsigned int DCNGKJFOJEC_TypeDefinitionIndex = 54873;

	class DCNGKJFOJEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BaseAdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BaseAdventureCameraLookAt*))((::PBYTE)hIl2Cpp + DCNGKJFOJEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGKJFOJEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
