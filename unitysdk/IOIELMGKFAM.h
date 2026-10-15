#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ConvinceHpChange; }
namespace RPG::GameCore { class TaskContext; }

#define IOIELMGKFAM_CTOR_OFFSET UNITYSDK_OFFSET(0x16502EB0)
#define IOIELMGKFAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16502EE0)

	class IOIELMGKFAM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceHpChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceHpChange*))((::PBYTE)hIl2Cpp + IOIELMGKFAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIELMGKFAM_ONTASKBEGIN_OFFSET))(this);
		}

	};
