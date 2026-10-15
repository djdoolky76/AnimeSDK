#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ProcessOpInSkillExecuting; }
namespace RPG::GameCore { class TaskContext; }

#define DNHBNPFCEDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1194EF20)
#define DNHBNPFCEDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1194EFA0)
#define DNHBNPFCEDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1194F070)
#define DNHBNPFCEDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1194F310)
#define DNHBNPFCEDD_TICK_OFFSET UNITYSDK_OFFSET(0x1194F360)

inline static constexpr unsigned int DNHBNPFCEDD_TypeDefinitionIndex = 55268;

	class DNHBNPFCEDD : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* NMMBJIFKJON; // 0x18
		::RPG::GameCore::ProcessOpInSkillExecuting* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ProcessOpInSkillExecuting* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ProcessOpInSkillExecuting*))((::PBYTE)hIl2Cpp + DNHBNPFCEDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHBNPFCEDD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHBNPFCEDD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHBNPFCEDD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNHBNPFCEDD_TICK_OFFSET))(this, a1);
		}

	};
