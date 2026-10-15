#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AudioSetRTPCValue; }
namespace RPG::GameCore { class TaskContext; }

#define FPCLNBOAAJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1590FD50)
#define FPCLNBOAAJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1590FD80)

	class FPCLNBOAAJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AudioSetRTPCValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AudioSetRTPCValue*))((::PBYTE)hIl2Cpp + FPCLNBOAAJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCLNBOAAJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
