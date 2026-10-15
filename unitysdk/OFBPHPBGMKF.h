#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TargetTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define OFBPHPBGMKF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3D100)
#define OFBPHPBGMKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE3D130)

	class OFBPHPBGMKF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TargetTimeSlow*))((::PBYTE)hIl2Cpp + OFBPHPBGMKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBPHPBGMKF_ONTASKBEGIN_OFFSET))(this);
		}

	};
