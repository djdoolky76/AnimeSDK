#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicRhythmSongChangeEvent; }
namespace System { class Object; }

#define MFDCACCBBHI_CFPAMJDJDMC_OFFSET UNITYSDK_OFFSET(0xB8EEED0)
#define MFDCACCBBHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB8EEBE0)
#define MFDCACCBBHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8EED80)
#define MFDCACCBBHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8EEC70)
#define MFDCACCBBHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8EED30)
#define MFDCACCBBHI_TICK_OFFSET UNITYSDK_OFFSET(0xB8EEFC0)

	class MFDCACCBBHI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitMusicRhythmSongChangeEvent* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* ILEMLGEGLCC; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Boolean BHEIANKOOPN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent*))((::PBYTE)hIl2Cpp + MFDCACCBBHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCACCBBHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCACCBBHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCACCBBHI_DISPOSE_OFFSET))(this);
		}

		::System::Void CFPAMJDJDMC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDCACCBBHI_CFPAMJDJDMC_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFDCACCBBHI_TICK_OFFSET))(this, a1);
		}

	};
