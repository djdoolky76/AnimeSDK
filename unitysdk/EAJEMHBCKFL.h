#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearFormationFaceDelta; }
namespace RPG::GameCore { class TaskContext; }

#define EAJEMHBCKFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1267C070)
#define EAJEMHBCKFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1267C0A0)

	class EAJEMHBCKFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearFormationFaceDelta* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearFormationFaceDelta*))((::PBYTE)hIl2Cpp + EAJEMHBCKFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMHBCKFL_ONTASKBEGIN_OFFSET))(this);
		}

	};
