#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPickupBullet; }

#define HEOMLFAFILL_CTOR_OFFSET UNITYSDK_OFFSET(0x16BA8160)
#define HEOMLFAFILL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BA8190)

inline static constexpr unsigned int HEOMLFAFILL_TypeDefinitionIndex = 60233;

	class HEOMLFAFILL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroPickupBullet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroPickupBullet*))((::PBYTE)hIl2Cpp + HEOMLFAFILL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOMLFAFILL_ONTASKBEGIN_OFFSET))(this);
		}

	};
