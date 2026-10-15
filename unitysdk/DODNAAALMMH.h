#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AbortModifierPhasePerform; }
namespace RPG::GameCore { class TaskContext; }

#define DODNAAALMMH_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDBB90)
#define DODNAAALMMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FDBBC0)

inline static constexpr unsigned int DODNAAALMMH_TypeDefinitionIndex = 54795;

	class DODNAAALMMH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AbortModifierPhasePerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AbortModifierPhasePerform*))((::PBYTE)hIl2Cpp + DODNAAALMMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODNAAALMMH_ONTASKBEGIN_OFFSET))(this);
		}

	};
