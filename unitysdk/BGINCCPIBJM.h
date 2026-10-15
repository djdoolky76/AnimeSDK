#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AudioSetRTPCValueByRatio; }
namespace RPG::GameCore { class TaskContext; }

#define BGINCCPIBJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB189BE0)
#define BGINCCPIBJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB189C10)

	class BGINCCPIBJM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AudioSetRTPCValueByRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AudioSetRTPCValueByRatio*))((::PBYTE)hIl2Cpp + BGINCCPIBJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGINCCPIBJM_ONTASKBEGIN_OFFSET))(this);
		}

	};
