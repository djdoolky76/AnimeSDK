#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class Obsolete; }
namespace RPG::GameCore { class TaskContext; }

#define HDDPKFNLMEG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C24B10)
#define HDDPKFNLMEG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C24B20)
#define HDDPKFNLMEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C24B60)
#define HDDPKFNLMEG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C24BB0)
#define HDDPKFNLMEG_TICK_OFFSET UNITYSDK_OFFSET(0x15C24C00)

inline static constexpr unsigned int HDDPKFNLMEG_TypeDefinitionIndex = 56367;

	class HDDPKFNLMEG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::Obsolete* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Obsolete* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Obsolete*))((::PBYTE)hIl2Cpp + HDDPKFNLMEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDPKFNLMEG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDPKFNLMEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDPKFNLMEG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDDPKFNLMEG_TICK_OFFSET))(this, a1);
		}

	};
