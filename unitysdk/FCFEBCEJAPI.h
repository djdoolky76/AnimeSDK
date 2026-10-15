#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JODABDCOPOP.h"
namespace RPG::GameCore { class LoopExecuteTaskListWithInterval; }
namespace RPG::GameCore { class TaskContext; }

#define FCFEBCEJAPI_CMEFBBBDBDL_OFFSET UNITYSDK_OFFSET(0x156B83A0)
#define FCFEBCEJAPI_CTOR_OFFSET UNITYSDK_OFFSET(0x156B8260)
#define FCFEBCEJAPI_INFHHPFKMMG_OFFSET UNITYSDK_OFFSET(0x156B85E0)
#define FCFEBCEJAPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156B82A0)

inline static constexpr unsigned int FCFEBCEJAPI_TypeDefinitionIndex = 55161;

	class FCFEBCEJAPI : public ::JODABDCOPOP
	{
	public:
		::RPG::GameCore::LoopExecuteTaskListWithInterval* OFKGLJOAMLD; // 0x30
		::System::Int32 DLANCNECDDA; // 0x38
		::System::Int32 CALNAPHILLA; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoopExecuteTaskListWithInterval* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + FCFEBCEJAPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFEBCEJAPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void INFHHPFKMMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFEBCEJAPI_INFHHPFKMMG_OFFSET))(this);
		}

		::System::Void CMEFBBBDBDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFEBCEJAPI_CMEFBBBDBDL_OFFSET))(this);
		}

	};
