#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchHandShowPuzzleFinishToast; }
namespace RPG::GameCore { class TaskContext; }

#define KFLDEPGDELF_CTOR_OFFSET UNITYSDK_OFFSET(0xBC4D530)
#define KFLDEPGDELF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC4D540)
#define KFLDEPGDELF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC4D580)
#define KFLDEPGDELF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC4D600)
#define KFLDEPGDELF_TICK_OFFSET UNITYSDK_OFFSET(0xBC4D650)

inline static constexpr unsigned int KFLDEPGDELF_TypeDefinitionIndex = 54481;

	class KFLDEPGDELF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchHandShowPuzzleFinishToast* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast*))((::PBYTE)hIl2Cpp + KFLDEPGDELF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLDEPGDELF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLDEPGDELF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLDEPGDELF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFLDEPGDELF_TICK_OFFSET))(this, a1);
		}

	};
