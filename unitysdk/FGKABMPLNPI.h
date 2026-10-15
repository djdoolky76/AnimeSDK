#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SyncCharLightAndCameraDir; }
namespace RPG::GameCore { class TaskContext; }

#define FGKABMPLNPI_CTOR_OFFSET UNITYSDK_OFFSET(0x15766490)
#define FGKABMPLNPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157664A0)
#define FGKABMPLNPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157664E0)
#define FGKABMPLNPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15766820)
#define FGKABMPLNPI_TICK_OFFSET UNITYSDK_OFFSET(0x15766870)

	class FGKABMPLNPI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SyncCharLightAndCameraDir* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncCharLightAndCameraDir* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncCharLightAndCameraDir*))((::PBYTE)hIl2Cpp + FGKABMPLNPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKABMPLNPI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKABMPLNPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKABMPLNPI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGKABMPLNPI_TICK_OFFSET))(this, a1);
		}

	};
