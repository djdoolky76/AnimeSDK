#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvNPCSetFrozen; }
namespace RPG::GameCore { class TaskContext; }

#define IPBMNDDMDAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1650F3B0)
#define IPBMNDDMDAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1650F3E0)

inline static constexpr unsigned int IPBMNDDMDAE_TypeDefinitionIndex = 52441;

	class IPBMNDDMDAE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCSetFrozen* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCSetFrozen*))((::PBYTE)hIl2Cpp + IPBMNDDMDAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBMNDDMDAE_ONTASKBEGIN_OFFSET))(this);
		}

	};
