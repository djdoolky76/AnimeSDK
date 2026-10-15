#pragma once
#include "unitysdk/unitysdk.h"
class DNPJDFABDCB;
namespace RPG::GameCore { class TaskContext; }

#define FGHGLKHBHOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15762B70)
#define FGHGLKHBHOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15762BA0)

	class FGHGLKHBHOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DNPJDFABDCB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DNPJDFABDCB*))((::PBYTE)hIl2Cpp + FGHGLKHBHOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHGLKHBHOH_ONTASKBEGIN_OFFSET))(this);
		}

	};
