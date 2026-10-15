#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetIsometricRoadLinkerEnable; }
namespace RPG::GameCore { class TaskContext; }

#define FDIOHLGHOFB_CTOR_OFFSET UNITYSDK_OFFSET(0x156DD440)
#define FDIOHLGHOFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156DD470)

	class FDIOHLGHOFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIsometricRoadLinkerEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIsometricRoadLinkerEnable*))((::PBYTE)hIl2Cpp + FDIOHLGHOFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOHLGHOFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
