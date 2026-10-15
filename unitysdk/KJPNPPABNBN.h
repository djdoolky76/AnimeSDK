#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddActivityMazeBuffBinding; }
namespace RPG::GameCore { class TaskContext; }

#define KJPNPPABNBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB459A80)
#define KJPNPPABNBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB459AB0)

inline static constexpr unsigned int KJPNPPABNBN_TypeDefinitionIndex = 54807;

	class KJPNPPABNBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddActivityMazeBuffBinding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddActivityMazeBuffBinding*))((::PBYTE)hIl2Cpp + KJPNPPABNBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPNPPABNBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
