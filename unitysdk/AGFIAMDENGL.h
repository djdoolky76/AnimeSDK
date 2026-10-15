#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunFire; }

#define AGFIAMDENGL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF29DA0)
#define AGFIAMDENGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF29DD0)

	class AGFIAMDENGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunFire* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunFire*))((::PBYTE)hIl2Cpp + AGFIAMDENGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFIAMDENGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
