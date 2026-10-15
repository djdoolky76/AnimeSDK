#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HPICNGFLLCA;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAbilityStartTimeStamp; }

#define MCGGBFNOPEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB87AA90)
#define MCGGBFNOPEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB87AAB0)
#define MCGGBFNOPEC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB87AE30)
#define MCGGBFNOPEC_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB87AB50)
#define MCGGBFNOPEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB87ABA0)
#define MCGGBFNOPEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB87AB00)
#define MCGGBFNOPEC_TICK_OFFSET UNITYSDK_OFFSET(0xB87ADB0)

	class MCGGBFNOPEC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::HPICNGFLLCA* AGPOABLMPIC; // 0x20
		::RPG::GameCore::WaitAbilityStartTimeStamp* OFKGLJOAMLD; // 0x28
		::System::Single DKOFFPPGEFI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + MCGGBFNOPEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGGBFNOPEC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGGBFNOPEC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGGBFNOPEC_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGGBFNOPEC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCGGBFNOPEC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGGBFNOPEC_GET_FORCESKIP_OFFSET))(this);
		}

	};
