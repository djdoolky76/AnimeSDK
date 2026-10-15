#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForWithTaskList; }

#define HPBLIABJKJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB48E0)
#define HPBLIABJKJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DB4A10)
#define HPBLIABJKJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB4B70)
#define HPBLIABJKJL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DB4D30)
#define HPBLIABJKJL_TICK_OFFSET UNITYSDK_OFFSET(0x15DB4D80)

inline static constexpr unsigned int HPBLIABJKJL_TypeDefinitionIndex = 58895;

	class HPBLIABJKJL : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::WaitForWithTaskList* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* NDOFCGDDHHD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitForWithTaskList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitForWithTaskList*))((::PBYTE)hIl2Cpp + HPBLIABJKJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBLIABJKJL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBLIABJKJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBLIABJKJL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPBLIABJKJL_TICK_OFFSET))(this, a1);
		}

	};
