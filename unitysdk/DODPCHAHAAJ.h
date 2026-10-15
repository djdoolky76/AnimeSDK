#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwordTrainingCheckStoryLineFinished; }
namespace RPG::GameCore { class TaskContext; }

#define DODPCHAHAAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE1050)
#define DODPCHAHAAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE1060)
#define DODPCHAHAAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FE1140)
#define DODPCHAHAAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FE1370)
#define DODPCHAHAAJ_TICK_OFFSET UNITYSDK_OFFSET(0x11FE13C0)

	class DODPCHAHAAJ : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* DLJHJKLMADI; // 0x18
		::RPG::GameCore::SwordTrainingCheckStoryLineFinished* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*))((::PBYTE)hIl2Cpp + DODPCHAHAAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODPCHAHAAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODPCHAHAAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODPCHAHAAJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DODPCHAHAAJ_TICK_OFFSET))(this, a1);
		}

	};
