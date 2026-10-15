#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class IncreaseMissionCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define OGPGCFOAOPE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5E6B0)
#define OGPGCFOAOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE5E6C0)
#define OGPGCFOAOPE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE5E700)
#define OGPGCFOAOPE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE5E750)
#define OGPGCFOAOPE_TICK_OFFSET UNITYSDK_OFFSET(0xBE5E7A0)

inline static constexpr unsigned int OGPGCFOAOPE_TypeDefinitionIndex = 52926;

	class OGPGCFOAOPE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::IncreaseMissionCustomValue* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IncreaseMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IncreaseMissionCustomValue*))((::PBYTE)hIl2Cpp + OGPGCFOAOPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPGCFOAOPE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPGCFOAOPE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPGCFOAOPE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGPGCFOAOPE_TICK_OFFSET))(this, a1);
		}

	};
