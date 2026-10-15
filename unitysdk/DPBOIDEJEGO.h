#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetControlSkillMapping; }
namespace RPG::GameCore { class TaskContext; }

#define DPBOIDEJEGO_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF9260)
#define DPBOIDEJEGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FF9290)

	class DPBOIDEJEGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetControlSkillMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetControlSkillMapping*))((::PBYTE)hIl2Cpp + DPBOIDEJEGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBOIDEJEGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
