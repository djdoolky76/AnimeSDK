#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockTargetShield; }
namespace RPG::GameCore { class TaskContext; }

#define ABFOCHGMGAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F1A20)
#define ABFOCHGMGAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0F1A50)

inline static constexpr unsigned int ABFOCHGMGAC_TypeDefinitionIndex = 55154;

	class ABFOCHGMGAC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockTargetShield* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockTargetShield*))((::PBYTE)hIl2Cpp + ABFOCHGMGAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFOCHGMGAC_ONTASKBEGIN_OFFSET))(this);
		}

	};
