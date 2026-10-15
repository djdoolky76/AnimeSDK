#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFloorCustomFloat; }
namespace RPG::GameCore { class TaskContext; }

#define DFFJHNJMKPF_CTOR_OFFSET UNITYSDK_OFFSET(0xE8271D0)
#define DFFJHNJMKPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE827200)

inline static constexpr unsigned int DFFJHNJMKPF_TypeDefinitionIndex = 53232;

	class DFFJHNJMKPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomFloat*))((::PBYTE)hIl2Cpp + DFFJHNJMKPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFJHNJMKPF_ONTASKBEGIN_OFFSET))(this);
		}

	};
