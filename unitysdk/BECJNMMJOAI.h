#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class OCOHFEDPMBM;
namespace RPG::GameCore { class TaskContext; }

#define BECJNMMJOAI_CTOR_OFFSET UNITYSDK_OFFSET(0x163027D0)
#define BECJNMMJOAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163027E0)
#define BECJNMMJOAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16302820)
#define BECJNMMJOAI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16302880)
#define BECJNMMJOAI_TICK_OFFSET UNITYSDK_OFFSET(0x163028D0)

inline static constexpr unsigned int BECJNMMJOAI_TypeDefinitionIndex = 58081;

	class BECJNMMJOAI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::OCOHFEDPMBM* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OCOHFEDPMBM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OCOHFEDPMBM*))((::PBYTE)hIl2Cpp + BECJNMMJOAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJNMMJOAI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJNMMJOAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJNMMJOAI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BECJNMMJOAI_TICK_OFFSET))(this, a1);
		}

	};
