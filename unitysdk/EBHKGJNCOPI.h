#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HCAAKJLECEH;
namespace RPG::GameCore { class SetTargetCrossHairVisible; }
namespace RPG::GameCore { class TaskContext; }

#define EBHKGJNCOPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3BE300)
#define EBHKGJNCOPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3BE350)
#define EBHKGJNCOPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C3BE390)
#define EBHKGJNCOPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C3BE530)
#define EBHKGJNCOPI_TICK_OFFSET UNITYSDK_OFFSET(0x1C3BE580)

inline static constexpr unsigned int EBHKGJNCOPI_TypeDefinitionIndex = 57646;

	class EBHKGJNCOPI : public ::GELIALJDFBL
	{
	public:
		::HCAAKJLECEH* AGAPPFLLEBA; // 0x18
		::RPG::GameCore::SetTargetCrossHairVisible* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetCrossHairVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetCrossHairVisible*))((::PBYTE)hIl2Cpp + EBHKGJNCOPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHKGJNCOPI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHKGJNCOPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHKGJNCOPI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBHKGJNCOPI_TICK_OFFSET))(this, a1);
		}

	};
