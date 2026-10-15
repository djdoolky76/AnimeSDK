#pragma once
#include "unitysdk/unitysdk.h"
class LLFEHBKEFDM;
namespace RPG::GameCore { class TaskContext; }

#define HMDCMABEADK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7A0F0)
#define HMDCMABEADK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D7A120)
#define HMDCMABEADK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D7A160)

	class HMDCMABEADK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LLFEHBKEFDM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LLFEHBKEFDM*))((::PBYTE)hIl2Cpp + HMDCMABEADK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDCMABEADK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDCMABEADK_ONTASKBEGIN_OFFSET))(this);
		}

	};
