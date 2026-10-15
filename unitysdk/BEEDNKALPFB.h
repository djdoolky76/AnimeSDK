#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyLoseHPData; }
namespace RPG::GameCore { class TaskContext; }

#define BEEDNKALPFB_CTOR_OFFSET UNITYSDK_OFFSET(0x16311EA0)
#define BEEDNKALPFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16311ED0)

	class BEEDNKALPFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyLoseHPData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyLoseHPData*))((::PBYTE)hIl2Cpp + BEEDNKALPFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEDNKALPFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
