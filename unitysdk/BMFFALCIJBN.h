#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RandomSelectMuseumStuff; }
namespace RPG::GameCore { class TaskContext; }

#define BMFFALCIJBN_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA0620)
#define BMFFALCIJBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDA0650)

inline static constexpr unsigned int BMFFALCIJBN_TypeDefinitionIndex = 53194;

	class BMFFALCIJBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectMuseumStuff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectMuseumStuff*))((::PBYTE)hIl2Cpp + BMFFALCIJBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFFALCIJBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
