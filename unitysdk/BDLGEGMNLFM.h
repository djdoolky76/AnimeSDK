#pragma once
#include "unitysdk/unitysdk.h"
class LBMLBLLLMGG;
namespace RPG::GameCore { class TaskContext; }

#define BDLGEGMNLFM_CTOR_OFFSET UNITYSDK_OFFSET(0x162FDE80)
#define BDLGEGMNLFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162FDEB0)

	class BDLGEGMNLFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LBMLBLLLMGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LBMLBLLLMGG*))((::PBYTE)hIl2Cpp + BDLGEGMNLFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLGEGMNLFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
