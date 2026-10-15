#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEntityPosition; }
namespace RPG::GameCore { class TaskContext; }

#define LGGLHEIALPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB695B00)
#define LGGLHEIALPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB695B30)

inline static constexpr unsigned int LGGLHEIALPM_TypeDefinitionIndex = 58542;

	class LGGLHEIALPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityPosition*))((::PBYTE)hIl2Cpp + LGGLHEIALPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGLHEIALPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
