#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RewindTimeRewindTarget; }
namespace RPG::GameCore { class TaskContext; }

#define NPCPEPOHMOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E9C30)
#define NPCPEPOHMOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC5E9C60)

inline static constexpr unsigned int NPCPEPOHMOA_TypeDefinitionIndex = 54550;

	class NPCPEPOHMOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RewindTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RewindTimeRewindTarget*))((::PBYTE)hIl2Cpp + NPCPEPOHMOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCPEPOHMOA_ONTASKBEGIN_OFFSET))(this);
		}

	};
