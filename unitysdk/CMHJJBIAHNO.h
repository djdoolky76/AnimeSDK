#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_Hipplen_Unlock_Trait; }
namespace RPG::GameCore { class TaskContext; }

#define CMHJJBIAHNO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA35440)
#define CMHJJBIAHNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA35590)
#define CMHJJBIAHNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA35470)
#define CMHJJBIAHNO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA35540)
#define CMHJJBIAHNO_TICK_OFFSET UNITYSDK_OFFSET(0xDA354E0)

	class CMHJJBIAHNO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*))((::PBYTE)hIl2Cpp + CMHJJBIAHNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJJBIAHNO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMHJJBIAHNO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJJBIAHNO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJJBIAHNO_DISPOSE_OFFSET))(this);
		}

	};
