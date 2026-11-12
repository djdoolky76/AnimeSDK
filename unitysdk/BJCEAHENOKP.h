#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CaptureCurrentInteractDialogueEntity; }
namespace RPG::GameCore { class TaskContext; }

#define BJCEAHENOKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE59CE0)
#define BJCEAHENOKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE59CF0)
#define BJCEAHENOKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE59DA0)
#define BJCEAHENOKP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE5A060)
#define BJCEAHENOKP_TICK_OFFSET UNITYSDK_OFFSET(0xBE59D40)

inline static constexpr unsigned int BJCEAHENOKP_TypeDefinitionIndex = 53739;

	class BJCEAHENOKP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CaptureCurrentInteractDialogueEntity* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity*))((::PBYTE)hIl2Cpp + BJCEAHENOKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCEAHENOKP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJCEAHENOKP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCEAHENOKP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCEAHENOKP_ONTASKRESET_OFFSET))(this);
		}

	};
