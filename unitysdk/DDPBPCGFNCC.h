#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtUnstackInvisible; }
namespace RPG::GameCore { class TaskContext; }

#define DDPBPCGFNCC_CTOR_OFFSET UNITYSDK_OFFSET(0xE4F1040)
#define DDPBPCGFNCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4F1070)

	class DDPBPCGFNCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtUnstackInvisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtUnstackInvisible*))((::PBYTE)hIl2Cpp + DDPBPCGFNCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPBPCGFNCC_ONTASKBEGIN_OFFSET))(this);
		}

	};
