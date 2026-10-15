#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchMascotSetPickupCount; }
namespace RPG::GameCore { class TaskContext; }

#define JJDLGGEGFHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FC140)
#define JJDLGGEGFHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1FC170)

inline static constexpr unsigned int JJDLGGEGFHM_TypeDefinitionIndex = 58750;

	class JJDLGGEGFHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotSetPickupCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotSetPickupCount*))((::PBYTE)hIl2Cpp + JJDLGGEGFHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDLGGEGFHM_ONTASKBEGIN_OFFSET))(this);
		}

	};
