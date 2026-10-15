#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_Hipplen_Enable_Interact; }
namespace RPG::GameCore { class TaskContext; }

#define LNJLGPAFMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E47E0)
#define LNJLGPAFMAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7E4950)
#define LNJLGPAFMAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7E4810)
#define LNJLGPAFMAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7E48E0)
#define LNJLGPAFMAJ_TICK_OFFSET UNITYSDK_OFFSET(0xB7E4880)

	class LNJLGPAFMAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Enable_Interact*))((::PBYTE)hIl2Cpp + LNJLGPAFMAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJLGPAFMAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNJLGPAFMAJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJLGPAFMAJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJLGPAFMAJ_DISPOSE_OFFSET))(this);
		}

	};
