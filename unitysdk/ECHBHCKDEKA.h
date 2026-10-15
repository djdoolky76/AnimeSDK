#pragma once
#include "unitysdk/unitysdk.h"
class PGFAJJBCMDK;
namespace RPG::GameCore { class TaskContext; }

#define ECHBHCKDEKA_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0D5E0)
#define ECHBHCKDEKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D0D610)

	class ECHBHCKDEKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PGFAJJBCMDK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PGFAJJBCMDK*))((::PBYTE)hIl2Cpp + ECHBHCKDEKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHBHCKDEKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
