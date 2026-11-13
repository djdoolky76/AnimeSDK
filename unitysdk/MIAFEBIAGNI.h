#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockAnimatorSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define MIAFEBIAGNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B36CAD0)
#define MIAFEBIAGNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B36CB00)

inline static constexpr unsigned int MIAFEBIAGNI_TypeDefinitionIndex = 56327;

	class MIAFEBIAGNI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockAnimatorSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockAnimatorSpeed*))((::PBYTE)hIl2Cpp + MIAFEBIAGNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFEBIAGNI_ONTASKBEGIN_OFFSET))(this);
		}

	};
