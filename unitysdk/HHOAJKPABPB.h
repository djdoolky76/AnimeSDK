#pragma once
#include "unitysdk/unitysdk.h"
class HBCJLHBBDAB;
namespace RPG::GameCore { class TaskContext; }

#define HHOAJKPABPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4CC0)
#define HHOAJKPABPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD4CF0)

	class HHOAJKPABPB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HBCJLHBBDAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HBCJLHBBDAB*))((::PBYTE)hIl2Cpp + HHOAJKPABPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOAJKPABPB_ONTASKBEGIN_OFFSET))(this);
		}

	};
