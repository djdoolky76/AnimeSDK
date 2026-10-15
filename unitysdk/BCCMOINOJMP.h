#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForWithDuration; }

#define BCCMOINOJMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA52C0)
#define BCCMOINOJMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EA5380)
#define BCCMOINOJMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EA5450)
#define BCCMOINOJMP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EA5550)
#define BCCMOINOJMP_TICK_OFFSET UNITYSDK_OFFSET(0x15EA55A0)

	class BCCMOINOJMP : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::WaitForWithDuration* OFKGLJOAMLD; // 0x28
		::System::Single EFKCJMFANEB; // 0x30
		::System::Single AMOPAIHIACL; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitForWithDuration* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitForWithDuration*))((::PBYTE)hIl2Cpp + BCCMOINOJMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCMOINOJMP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCMOINOJMP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCMOINOJMP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCCMOINOJMP_TICK_OFFSET))(this, a1);
		}

	};
