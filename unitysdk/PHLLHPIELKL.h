#pragma once
#include "unitysdk/unitysdk.h"
class KHHLCOPIEBE;
namespace RPG::GameCore { class TaskContext; }

#define PHLLHPIELKL_CTOR_OFFSET UNITYSDK_OFFSET(0xC255560)
#define PHLLHPIELKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC255590)

	class PHLLHPIELKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KHHLCOPIEBE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KHHLCOPIEBE*))((::PBYTE)hIl2Cpp + PHLLHPIELKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLLHPIELKL_ONTASKBEGIN_OFFSET))(this);
		}

	};
