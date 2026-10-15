#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropMove; }
namespace RPG::GameCore { class TaskContext; }

#define JMLHEFHGGLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB270480)
#define JMLHEFHGGLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2704B0)

	class JMLHEFHGGLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropMove*))((::PBYTE)hIl2Cpp + JMLHEFHGGLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLHEFHGGLK_ONTASKBEGIN_OFFSET))(this);
		}

	};
