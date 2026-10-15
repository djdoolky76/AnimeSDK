#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetListIntersects; }
namespace RPG::GameCore { class TaskContext; }

#define GNMDFDAEPND_CTOR_OFFSET UNITYSDK_OFFSET(0x15B198A0)
#define GNMDFDAEPND_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B198D0)

	class GNMDFDAEPND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + GNMDFDAEPND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMDFDAEPND_EVALUATE_OFFSET))(this);
		}

	};
