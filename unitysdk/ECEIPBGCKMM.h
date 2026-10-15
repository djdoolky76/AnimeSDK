#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnterFloor; }
namespace RPG::GameCore { class TaskContext; }

#define ECEIPBGCKMM_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0AEB0)
#define ECEIPBGCKMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D0AEC0)
#define ECEIPBGCKMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D0AF00)
#define ECEIPBGCKMM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12D0B0E0)
#define ECEIPBGCKMM_TICK_OFFSET UNITYSDK_OFFSET(0x12D0B130)

	class ECEIPBGCKMM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::EnterFloor* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterFloor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterFloor*))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_TICK_OFFSET))(this, a1);
		}

	};
