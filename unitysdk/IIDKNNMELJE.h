#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetDroneFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define IIDKNNMELJE_CTOR_OFFSET UNITYSDK_OFFSET(0x16438E90)
#define IIDKNNMELJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16438EA0)
#define IIDKNNMELJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16438EE0)
#define IIDKNNMELJE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16438FD0)
#define IIDKNNMELJE_TICK_OFFSET UNITYSDK_OFFSET(0x16439020)

	class IIDKNNMELJE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetDroneFuncBtn* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDroneFuncBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDroneFuncBtn*))((::PBYTE)hIl2Cpp + IIDKNNMELJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDKNNMELJE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDKNNMELJE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDKNNMELJE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIDKNNMELJE_TICK_OFFSET))(this, a1);
		}

	};
