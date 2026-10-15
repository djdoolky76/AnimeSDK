#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAnimatorParameterWithTransition; }
namespace RPG::GameCore { class TaskContext; }

#define POOELIIGKHP_CTOR_OFFSET UNITYSDK_OFFSET(0xC374700)
#define POOELIIGKHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3747B0)

	class POOELIIGKHP
	{
	public:
		::System::Int32 EJLJCJLLBPF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAnimatorParameterWithTransition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAnimatorParameterWithTransition*))((::PBYTE)hIl2Cpp + POOELIIGKHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOELIIGKHP_ONTASKBEGIN_OFFSET))(this);
		}

	};
