#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JIFDLHEIPHD;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GCOOJALEHNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1598F4C0)
#define GCOOJALEHNP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1598F580)
#define GCOOJALEHNP_GJMHGADGCMA_OFFSET UNITYSDK_OFFSET(0x1598F710)
#define GCOOJALEHNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1598F600)
#define GCOOJALEHNP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1598F530)
#define GCOOJALEHNP_TICK_OFFSET UNITYSDK_OFFSET(0x1598F4D0)

inline static constexpr unsigned int GCOOJALEHNP_TypeDefinitionIndex = 58495;

	class GCOOJALEHNP : public ::GELIALJDFBL
	{
	public:
		::JIFDLHEIPHD* JKJPFJALGKO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JIFDLHEIPHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JIFDLHEIPHD*))((::PBYTE)hIl2Cpp + GCOOJALEHNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCOOJALEHNP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOOJALEHNP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOOJALEHNP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOOJALEHNP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GJMHGADGCMA(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GCOOJALEHNP_GJMHGADGCMA_OFFSET))(this, a1, a2);
		}

	};
