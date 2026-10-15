#pragma once
#include "unitysdk/unitysdk.h"
class PLMHECGLFFM;
namespace RPG::GameCore { class TaskContext; }

#define DENBCMJAHNM_CTOR_OFFSET UNITYSDK_OFFSET(0xE51C030)
#define DENBCMJAHNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE51C060)

	class DENBCMJAHNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PLMHECGLFFM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PLMHECGLFFM*))((::PBYTE)hIl2Cpp + DENBCMJAHNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENBCMJAHNM_ONTASKBEGIN_OFFSET))(this);
		}

	};
