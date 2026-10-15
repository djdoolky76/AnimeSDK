#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwordTrainingCheckIfGameStarted; }
namespace RPG::GameCore { class TaskContext; }

#define FHMEAPMMNNG_CTOR_OFFSET UNITYSDK_OFFSET(0x157897E0)
#define FHMEAPMMNNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15789B60)
#define FHMEAPMMNNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157898F0)
#define FHMEAPMMNNG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15789A80)
#define FHMEAPMMNNG_TICK_OFFSET UNITYSDK_OFFSET(0x15789C40)

inline static constexpr unsigned int FHMEAPMMNNG_TypeDefinitionIndex = 55698;

	class FHMEAPMMNNG : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* DLJHJKLMADI; // 0x18
		::KFELGAIGHAP* LFJJOIAIPBK; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::SwordTrainingCheckIfGameStarted* OFKGLJOAMLD; // 0x30
		::KFELGAIGHAP* EHNIBALCKFG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingCheckIfGameStarted* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingCheckIfGameStarted*))((::PBYTE)hIl2Cpp + FHMEAPMMNNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMEAPMMNNG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMEAPMMNNG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMEAPMMNNG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHMEAPMMNNG_TICK_OFFSET))(this, a1);
		}

	};
