#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DistrictSetupGeometryTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define PPJNNPMNNFE_CTOR_OFFSET UNITYSDK_OFFSET(0xC38C650)
#define PPJNNPMNNFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC38C680)
#define PPJNNPMNNFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC38C6C0)

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
