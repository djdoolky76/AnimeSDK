#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define POKNCAMNNHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC36ECC0)
#define POKNCAMNNHB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC36ECF0)

	class POKNCAMNNHB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStanceCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStanceCount*))((::PBYTE)hIl2Cpp + POKNCAMNNHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKNCAMNNHB_ONTASKBEGIN_OFFSET))(this);
		}

	};
