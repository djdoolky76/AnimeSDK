#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnDefineDynamicString; }

#define GMKFELEGLOG_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD4CC0)
#define GMKFELEGLOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AD4CD0)
#define GMKFELEGLOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AD4D10)
#define GMKFELEGLOG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AD4F20)
#define GMKFELEGLOG_TICK_OFFSET UNITYSDK_OFFSET(0x15AD4F70)

	class GMKFELEGLOG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::UnDefineDynamicString* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnDefineDynamicString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnDefineDynamicString*))((::PBYTE)hIl2Cpp + GMKFELEGLOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKFELEGLOG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKFELEGLOG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKFELEGLOG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMKFELEGLOG_TICK_OFFSET))(this, a1);
		}

	};
