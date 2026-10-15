#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class ConditionLoopExecuteTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define HCBGPCANLCD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C09CF0)
#define HCBGPCANLCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C09E00)
#define HCBGPCANLCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C09EE0)
#define HCBGPCANLCD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C0A140)
#define HCBGPCANLCD_TICK_OFFSET UNITYSDK_OFFSET(0x15C0A190)

inline static constexpr unsigned int HCBGPCANLCD_TypeDefinitionIndex = 54973;

	class HCBGPCANLCD : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* NDOFCGDDHHD; // 0x28
		::RPG::GameCore::ConditionLoopExecuteTaskList* OFKGLJOAMLD; // 0x30
		::System::Int32 DLANCNECDDA; // 0x38
		::System::Int32 CALNAPHILLA; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConditionLoopExecuteTaskList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConditionLoopExecuteTaskList*))((::PBYTE)hIl2Cpp + HCBGPCANLCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBGPCANLCD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBGPCANLCD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBGPCANLCD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCBGPCANLCD_TICK_OFFSET))(this, a1);
		}

	};
