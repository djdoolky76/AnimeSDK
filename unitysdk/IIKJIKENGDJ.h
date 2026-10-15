#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPlayerAddAttachment; }
namespace RPG::GameCore { class TaskContext; }

#define IIKJIKENGDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16440E30)
#define IIKJIKENGDJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16440E60)

	class IIKJIKENGDJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerAddAttachment* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerAddAttachment*))((::PBYTE)hIl2Cpp + IIKJIKENGDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKJIKENGDJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
