#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetLoopHitFeatureParam; }
namespace RPG::GameCore { class TaskContext; }

#define LMPMGFCHINO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D41F0)
#define LMPMGFCHINO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7D4220)

	class LMPMGFCHINO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetLoopHitFeatureParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetLoopHitFeatureParam*))((::PBYTE)hIl2Cpp + LMPMGFCHINO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPMGFCHINO_ONTASKBEGIN_OFFSET))(this);
		}

	};
