#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvNpcResetEyeTransforms; }
namespace RPG::GameCore { class TaskContext; }

#define ECEFFENEHFL_CTOR_OFFSET UNITYSDK_OFFSET(0x12D06280)
#define ECEFFENEHFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D062B0)

inline static constexpr unsigned int ECEFFENEHFL_TypeDefinitionIndex = 52456;

	class ECEFFENEHFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcResetEyeTransforms* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcResetEyeTransforms*))((::PBYTE)hIl2Cpp + ECEFFENEHFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEFFENEHFL_ONTASKBEGIN_OFFSET))(this);
		}

	};
