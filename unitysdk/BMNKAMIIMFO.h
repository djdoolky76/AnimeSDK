#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvOverrideCameraModuleConfig; }
namespace RPG::GameCore { class TaskContext; }

#define BMNKAMIIMFO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC1380)
#define BMNKAMIIMFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDC13B0)

	class BMNKAMIIMFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOverrideCameraModuleConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOverrideCameraModuleConfig*))((::PBYTE)hIl2Cpp + BMNKAMIIMFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNKAMIIMFO_ONTASKBEGIN_OFFSET))(this);
		}

	};
