#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CaptureCurrentInteractProp; }
namespace RPG::GameCore { class TaskContext; }

#define LDINBGEBBJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB624B20)
#define LDINBGEBBJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB624B30)
#define LDINBGEBBJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB624BE0)
#define LDINBGEBBJA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB624D50)
#define LDINBGEBBJA_TICK_OFFSET UNITYSDK_OFFSET(0xB624B80)

inline static constexpr unsigned int LDINBGEBBJA_TypeDefinitionIndex = 52633;

	class LDINBGEBBJA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CaptureCurrentInteractProp* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureCurrentInteractProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureCurrentInteractProp*))((::PBYTE)hIl2Cpp + LDINBGEBBJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDINBGEBBJA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDINBGEBBJA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDINBGEBBJA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDINBGEBBJA_ONTASKRESET_OFFSET))(this);
		}

	};
