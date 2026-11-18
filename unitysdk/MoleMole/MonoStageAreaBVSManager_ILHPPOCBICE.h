#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_ILHPPOCBICE_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x12B81640)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_ILHPPOCBICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B81370)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageAreaBVSManager_ILHPPOCBICE_TypeDefinitionIndex = 88796;

	class MonoStageAreaBVSManager_ILHPPOCBICE : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion MAFMIAOJIGB; // 0x10
		::UnityEngine::Vector3 CIEOCEADIJB; // 0x20
		::UnityEngine::Vector3 OHOGDOMNHNK; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* LNEEMAGIHLB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_ILHPPOCBICE__CTOR_OFFSET))(this, LNEEMAGIHLB);
		}

		::System::Boolean COHDMPBBMPO(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_ILHPPOCBICE_COHDMPBBMPO_OFFSET))(this, CKPGOKHECCH);
		}
	};
}
