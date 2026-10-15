#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpticalIllusionBubble; }
namespace RPG::GameCore { class TaskContext; }

#define FEHHACDHIJK_CTOR_OFFSET UNITYSDK_OFFSET(0x156E8EE0)
#define FEHHACDHIJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156E8F10)

	class FEHHACDHIJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionBubble* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionBubble*))((::PBYTE)hIl2Cpp + FEHHACDHIJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHACDHIJK_ONTASKBEGIN_OFFSET))(this);
		}

	};
