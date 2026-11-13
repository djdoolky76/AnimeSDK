#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JODABDCOPOP.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ConditionLoopExecuteTaskListWithInterval; }
namespace RPG::GameCore { class TaskContext; }

#define IIKKFADGKAM_CMEFBBBDBDL_OFFSET UNITYSDK_OFFSET(0x193D6EF0)
#define IIKKFADGKAM_CTOR_OFFSET UNITYSDK_OFFSET(0x193D6D20)
#define IIKKFADGKAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193D7130)
#define IIKKFADGKAM_INFHHPFKMMG_OFFSET UNITYSDK_OFFSET(0x193D7180)
#define IIKKFADGKAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x193D6DF0)

inline static constexpr unsigned int IIKKFADGKAM_TypeDefinitionIndex = 56148;

	class IIKKFADGKAM : public ::JODABDCOPOP
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x30
		::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval* OFKGLJOAMLD; // 0x38
		::System::Int32 DLANCNECDDA; // 0x40
		::System::Int32 CALNAPHILLA; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + IIKKFADGKAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKKFADGKAM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKKFADGKAM_DISPOSE_OFFSET))(this);
		}

		::System::Void INFHHPFKMMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKKFADGKAM_INFHHPFKMMG_OFFSET))(this);
		}

		::System::Void CMEFBBBDBDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKKFADGKAM_CMEFBBBDBDL_OFFSET))(this);
		}

	};
