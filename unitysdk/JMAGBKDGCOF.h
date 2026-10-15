#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ResetTargetListIndex; }
namespace RPG::GameCore { class TaskContext; }

#define JMAGBKDGCOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB25A3D0)
#define JMAGBKDGCOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB25A3E0)
#define JMAGBKDGCOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB25A420)
#define JMAGBKDGCOF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB25A690)
#define JMAGBKDGCOF_TICK_OFFSET UNITYSDK_OFFSET(0xB25A6E0)

inline static constexpr unsigned int JMAGBKDGCOF_TypeDefinitionIndex = 55320;

	class JMAGBKDGCOF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ResetTargetListIndex* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTargetListIndex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTargetListIndex*))((::PBYTE)hIl2Cpp + JMAGBKDGCOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAGBKDGCOF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAGBKDGCOF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAGBKDGCOF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMAGBKDGCOF_TICK_OFFSET))(this, a1);
		}

	};
