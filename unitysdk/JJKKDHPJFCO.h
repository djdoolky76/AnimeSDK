#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetSwitchMascotLockDistance; }
namespace RPG::GameCore { class TaskContext; }

#define JJKKDHPJFCO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2A690)
#define JJKKDHPJFCO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA2A6C0)

inline static constexpr unsigned int JJKKDHPJFCO_TypeDefinitionIndex = 59847;

	class JJKKDHPJFCO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSwitchMascotLockDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSwitchMascotLockDistance*))((::PBYTE)hIl2Cpp + JJKKDHPJFCO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKKDHPJFCO_ONTASKBEGIN_OFFSET))(this);
		}

	};
