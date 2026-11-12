#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareLastKillType; }
namespace RPG::GameCore { class TaskContext; }

#define AMHJDKGBNDP_CTOR_OFFSET UNITYSDK_OFFSET(0x163EE260)
#define AMHJDKGBNDP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x163EE290)

inline static constexpr unsigned int AMHJDKGBNDP_TypeDefinitionIndex = 55705;

	class AMHJDKGBNDP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + AMHJDKGBNDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHJDKGBNDP_EVALUATE_OFFSET))(this);
		}

	};
