#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ElfRefreshData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KPPGMIFCMIC_ADLKIFHMIDE_OFFSET UNITYSDK_OFFSET(0xB5D4D00)
#define KPPGMIFCMIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D4A70)
#define KPPGMIFCMIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5D4C20)
#define KPPGMIFCMIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5D4B10)
#define KPPGMIFCMIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5D4A80)
#define KPPGMIFCMIC_TICK_OFFSET UNITYSDK_OFFSET(0xB5D4CA0)

	class KPPGMIFCMIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ElfRefreshData* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfRefreshData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfRefreshData*))((::PBYTE)hIl2Cpp + KPPGMIFCMIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPGMIFCMIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPGMIFCMIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPGMIFCMIC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPPGMIFCMIC_TICK_OFFSET))(this, a1);
		}

		::System::Void ADLKIFHMIDE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPPGMIFCMIC_ADLKIFHMIDE_OFFSET))(this, a1);
		}

	};
