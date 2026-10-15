#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvDisablePlayerLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define HLFHBNBBCKF_CTOR_OFFSET UNITYSDK_OFFSET(0x15D52170)
#define HLFHBNBBCKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D521A0)

inline static constexpr unsigned int HLFHBNBBCKF_TypeDefinitionIndex = 52348;

	class HLFHBNBBCKF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDisablePlayerLockTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDisablePlayerLockTarget*))((::PBYTE)hIl2Cpp + HLFHBNBBCKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFHBNBBCKF_ONTASKBEGIN_OFFSET))(this);
		}

	};
