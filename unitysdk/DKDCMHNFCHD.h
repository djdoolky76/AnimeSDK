#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitChimeraWorkRoundFinish; }
namespace System { class Object; }

#define DKDCMHNFCHD_CTOR_OFFSET UNITYSDK_OFFSET(0xF2523C0)
#define DKDCMHNFCHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2523D0)
#define DKDCMHNFCHD_NGHLLPKBNOA_OFFSET UNITYSDK_OFFSET(0xF2525F0)
#define DKDCMHNFCHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF252450)
#define DKDCMHNFCHD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF252510)
#define DKDCMHNFCHD_TICK_OFFSET UNITYSDK_OFFSET(0xF252590)

inline static constexpr unsigned int DKDCMHNFCHD_TypeDefinitionIndex = 58877;

	class DKDCMHNFCHD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitChimeraWorkRoundFinish* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitChimeraWorkRoundFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitChimeraWorkRoundFinish*))((::PBYTE)hIl2Cpp + DKDCMHNFCHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDCMHNFCHD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDCMHNFCHD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDCMHNFCHD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKDCMHNFCHD_TICK_OFFSET))(this, a1);
		}

		::System::Void NGHLLPKBNOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKDCMHNFCHD_NGHLLPKBNOA_OFFSET))(this, a1);
		}

	};
