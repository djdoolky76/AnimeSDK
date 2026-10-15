#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JAFAJMDFAKK;
namespace RPG::GameCore { class TaskContext; }

#define EPBAEGIBMFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155CE0B0)
#define EPBAEGIBMFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155CE0C0)
#define EPBAEGIBMFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CE190)
#define EPBAEGIBMFJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155CE140)
#define EPBAEGIBMFJ_TICK_OFFSET UNITYSDK_OFFSET(0x155CE240)

	class EPBAEGIBMFJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::JAFAJMDFAKK* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JAFAJMDFAKK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JAFAJMDFAKK*))((::PBYTE)hIl2Cpp + EPBAEGIBMFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBAEGIBMFJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBAEGIBMFJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBAEGIBMFJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPBAEGIBMFJ_TICK_OFFSET))(this, a1);
		}

	};
