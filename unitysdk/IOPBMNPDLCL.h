#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetSummonUnitAutoHide; }
namespace RPG::GameCore { class TaskContext; }

#define IOPBMNPDLCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8504B0)
#define IOPBMNPDLCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8504E0)

inline static constexpr unsigned int IOPBMNPDLCL_TypeDefinitionIndex = 59845;

	class IOPBMNPDLCL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSummonUnitAutoHide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSummonUnitAutoHide*))((::PBYTE)hIl2Cpp + IOPBMNPDLCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPBMNPDLCL_ONTASKBEGIN_OFFSET))(this);
		}

	};
