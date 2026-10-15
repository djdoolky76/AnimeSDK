#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetMissionCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define NMONDJKIMNC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC941D0)
#define NMONDJKIMNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC941E0)
#define NMONDJKIMNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC94220)
#define NMONDJKIMNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC94370)
#define NMONDJKIMNC_TICK_OFFSET UNITYSDK_OFFSET(0xBC943C0)

inline static constexpr unsigned int NMONDJKIMNC_TypeDefinitionIndex = 53244;

	class NMONDJKIMNC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetMissionCustomValue* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMissionCustomValue*))((::PBYTE)hIl2Cpp + NMONDJKIMNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMONDJKIMNC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMONDJKIMNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMONDJKIMNC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMONDJKIMNC_TICK_OFFSET))(this, a1);
		}

	};
