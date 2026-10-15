#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowHintEffect; }
namespace RPG::GameCore { class TaskContext; }

#define ADIEHOBHFLM_CTOR_OFFSET UNITYSDK_OFFSET(0xB13EED0)
#define ADIEHOBHFLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB13EEE0)
#define ADIEHOBHFLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB13F000)
#define ADIEHOBHFLM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB13EF30)
#define ADIEHOBHFLM_TICK_OFFSET UNITYSDK_OFFSET(0xB13F530)

	class ADIEHOBHFLM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowHintEffect* OFKGLJOAMLD; // 0x20
		::System::UInt32 PEEFHNHDBMF; // 0x28
		::System::UInt32 JGGDKOCIEGH; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHintEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_TICK_OFFSET))(this, a1);
		}

	};
