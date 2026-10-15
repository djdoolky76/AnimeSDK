#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MonoClockParkStoryCharacter; }
namespace RPG::GameCore { class ClockParkStoryCharacterTriggerAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define HEPKLBCNDOO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C57A70)
#define HEPKLBCNDOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C57A80)
#define HEPKLBCNDOO_DNCFBGANPCD_OFFSET UNITYSDK_OFFSET(0x15C57EF0)
#define HEPKLBCNDOO_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15C57AD0)
#define HEPKLBCNDOO_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15C57AE0)
#define HEPKLBCNDOO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C58000)
#define HEPKLBCNDOO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C581D0)
#define HEPKLBCNDOO_TICK_OFFSET UNITYSDK_OFFSET(0x15C57C30)

inline static constexpr unsigned int HEPKLBCNDOO_TypeDefinitionIndex = 52689;

	class HEPKLBCNDOO : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::MonoClockParkStoryCharacter* PFECGMGNMEN; // 0x18
		::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + HEPKLBCNDOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKLBCNDOO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKLBCNDOO_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKLBCNDOO_ONSKIP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEPKLBCNDOO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKLBCNDOO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKLBCNDOO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DNCFBGANPCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKLBCNDOO_DNCFBGANPCD_OFFSET))(this);
		}

	};
