#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchMascotEnableCameraLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define NMNOGLLBANJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC93DC0)
#define NMNOGLLBANJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC93DF0)

inline static constexpr unsigned int NMNOGLLBANJ_TypeDefinitionIndex = 58747;

	class NMNOGLLBANJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotEnableCameraLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotEnableCameraLookAt*))((::PBYTE)hIl2Cpp + NMNOGLLBANJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNOGLLBANJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
