#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchStoryLine; }
namespace RPG::GameCore { class TaskContext; }

#define LIBIHOGGGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C23C0)
#define LIBIHOGGGIJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6C23D0)
#define LIBIHOGGGIJ_NHEOLMJCHCJ_OFFSET UNITYSDK_OFFSET(0xB6C25E0)
#define LIBIHOGGGIJ_ONNCFBCKLOG_OFFSET UNITYSDK_OFFSET(0xB6C27C0)
#define LIBIHOGGGIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6C2410)
#define LIBIHOGGGIJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6C2710)
#define LIBIHOGGGIJ_TICK_OFFSET UNITYSDK_OFFSET(0xB6C2760)

	class LIBIHOGGGIJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SwitchStoryLine* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchStoryLine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchStoryLine*))((::PBYTE)hIl2Cpp + LIBIHOGGGIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBIHOGGGIJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBIHOGGGIJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBIHOGGGIJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIBIHOGGGIJ_TICK_OFFSET))(this, a1);
		}

		::System::Boolean NHEOLMJCHCJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIBIHOGGGIJ_NHEOLMJCHCJ_OFFSET))(this, a1);
		}

		::System::Void ONNCFBCKLOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBIHOGGGIJ_ONNCFBCKLOG_OFFSET))(this);
		}

	};
