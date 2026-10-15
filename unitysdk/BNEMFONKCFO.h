#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeactiveFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define BNEMFONKCFO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDCAA20)
#define BNEMFONKCFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDCAA50)

	class BNEMFONKCFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeactiveFarmElement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeactiveFarmElement*))((::PBYTE)hIl2Cpp + BNEMFONKCFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEMFONKCFO_ONTASKBEGIN_OFFSET))(this);
		}

	};
