#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_MONOPARTYROTATEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x139F78B0)
#define MOLEMOLE_MONOPARTYROTATEOBJ_CALCURROTVALUE_OFFSET UNITYSDK_OFFSET(0x139F7BA0)
#define MOLEMOLE_MONOPARTYROTATEOBJ_EGNLNKOEJJH_OFFSET UNITYSDK_OFFSET(0x139F8010)
#define MOLEMOLE_MONOPARTYROTATEOBJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x139F7A40)
#define MOLEMOLE_MONOPARTYROTATEOBJ_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x139F7C10)
#define MOLEMOLE_MONOPARTYROTATEOBJ_SYNCROTATION_OFFSET UNITYSDK_OFFSET(0x139F7900)
#define MOLEMOLE_MONOPARTYROTATEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x139F7F60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartyRotateObj_TypeDefinitionIndex = 77296;

	class MonoPartyRotateObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Single rotateSpeedPerS; // 0x40
		::System::Single startRot; // 0x44
		::RootMotion::Axis rotateAxis; // 0x48
		::UnityEngine::Vector3 GJNLCLDFFIN; // 0x4C
		::UnityEngine::Rigidbody* CFCDGNIJMNL; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void SyncRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_SYNCROTATION_OFFSET))(this);
		}

		::System::Void Initialize(::System::Boolean FPAEJJDFHBP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_INITIALIZE_OFFSET))(this, FPAEJJDFHBP);
		}

		::System::Single CalCurRotValue(::System::UInt32 BNNCKJIALIO)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_CALCURROTVALUE_OFFSET))(this, BNNCKJIALIO);
		}

		::System::Void OnDoUpdate(::System::UInt32 BNNCKJIALIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_ONDOUPDATE_OFFSET))(this, BNNCKJIALIO);
		}

		::System::Void EGNLNKOEJJH(::System::UInt32 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYROTATEOBJ_EGNLNKOEJJH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
