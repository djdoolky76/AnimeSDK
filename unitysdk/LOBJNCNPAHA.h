#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class FrameCaptureIfNeed; }
namespace RPG::GameCore { class TaskContext; }

#define LOBJNCNPAHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F3650)
#define LOBJNCNPAHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7F3660)
#define LOBJNCNPAHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7F36A0)
#define LOBJNCNPAHA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7F37F0)
#define LOBJNCNPAHA_TICK_OFFSET UNITYSDK_OFFSET(0xB7F3840)

	class LOBJNCNPAHA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::FrameCaptureIfNeed* OFKGLJOAMLD; // 0x20
		::System::Int32 OAOAKFFKDHB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FrameCaptureIfNeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FrameCaptureIfNeed*))((::PBYTE)hIl2Cpp + LOBJNCNPAHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBJNCNPAHA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBJNCNPAHA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBJNCNPAHA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOBJNCNPAHA_TICK_OFFSET))(this, a1);
		}

	};
