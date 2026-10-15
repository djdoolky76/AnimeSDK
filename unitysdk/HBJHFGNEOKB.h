#pragma once
#include "unitysdk/unitysdk.h"
class FCGFCPOLLKL;
namespace RPG::GameCore { class TaskContext; }

#define HBJHFGNEOKB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C0F470)
#define HBJHFGNEOKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C0F4A0)

	class HBJHFGNEOKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FCGFCPOLLKL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FCGFCPOLLKL*))((::PBYTE)hIl2Cpp + HBJHFGNEOKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJHFGNEOKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
