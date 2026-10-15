#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class NpcSetupTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define LFCINPECDNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB65C820)
#define LFCINPECDNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB65C850)

inline static constexpr unsigned int LFCINPECDNB_TypeDefinitionIndex = 58236;

	class LFCINPECDNB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NpcSetupTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NpcSetupTrigger*))((::PBYTE)hIl2Cpp + LFCINPECDNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCINPECDNB_ONTASKBEGIN_OFFSET))(this);
		}

	};
