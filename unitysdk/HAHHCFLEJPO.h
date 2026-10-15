#pragma once
#include "unitysdk/unitysdk.h"
class IJDCGKEPOGJ;
namespace RPG::GameCore { class TaskContext; }

#define HAHHCFLEJPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B78390)
#define HAHHCFLEJPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B783C0)

	class HAHHCFLEJPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IJDCGKEPOGJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IJDCGKEPOGJ*))((::PBYTE)hIl2Cpp + HAHHCFLEJPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHHCFLEJPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
