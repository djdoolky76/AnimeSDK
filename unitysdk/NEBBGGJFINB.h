#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class OPGCGKNDLOE;
namespace RPG::GameCore { class TaskContext; }

#define NEBBGGJFINB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB505F0)
#define NEBBGGJFINB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB50600)
#define NEBBGGJFINB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB50660)
#define NEBBGGJFINB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB50730)
#define NEBBGGJFINB_TICK_OFFSET UNITYSDK_OFFSET(0xBB50780)

inline static constexpr unsigned int NEBBGGJFINB_TypeDefinitionIndex = 52646;

	class NEBBGGJFINB : public ::GELIALJDFBL
	{
	public:
		::OPGCGKNDLOE* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OPGCGKNDLOE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OPGCGKNDLOE*))((::PBYTE)hIl2Cpp + NEBBGGJFINB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBGGJFINB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBGGJFINB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBGGJFINB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEBBGGJFINB_TICK_OFFSET))(this, a1);
		}

	};
