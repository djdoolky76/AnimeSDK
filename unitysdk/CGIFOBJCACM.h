#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomPhotoGraphCondition; }

#define CGIFOBJCACM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC847E0)
#define CGIFOBJCACM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC84810)

inline static constexpr unsigned int CGIFOBJCACM_TypeDefinitionIndex = 53445;

	class CGIFOBJCACM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomPhotoGraphCondition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomPhotoGraphCondition*))((::PBYTE)hIl2Cpp + CGIFOBJCACM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIFOBJCACM_ONTASKBEGIN_OFFSET))(this);
		}

	};
