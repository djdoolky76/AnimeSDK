#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class OPJPJKJMPNI;
namespace RPG::GameCore { class StartMissionCameraTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define NNAIAIEACDG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9AA10)
#define NNAIAIEACDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC9B4F0)
#define NNAIAIEACDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC9B6D0)
#define NNAIAIEACDG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC9B590)
#define NNAIAIEACDG_TICK_OFFSET UNITYSDK_OFFSET(0xBC9B620)

	class NNAIAIEACDG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StartMissionCameraTemplate* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::OPJPJKJMPNI* PFJBJDCKGMG; // 0x28
		// static const ::System::String* DLKGKBHGLOP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartMissionCameraTemplate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMissionCameraTemplate*))((::PBYTE)hIl2Cpp + NNAIAIEACDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAIAIEACDG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNAIAIEACDG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAIAIEACDG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAIAIEACDG_ONTASKRESET_OFFSET))(this);
		}

	};
