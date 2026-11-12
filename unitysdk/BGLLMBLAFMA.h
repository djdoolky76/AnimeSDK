#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowRogueLoadingPage; }
namespace RPG::GameCore { class TaskContext; }

#define BGLLMBLAFMA_CTOR_OFFSET UNITYSDK_OFFSET(0xBB168F0)
#define BGLLMBLAFMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB16920)

inline static constexpr unsigned int BGLLMBLAFMA_TypeDefinitionIndex = 59952;

	class BGLLMBLAFMA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueLoadingPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueLoadingPage*))((::PBYTE)hIl2Cpp + BGLLMBLAFMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLLMBLAFMA_ONTASKBEGIN_OFFSET))(this);
		}

	};
