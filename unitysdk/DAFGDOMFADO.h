#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByInTrackCamera; }
namespace RPG::GameCore { class TaskContext; }

#define DAFGDOMFADO_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC1C20)
#define DAFGDOMFADO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFC1C50)

	class DAFGDOMFADO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + DAFGDOMFADO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFGDOMFADO_EVALUATE_OFFSET))(this);
		}

	};
