#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EOOEFBKBECF;
namespace RPG::GameCore { class TaskContext; }

#define MDNGBIFHFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8ABE80)
#define MDNGBIFHFBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8AC440)
#define MDNGBIFHFBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8ABE90)
#define MDNGBIFHFBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8AC3F0)
#define MDNGBIFHFBN_TICK_OFFSET UNITYSDK_OFFSET(0xB8AC490)
#define MDNGBIFHFBN__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB8AC4F0)

inline static constexpr unsigned int MDNGBIFHFBN_TypeDefinitionIndex = 52751;

	class MDNGBIFHFBN : public ::GELIALJDFBL
	{
	public:
		::EOOEFBKBECF* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EOOEFBKBECF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EOOEFBKBECF*))((::PBYTE)hIl2Cpp + MDNGBIFHFBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGBIFHFBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGBIFHFBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGBIFHFBN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDNGBIFHFBN_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNGBIFHFBN__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
