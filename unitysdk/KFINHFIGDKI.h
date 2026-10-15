#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowTutorialUI; }
namespace RPG::GameCore { class TaskContext; }

#define KFINHFIGDKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3B7BC0)
#define KFINHFIGDKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3B7BD0)
#define KFINHFIGDKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3B7C10)
#define KFINHFIGDKI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3B7CB0)
#define KFINHFIGDKI_TICK_OFFSET UNITYSDK_OFFSET(0xB3B7D00)

	class KFINHFIGDKI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowTutorialUI* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialUI*))((::PBYTE)hIl2Cpp + KFINHFIGDKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFINHFIGDKI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFINHFIGDKI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFINHFIGDKI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFINHFIGDKI_TICK_OFFSET))(this, a1);
		}

	};
