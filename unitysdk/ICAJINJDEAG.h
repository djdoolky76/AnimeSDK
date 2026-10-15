#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveEntityFromRelationGroup; }
namespace RPG::GameCore { class TaskContext; }

#define ICAJINJDEAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E48EE0)
#define ICAJINJDEAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E48F10)

	class ICAJINJDEAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveEntityFromRelationGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveEntityFromRelationGroup*))((::PBYTE)hIl2Cpp + ICAJINJDEAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICAJINJDEAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
