#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropEscalatorMoveStop; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MFCECHKCHKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8EDD20)
#define MFCECHKCHKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8EDD30)
#define MFCECHKCHKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8EDDD0)
#define MFCECHKCHKM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8EDD80)
#define MFCECHKCHKM_TICK_OFFSET UNITYSDK_OFFSET(0xB8EDF10)

	class MFCECHKCHKM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::String* IJMGEMMNNPI; // 0x20
		::RPG::GameCore::PropEscalatorMoveStop* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropEscalatorMoveStop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropEscalatorMoveStop*))((::PBYTE)hIl2Cpp + MFCECHKCHKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCECHKCHKM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCECHKCHKM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCECHKCHKM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFCECHKCHKM_TICK_OFFSET))(this, a1);
		}

	};
