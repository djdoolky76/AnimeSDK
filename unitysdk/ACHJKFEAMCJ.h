#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class HideHintEffect; }
namespace RPG::GameCore { class TaskContext; }

#define ACHJKFEAMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB1202C0)
#define ACHJKFEAMCJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1202D0)
#define ACHJKFEAMCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB120310)
#define ACHJKFEAMCJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB120910)
#define ACHJKFEAMCJ_TICK_OFFSET UNITYSDK_OFFSET(0xB120950)

	class ACHJKFEAMCJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::HideHintEffect* OFKGLJOAMLD; // 0x20
		::System::UInt32 PEEFHNHDBMF; // 0x28
		::System::UInt32 JGGDKOCIEGH; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideHintEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideHintEffect*))((::PBYTE)hIl2Cpp + ACHJKFEAMCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHJKFEAMCJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHJKFEAMCJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHJKFEAMCJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACHJKFEAMCJ_TICK_OFFSET))(this, a1);
		}

	};
