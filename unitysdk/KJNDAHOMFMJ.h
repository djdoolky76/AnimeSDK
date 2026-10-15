#pragma once
#include "unitysdk/unitysdk.h"
class CNLIMBPHJNP;
namespace RPG::GameCore { class TaskContext; }

#define KJNDAHOMFMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB45DDA0)
#define KJNDAHOMFMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB45DDD0)

	class KJNDAHOMFMJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CNLIMBPHJNP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CNLIMBPHJNP*))((::PBYTE)hIl2Cpp + KJNDAHOMFMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNDAHOMFMJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
