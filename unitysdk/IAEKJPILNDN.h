#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class QteCatchGhostRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define IAEKJPILNDN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E02840)
#define IAEKJPILNDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E02E50)
#define IAEKJPILNDN_MNBCEAPBHCE_OFFSET UNITYSDK_OFFSET(0x15E032C0)
#define IAEKJPILNDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E02AF0)
#define IAEKJPILNDN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E02E00)
#define IAEKJPILNDN_TICK_OFFSET UNITYSDK_OFFSET(0x15E038B0)

	class IAEKJPILNDN : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HDPCLBHCDIF; // 0x18
		::KFELGAIGHAP* BJHAAFHJOKH; // 0x20
		::KFELGAIGHAP* MALOFCFGGEF; // 0x28
		::KFELGAIGHAP* APCGOOFNNEO; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::KFELGAIGHAP* KKBPDJDFOEC; // 0x40
		::KFELGAIGHAP* DMKOLLPGHCF; // 0x48
		::RPG::GameCore::QteCatchGhostRewindListener* IGHAHBNLIJA; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QteCatchGhostRewindListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QteCatchGhostRewindListener*))((::PBYTE)hIl2Cpp + IAEKJPILNDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEKJPILNDN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEKJPILNDN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEKJPILNDN_DISPOSE_OFFSET))(this);
		}

		::System::Void MNBCEAPBHCE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + IAEKJPILNDN_MNBCEAPBHCE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAEKJPILNDN_TICK_OFFSET))(this, a1);
		}

	};
