#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsMultiTargetCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define JPEGBBAKCMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F69A0)
#define JPEGBBAKCMG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B4F69D0)

inline static constexpr unsigned int JPEGBBAKCMG_TypeDefinitionIndex = 56079;

	class JPEGBBAKCMG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*))((::PBYTE)hIl2Cpp + JPEGBBAKCMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGBBAKCMG_EVALUATE_OFFSET))(this);
		}

	};
