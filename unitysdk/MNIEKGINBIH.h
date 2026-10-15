#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OpenTimeRewindPage; }
namespace RPG::GameCore { class TaskContext; }

#define MNIEKGINBIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0C8B0)
#define MNIEKGINBIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA0C8C0)
#define MNIEKGINBIH_EPCFEIIICGP_OFFSET UNITYSDK_OFFSET(0xBA0CB30)
#define MNIEKGINBIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA0C910)
#define MNIEKGINBIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA0CA80)
#define MNIEKGINBIH_TICK_OFFSET UNITYSDK_OFFSET(0xBA0CAD0)

inline static constexpr unsigned int MNIEKGINBIH_TypeDefinitionIndex = 53375;

	class MNIEKGINBIH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::OpenTimeRewindPage* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTimeRewindPage*))((::PBYTE)hIl2Cpp + MNIEKGINBIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEKGINBIH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEKGINBIH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEKGINBIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNIEKGINBIH_TICK_OFFSET))(this, a1);
		}

		::System::Void EPCFEIIICGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEKGINBIH_EPCFEIIICGP_OFFSET))(this);
		}

	};
