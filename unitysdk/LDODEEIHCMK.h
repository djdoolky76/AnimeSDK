#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyAddBathBuff; }
namespace System { class Object; }

#define LDODEEIHCMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB63EDF0)
#define LDODEEIHCMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB63F020)
#define LDODEEIHCMK_EPOKNPOCHGM_OFFSET UNITYSDK_OFFSET(0xB63F0E0)
#define LDODEEIHCMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB63EE00)
#define LDODEEIHCMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB63EF10)
#define LDODEEIHCMK_TICK_OFFSET UNITYSDK_OFFSET(0xB63EFC0)

	class LDODEEIHCMK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TrainPartyAddBathBuff* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyAddBathBuff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyAddBathBuff*))((::PBYTE)hIl2Cpp + LDODEEIHCMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDODEEIHCMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDODEEIHCMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDODEEIHCMK_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDODEEIHCMK_DISPOSE_OFFSET))(this);
		}

		::System::Void EPOKNPOCHGM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + LDODEEIHCMK_EPOKNPOCHGM_OFFSET))(this, a1, a2);
		}

	};
