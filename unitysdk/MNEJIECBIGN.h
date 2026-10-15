#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByDistToGuardPosition; }
namespace RPG::GameCore { class TaskContext; }

#define MNEJIECBIGN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA06F40)
#define MNEJIECBIGN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA07060)

	class MNEJIECBIGN
	{
	public:
		::System::Single NDOGICGCDIP; // 0x28
		::System::Single BFLNNOEKIGE; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + MNEJIECBIGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEJIECBIGN_EVALUATE_OFFSET))(this);
		}

	};
