#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowRogueHandbookUI; }
namespace RPG::GameCore { class TaskContext; }

#define LLBOJHNMCIM_CTOR_OFFSET UNITYSDK_OFFSET(0xC001570)
#define LLBOJHNMCIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC001620)

inline static constexpr unsigned int LLBOJHNMCIM_TypeDefinitionIndex = 59951;

	class LLBOJHNMCIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueHandbookUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueHandbookUI*))((::PBYTE)hIl2Cpp + LLBOJHNMCIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOJHNMCIM_ONTASKBEGIN_OFFSET))(this);
		}

	};
