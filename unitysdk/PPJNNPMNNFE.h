#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DistrictSetupGeometryTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define PPJNNPMNNFE_CTOR_OFFSET UNITYSDK_OFFSET(0xC384F50)
#define PPJNNPMNNFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC384F80)
#define PPJNNPMNNFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC384FC0)

inline static constexpr unsigned int PPJNNPMNNFE_TypeDefinitionIndex = 58087;

	class PPJNNPMNNFE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DistrictSetupGeometryTrigger*))((::PBYTE)hIl2Cpp + PPJNNPMNNFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJNNPMNNFE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJNNPMNNFE_ONTASKBEGIN_OFFSET))(this);
		}

	};
