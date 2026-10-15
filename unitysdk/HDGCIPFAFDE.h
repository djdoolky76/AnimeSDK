#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddReShaSwitchProp; }
namespace RPG::GameCore { class TaskContext; }

#define HDGCIPFAFDE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C335B0)
#define HDGCIPFAFDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C335E0)

inline static constexpr unsigned int HDGCIPFAFDE_TypeDefinitionIndex = 52328;

	class HDGCIPFAFDE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddReShaSwitchProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddReShaSwitchProp*))((::PBYTE)hIl2Cpp + HDGCIPFAFDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGCIPFAFDE_ONTASKBEGIN_OFFSET))(this);
		}

	};
