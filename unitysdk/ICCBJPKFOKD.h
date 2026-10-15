#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class LoopExecuteTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define ICCBJPKFOKD_CMEFBBBDBDL_OFFSET UNITYSDK_OFFSET(0x15E4C030)
#define ICCBJPKFOKD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4BE20)
#define ICCBJPKFOKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E4BEA0)
#define ICCBJPKFOKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E4BF80)
#define ICCBJPKFOKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E4C270)
#define ICCBJPKFOKD_TICK_OFFSET UNITYSDK_OFFSET(0x15E4C2C0)

inline static constexpr unsigned int ICCBJPKFOKD_TypeDefinitionIndex = 55159;

	class ICCBJPKFOKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::LoopExecuteTaskList* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* NDOFCGDDHHD; // 0x28
		::System::Int32 DLANCNECDDA; // 0x30
		::System::Int32 CALNAPHILLA; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoopExecuteTaskList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoopExecuteTaskList*))((::PBYTE)hIl2Cpp + ICCBJPKFOKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCBJPKFOKD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCBJPKFOKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCBJPKFOKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICCBJPKFOKD_TICK_OFFSET))(this, a1);
		}

		::System::Void CMEFBBBDBDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCBJPKFOKD_CMEFBBBDBDL_OFFSET))(this);
		}

	};
