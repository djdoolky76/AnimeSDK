#pragma once
#include "unitysdk/unitysdk.h"
class GFJHLACJMNK;
namespace RPG::GameCore { class TaskContext; }

#define MPKLOFIMGGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA408B0)
#define MPKLOFIMGGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA408E0)

	class MPKLOFIMGGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GFJHLACJMNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GFJHLACJMNK*))((::PBYTE)hIl2Cpp + MPKLOFIMGGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKLOFIMGGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
