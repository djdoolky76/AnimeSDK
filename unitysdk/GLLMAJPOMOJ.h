#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define GLLMAJPOMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABCD00)
#define GLLMAJPOMOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ABCD30)

inline static constexpr unsigned int GLLMAJPOMOJ_TypeDefinitionIndex = 55314;

	class GLLMAJPOMOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetActionDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetActionDelay*))((::PBYTE)hIl2Cpp + GLLMAJPOMOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLMAJPOMOJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
