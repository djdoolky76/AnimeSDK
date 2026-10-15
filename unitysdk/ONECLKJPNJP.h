#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetHP; }
namespace RPG::GameCore { class TaskContext; }

#define ONECLKJPNJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4F600)
#define ONECLKJPNJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF4F610)
#define ONECLKJPNJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF4F650)
#define ONECLKJPNJP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF4FE30)
#define ONECLKJPNJP_TICK_OFFSET UNITYSDK_OFFSET(0xBF4FE80)

	class ONECLKJPNJP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetHP* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHP*))((::PBYTE)hIl2Cpp + ONECLKJPNJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECLKJPNJP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECLKJPNJP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECLKJPNJP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONECLKJPNJP_TICK_OFFSET))(this, a1);
		}

	};
