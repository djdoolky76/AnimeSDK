#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HPICNGFLLCA;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAbilityStartTimeStamp; }

#define MCGGBFNOPEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B841670)
#define MCGGBFNOPEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B841690)
#define MCGGBFNOPEC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1B841A10)
#define MCGGBFNOPEC_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1B841730)
#define MCGGBFNOPEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B841780)
#define MCGGBFNOPEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B8416E0)
#define MCGGBFNOPEC_TICK_OFFSET UNITYSDK_OFFSET(0x1B841990)

inline static constexpr unsigned int MCGGBFNOPEC_TypeDefinitionIndex = 60119;

	class MCGGBFNOPEC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitAbilityStartTimeStamp* OFKGLJOAMLD; // 0x18
		::HPICNGFLLCA* AGPOABLMPIC; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
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
