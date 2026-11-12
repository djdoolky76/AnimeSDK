#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLevelFinish; }
namespace RPG::GameCore { class TaskContext; }

#define JFLPOEJJCGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A0870)
#define JFLPOEJJCGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9A08A0)

inline static constexpr unsigned int JFLPOEJJCGC_TypeDefinitionIndex = 59816;

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
