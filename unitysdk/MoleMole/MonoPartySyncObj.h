#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCEDINDKMNM.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOPARTYSYNCOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x13EFEA90)
#define MOLEMOLE_MONOPARTYSYNCOBJ_GETSYNCVAL_OFFSET UNITYSDK_OFFSET(0x13EFEBD0)
#define MOLEMOLE_MONOPARTYSYNCOBJ_SETSYNCVAL_OFFSET UNITYSDK_OFFSET(0x13EFEED0)
#define MOLEMOLE_MONOPARTYSYNCOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFF1C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySyncObj_TypeDefinitionIndex = 80570;

	class MonoPartySyncObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::RootMotion::Axis Axis; // 0x40
		::LCEDINDKMNM CtrlType; // 0x44
		::UnityEngine::Vector3 BDJLLGMFDJN; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSYNCOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSYNCOBJ_AWAKE_OFFSET))(this);
		}

		::System::Single GetSyncVal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSYNCOBJ_GETSYNCVAL_OFFSET))(this);
		}

		::System::Void SetSyncVal(::System::Single GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSYNCOBJ_SETSYNCVAL_OFFSET))(this, GEGOALONGBI);
		}
	};
}
