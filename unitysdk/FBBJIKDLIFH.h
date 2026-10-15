#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverridePerformanceEndCrack; }
namespace RPG::GameCore { class TaskContext; }

#define FBBJIKDLIFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15695390)
#define FBBJIKDLIFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156953C0)

	class FBBJIKDLIFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverridePerformanceEndCrack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverridePerformanceEndCrack*))((::PBYTE)hIl2Cpp + FBBJIKDLIFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBJIKDLIFH_ONTASKBEGIN_OFFSET))(this);
		}

	};
