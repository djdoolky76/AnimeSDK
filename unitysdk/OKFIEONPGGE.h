#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockTargetActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define OKFIEONPGGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBED7EC0)
#define OKFIEONPGGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBED7EF0)

inline static constexpr unsigned int OKFIEONPGGE_TypeDefinitionIndex = 55151;

	class OKFIEONPGGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockTargetActionDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockTargetActionDelay*))((::PBYTE)hIl2Cpp + OKFIEONPGGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFIEONPGGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
