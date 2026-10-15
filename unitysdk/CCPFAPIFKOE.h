#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RevertActionEntityToObserveState; }
namespace RPG::GameCore { class TaskContext; }

#define CCPFAPIFKOE_CTOR_OFFSET UNITYSDK_OFFSET(0xC753C50)
#define CCPFAPIFKOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC753F60)
#define CCPFAPIFKOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC753C60)
#define CCPFAPIFKOE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC753F10)
#define CCPFAPIFKOE_TICK_OFFSET UNITYSDK_OFFSET(0xC753EB0)

	class CCPFAPIFKOE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RevertActionEntityToObserveState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RevertActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RevertActionEntityToObserveState*))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_DISPOSE_OFFSET))(this);
		}

	};
