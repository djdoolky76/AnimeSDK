#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroActivateBullet; }

#define DDPCCOGIMPM_CTOR_OFFSET UNITYSDK_OFFSET(0xE4F0770)
#define DDPCCOGIMPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4F07A0)

inline static constexpr unsigned int DDPCCOGIMPM_TypeDefinitionIndex = 58952;

	class DDPCCOGIMPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroActivateBullet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroActivateBullet*))((::PBYTE)hIl2Cpp + DDPCCOGIMPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPCCOGIMPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
