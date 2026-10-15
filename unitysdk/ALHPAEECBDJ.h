#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RadialBlurEffect; }
namespace RPG::GameCore { class TaskContext; }

#define ALHPAEECBDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1556CD70)
#define ALHPAEECBDJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1556CD80)
#define ALHPAEECBDJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1556CDC0)
#define ALHPAEECBDJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1556D260)
#define ALHPAEECBDJ_TICK_OFFSET UNITYSDK_OFFSET(0x1556D2B0)

	class ALHPAEECBDJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RadialBlurEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RadialBlurEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RadialBlurEffect*))((::PBYTE)hIl2Cpp + ALHPAEECBDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHPAEECBDJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHPAEECBDJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHPAEECBDJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALHPAEECBDJ_TICK_OFFSET))(this, a1);
		}

	};
