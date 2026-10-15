#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CloseRubbingUI; }
namespace RPG::GameCore { class TaskContext; }

#define AMLMPBJMAMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15585140)
#define AMLMPBJMAMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15585170)

	class AMLMPBJMAMD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseRubbingUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseRubbingUI*))((::PBYTE)hIl2Cpp + AMLMPBJMAMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLMPBJMAMD_ONTASKBEGIN_OFFSET))(this);
		}

	};
