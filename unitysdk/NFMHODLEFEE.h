#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetEntityActionState; }
namespace RPG::GameCore { class TaskContext; }

#define NFMHODLEFEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9B520)
#define NFMHODLEFEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB9B530)
#define NFMHODLEFEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB9B570)
#define NFMHODLEFEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB9B860)
#define NFMHODLEFEE_TICK_OFFSET UNITYSDK_OFFSET(0xBB9B8B0)

	class NFMHODLEFEE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetEntityActionState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityActionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityActionState*))((::PBYTE)hIl2Cpp + NFMHODLEFEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHODLEFEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHODLEFEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHODLEFEE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFMHODLEFEE_TICK_OFFSET))(this, a1);
		}

	};
