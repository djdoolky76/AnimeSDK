#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitHeliobusChallengeExitNotify; }
namespace System { class Object; }

#define CCCKAGDBFGL_BJEOOHOHKOA_OFFSET UNITYSDK_OFFSET(0xC7379C0)
#define CCCKAGDBFGL_CMMHAKEAFAC_OFFSET UNITYSDK_OFFSET(0xC737D40)
#define CCCKAGDBFGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC7376A0)
#define CCCKAGDBFGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7377D0)
#define CCCKAGDBFGL_HGNILJIGCBN_OFFSET UNITYSDK_OFFSET(0xC737A80)
#define CCCKAGDBFGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC737890)
#define CCCKAGDBFGL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC737C20)
#define CCCKAGDBFGL_TICK_OFFSET UNITYSDK_OFFSET(0xC737C70)

	class CCCKAGDBFGL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitHeliobusChallengeExitNotify* OFKGLJOAMLD; // 0x20
		::MJKLAEILHPK OLMFJLICIIA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitHeliobusChallengeExitNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*))((::PBYTE)hIl2Cpp + CCCKAGDBFGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCKAGDBFGL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCKAGDBFGL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCKAGDBFGL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCCKAGDBFGL_TICK_OFFSET))(this, a1);
		}

		::System::Void BJEOOHOHKOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCKAGDBFGL_BJEOOHOHKOA_OFFSET))(this);
		}

		::System::Void HGNILJIGCBN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCCKAGDBFGL_HGNILJIGCBN_OFFSET))(this, a1);
		}

		::System::Void CMMHAKEAFAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCKAGDBFGL_CMMHAKEAFAC_OFFSET))(this);
		}

	};
