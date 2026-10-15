#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class Freelook3rdVCamConfigChange; }
namespace RPG::GameCore { class TaskContext; }

#define GLLFPJGJKMC_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABC390)
#define GLLFPJGJKMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ABC3C0)

	class GLLFPJGJKMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Freelook3rdVCamConfigChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Freelook3rdVCamConfigChange*))((::PBYTE)hIl2Cpp + GLLFPJGJKMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFPJGJKMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
