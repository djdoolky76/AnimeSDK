#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterStopFreeStyle; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class TaskContext; }

#define OCPHIGCAHIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD6E2B0)
#define OCPHIGCAHIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD6E2C0)
#define OCPHIGCAHIL_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBD6E310)
#define OCPHIGCAHIL_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBD6E940)
#define OCPHIGCAHIL_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBD6E720)
#define OCPHIGCAHIL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD6E370)
#define OCPHIGCAHIL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD6E320)
#define OCPHIGCAHIL_TICK_OFFSET UNITYSDK_OFFSET(0xBD6E6A0)

inline static constexpr unsigned int OCPHIGCAHIL_TypeDefinitionIndex = 58009;

	class OCPHIGCAHIL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* LANHALCJKIM; // 0x18
		::RPG::GameCore::CharacterStopFreeStyle* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::FreeStyleComponent* KADINPKIGIB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterStopFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterStopFreeStyle*))((::PBYTE)hIl2Cpp + OCPHIGCAHIL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHIGCAHIL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHIGCAHIL_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHIGCAHIL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHIGCAHIL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCPHIGCAHIL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHIGCAHIL_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCPHIGCAHIL_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
