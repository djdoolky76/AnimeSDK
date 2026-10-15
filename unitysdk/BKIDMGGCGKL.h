#pragma once
#include "unitysdk/unitysdk.h"
class NGLKHNKNBDC;
namespace RPG::GameCore { class TaskContext; }

#define BKIDMGGCGKL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA58370)
#define BKIDMGGCGKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA583A0)

	class BKIDMGGCGKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NGLKHNKNBDC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NGLKHNKNBDC*))((::PBYTE)hIl2Cpp + BKIDMGGCGKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIDMGGCGKL_ONTASKBEGIN_OFFSET))(this);
		}

	};
