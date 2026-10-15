#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EBBBJDPGDFG;
class NKFEBJLCANI;
namespace RPG::GameCore { class TaskContext; }

#define PAFMKHANCCF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC87D0)
#define PAFMKHANCCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFC87E0)
#define PAFMKHANCCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFC8880)
#define PAFMKHANCCF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFC8830)
#define PAFMKHANCCF_TICK_OFFSET UNITYSDK_OFFSET(0xBFC89A0)

	class PAFMKHANCCF : public ::GELIALJDFBL
	{
	public:
		::NKFEBJLCANI* OFKGLJOAMLD; // 0x18
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::FixPoint KBDPMBDJIOF; // 0x30
		::RPG::GameCore::FixPoint DKOFFPPGEFI; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NKFEBJLCANI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NKFEBJLCANI*))((::PBYTE)hIl2Cpp + PAFMKHANCCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFMKHANCCF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFMKHANCCF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFMKHANCCF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAFMKHANCCF_TICK_OFFSET))(this, a1);
		}

	};
