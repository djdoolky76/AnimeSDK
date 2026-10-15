#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectList; }

#define BBFMBHHONDO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E86FF0)
#define BBFMBHHONDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E87000)
#define BBFMBHHONDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E87040)
#define BBFMBHHONDO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E87760)
#define BBFMBHHONDO_TICK_OFFSET UNITYSDK_OFFSET(0x15E877B0)

	class BBFMBHHONDO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerEffectList* OFKGLJOAMLD; // 0x20
		::System::Boolean LEIGKHEMCGE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + BBFMBHHONDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFMBHHONDO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFMBHHONDO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFMBHHONDO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBFMBHHONDO_TICK_OFFSET))(this, a1);
		}

	};
