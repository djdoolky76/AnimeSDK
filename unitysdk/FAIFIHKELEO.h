#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StackWeakResistance; }
namespace RPG::GameCore { class TaskContext; }

#define FAIFIHKELEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1567C290)
#define FAIFIHKELEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1567C2C0)
#define FAIFIHKELEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1567C360)
#define FAIFIHKELEO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1567C720)
#define FAIFIHKELEO_TICK_OFFSET UNITYSDK_OFFSET(0x1567C300)

inline static constexpr unsigned int FAIFIHKELEO_TypeDefinitionIndex = 55655;

	class FAIFIHKELEO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StackWeakResistance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackWeakResistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackWeakResistance*))((::PBYTE)hIl2Cpp + FAIFIHKELEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIFIHKELEO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAIFIHKELEO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIFIHKELEO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIFIHKELEO_ONTASKRESET_OFFSET))(this);
		}

	};
