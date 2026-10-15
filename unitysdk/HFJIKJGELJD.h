#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunEnableBulletTime; }

#define HFJIKJGELJD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C70AB0)
#define HFJIKJGELJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C70AE0)

inline static constexpr unsigned int HFJIKJGELJD_TypeDefinitionIndex = 58953;

	class HFJIKJGELJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunEnableBulletTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunEnableBulletTime*))((::PBYTE)hIl2Cpp + HFJIKJGELJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJIKJGELJD_ONTASKBEGIN_OFFSET))(this);
		}

	};
