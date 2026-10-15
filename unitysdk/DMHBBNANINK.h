#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowRogueTalkBg; }
namespace RPG::GameCore { class TaskContext; }

#define DMHBBNANINK_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB9DC0)
#define DMHBBNANINK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEB9DF0)

inline static constexpr unsigned int DMHBBNANINK_TypeDefinitionIndex = 58688;

	class DMHBBNANINK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueTalkBg* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueTalkBg*))((::PBYTE)hIl2Cpp + DMHBBNANINK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBBNANINK_ONTASKBEGIN_OFFSET))(this);
		}

	};
