#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchMascotResetSection; }
namespace RPG::GameCore { class TaskContext; }

#define KPBFECCPGDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AF820)
#define KPBFECCPGDI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5AF850)

	class KPBFECCPGDI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotResetSection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotResetSection*))((::PBYTE)hIl2Cpp + KPBFECCPGDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBFECCPGDI_ONTASKBEGIN_OFFSET))(this);
		}

	};
