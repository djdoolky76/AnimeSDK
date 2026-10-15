#pragma once
#include "unitysdk/unitysdk.h"
class GJPIDDDMDDK;
namespace RPG::GameCore { class TaskContext; }

#define HOJKGEJECMI_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB8F70)
#define HOJKGEJECMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB8FA0)

	class HOJKGEJECMI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GJPIDDDMDDK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GJPIDDDMDDK*))((::PBYTE)hIl2Cpp + HOJKGEJECMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJKGEJECMI_ONTASKBEGIN_OFFSET))(this);
		}

	};
