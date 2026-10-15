#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartControlTimeRewindEntity; }
namespace RPG::GameCore { class TaskContext; }

#define IEOCNIIBFAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15EFAD00)
#define IEOCNIIBFAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EFAD30)

inline static constexpr unsigned int IEOCNIIBFAL_TypeDefinitionIndex = 53397;

	class IEOCNIIBFAL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartControlTimeRewindEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartControlTimeRewindEntity*))((::PBYTE)hIl2Cpp + IEOCNIIBFAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOCNIIBFAL_ONTASKBEGIN_OFFSET))(this);
		}

	};
