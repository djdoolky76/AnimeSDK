#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ConstructBodyPart; }
namespace RPG::GameCore { class TaskContext; }

#define CCKGGJLBADC_CTOR_OFFSET UNITYSDK_OFFSET(0xC74BE60)
#define CCKGGJLBADC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC74BE90)

	class CCKGGJLBADC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConstructBodyPart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConstructBodyPart*))((::PBYTE)hIl2Cpp + CCKGGJLBADC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKGGJLBADC_ONTASKBEGIN_OFFSET))(this);
		}

	};
