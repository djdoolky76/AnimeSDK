#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClockParkStoryWaitPlayerClick; }
namespace RPG::GameCore { class TaskContext; }

#define CIIPLEDJLMO_CBNMKAGFAIG_OFFSET UNITYSDK_OFFSET(0xCF8BAE0)
#define CIIPLEDJLMO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8B6B0)
#define CIIPLEDJLMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF8B6C0)
#define CIIPLEDJLMO_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xCF8B700)
#define CIIPLEDJLMO_ONSKIP_OFFSET UNITYSDK_OFFSET(0xCF8B710)
#define CIIPLEDJLMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF8B870)
#define CIIPLEDJLMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF8B9D0)
#define CIIPLEDJLMO_TICK_OFFSET UNITYSDK_OFFSET(0xCF8B810)

	class CIIPLEDJLMO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ClockParkStoryWaitPlayerClick* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStoryWaitPlayerClick* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStoryWaitPlayerClick*))((::PBYTE)hIl2Cpp + CIIPLEDJLMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPLEDJLMO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPLEDJLMO_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPLEDJLMO_ONSKIP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIIPLEDJLMO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPLEDJLMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPLEDJLMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void CBNMKAGFAIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPLEDJLMO_CBNMKAGFAIG_OFFSET))(this);
		}

	};
