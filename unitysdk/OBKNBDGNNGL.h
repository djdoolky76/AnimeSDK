#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTargetUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define OBKNBDGNNGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD4BB10)
#define OBKNBDGNNGL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBD4BB40)

	class OBKNBDGNNGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + OBKNBDGNNGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNBDGNNGL_EVALUATE_OFFSET))(this);
		}

	};
