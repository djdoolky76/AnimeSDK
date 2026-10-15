#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetSummonUnitAutoHide; }
namespace RPG::GameCore { class TaskContext; }

#define IOPBMNPDLCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1650DD30)
#define IOPBMNPDLCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1650DD60)

inline static constexpr unsigned int IOPBMNPDLCL_TypeDefinitionIndex = 58580;

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
