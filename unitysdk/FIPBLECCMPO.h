#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvTrackNpcLockAlert; }
namespace RPG::GameCore { class TaskContext; }

#define FIPBLECCMPO_CTOR_OFFSET UNITYSDK_OFFSET(0x157A59F0)
#define FIPBLECCMPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157A5A20)

inline static constexpr unsigned int FIPBLECCMPO_TypeDefinitionIndex = 52512;

	class FIPBLECCMPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTrackNpcLockAlert* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTrackNpcLockAlert*))((::PBYTE)hIl2Cpp + FIPBLECCMPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPBLECCMPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
