#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLevelFinish; }
namespace RPG::GameCore { class TaskContext; }

#define JFLPOEJJCGC_CTOR_OFFSET UNITYSDK_OFFSET(0x16643590)
#define JFLPOEJJCGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166435C0)

inline static constexpr unsigned int JFLPOEJJCGC_TypeDefinitionIndex = 58551;

	class JFLPOEJJCGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLevelFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLevelFinish*))((::PBYTE)hIl2Cpp + JFLPOEJJCGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLPOEJJCGC_ONTASKBEGIN_OFFSET))(this);
		}

	};
