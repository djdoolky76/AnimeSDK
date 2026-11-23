#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::SpringBone { class SpringColliderManager; }
namespace ABC::SpringBone { class SpringManager; }

#define ABC_SPRINGBONE_TEMPRIDECONTROLLER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x220B440)
#define ABC_SPRINGBONE_TEMPRIDECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::SpringBone
{
	inline static constexpr unsigned int TempRideController_TypeDefinitionIndex = 9060;

	class TempRideController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ABC::SpringBone::SpringManager* springMangerRef; // 0x20
		::ABC::SpringBone::SpringColliderManager* colliderManagerRef; // 0x28
		::System::Boolean resetColliders; // 0x30

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_TEMPRIDECONTROLLER_E02954280801633F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_TEMPRIDECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
