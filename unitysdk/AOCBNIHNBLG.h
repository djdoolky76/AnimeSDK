#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPLFJICIMNH.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialWaitCustomString; }

#define AOCBNIHNBLG_CTOR_OFFSET UNITYSDK_OFFSET(0x158A6700)

	class AOCBNIHNBLG : public ::MPLFJICIMNH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialWaitCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialWaitCustomString*))((::PBYTE)hIl2Cpp + AOCBNIHNBLG_CTOR_OFFSET))(this, a1, a2);
		}

	};
