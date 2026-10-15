#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvRegisterPet; }
namespace RPG::GameCore { class TaskContext; }

#define CMDPFGKEABE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA28FB0)
#define CMDPFGKEABE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA28FE0)

	class CMDPFGKEABE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRegisterPet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRegisterPet*))((::PBYTE)hIl2Cpp + CMDPFGKEABE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDPFGKEABE_ONTASKBEGIN_OFFSET))(this);
		}

	};
