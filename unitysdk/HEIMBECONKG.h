#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowCurrentMapPage; }
namespace RPG::GameCore { class TaskContext; }

#define HEIMBECONKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C52B70)
#define HEIMBECONKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C52B80)
#define HEIMBECONKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C52C20)
#define HEIMBECONKG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C52C90)
#define HEIMBECONKG_TICK_OFFSET UNITYSDK_OFFSET(0x15C52BC0)

	class HEIMBECONKG : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowCurrentMapPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowCurrentMapPage*))((::PBYTE)hIl2Cpp + HEIMBECONKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBECONKG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEIMBECONKG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBECONKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBECONKG_ONTASKRESET_OFFSET))(this);
		}

	};
