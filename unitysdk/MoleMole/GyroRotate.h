#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GyroBaseMono.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_GYROROTATE_DEMJMKAHEME_OFFSET UNITYSDK_OFFSET(0x1EF11970)
#define MOLEMOLE_GYROROTATE_DGOIOMGELKB_OFFSET UNITYSDK_OFFSET(0x1EF11090)
#define MOLEMOLE_GYROROTATE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF11040)
#define MOLEMOLE_GYROROTATE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EF10FA0)
#define MOLEMOLE_GYROROTATE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EF10D00)
#define MOLEMOLE_GYROROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF118F0)

namespace MoleMole
{
	inline static constexpr unsigned int GyroRotate_TypeDefinitionIndex = 8595;

	class GyroRotate : public ::GyroBaseMono
	{
	public:
		::UnityEngine::Quaternion EADHGNOGBHN; // 0x60
		::UnityEngine::Vector3 AJAMLFPABFA; // 0x70
		::UnityEngine::Quaternion JHNHKCAPEHB; // 0x7C
		::UnityEngine::Vector3 HONCNKGHPCG; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_ONDISABLE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_FIXEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 DEMJMKAHEME(::UnityEngine::Quaternion BFBELMDIAHI)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_DEMJMKAHEME_OFFSET))(this, BFBELMDIAHI);
		}

		::System::Void DGOIOMGELKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_DGOIOMGELKB_OFFSET))(this);
		}
	};
}
