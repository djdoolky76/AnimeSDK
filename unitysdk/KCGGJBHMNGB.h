#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFiveDimIgnoreCollisionTarget; }
namespace RPG::GameCore { class TaskContext; }

#define KCGGJBHMNGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB335ED0)
#define KCGGJBHMNGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB335F00)

inline static constexpr unsigned int KCGGJBHMNGB_TypeDefinitionIndex = 52890;

	class KCGGJBHMNGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFiveDimIgnoreCollisionTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFiveDimIgnoreCollisionTarget*))((::PBYTE)hIl2Cpp + KCGGJBHMNGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGJBHMNGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
