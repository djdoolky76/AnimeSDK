#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class TaskContext; }

#define PHOFPMAJNHF_CTOR_OFFSET UNITYSDK_OFFSET(0xC250700)
#define PHOFPMAJNHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC250730)

inline static constexpr unsigned int PHOFPMAJNHF_TypeDefinitionIndex = 53105;

	class PHOFPMAJNHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVideoSequence* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + PHOFPMAJNHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOFPMAJNHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
