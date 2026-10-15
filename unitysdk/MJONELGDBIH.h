#pragma once
#include "unitysdk/unitysdk.h"
class MNOMFMNFDDH;
namespace RPG::GameCore { class TaskContext; }

#define MJONELGDBIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB97B070)
#define MJONELGDBIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB97B0A0)
#define MJONELGDBIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB97B590)
#define MJONELGDBIH_POPLKHDAOPL_OFFSET UNITYSDK_OFFSET(0xB97B110)

	class MJONELGDBIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MNOMFMNFDDH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MNOMFMNFDDH*))((::PBYTE)hIl2Cpp + MJONELGDBIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJONELGDBIH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJONELGDBIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void POPLKHDAOPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJONELGDBIH_POPLKHDAOPL_OFFSET))(this);
		}

	};
