#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowTargetHPBar; }
namespace RPG::GameCore { class TaskContext; }

#define IGHEEDIIMDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1640DCF0)
#define IGHEEDIIMDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1640DD00)
#define IGHEEDIIMDI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1640DD40)
#define IGHEEDIIMDI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1640DED0)
#define IGHEEDIIMDI_TICK_OFFSET UNITYSDK_OFFSET(0x1640DF20)

	class IGHEEDIIMDI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowTargetHPBar* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTargetHPBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTargetHPBar*))((::PBYTE)hIl2Cpp + IGHEEDIIMDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHEEDIIMDI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHEEDIIMDI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHEEDIIMDI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGHEEDIIMDI_TICK_OFFSET))(this, a1);
		}

	};
