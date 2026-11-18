#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_MONOLOGICMOVEMENT_FPJPCJPOFCE_OFFSET UNITYSDK_OFFSET(0x18102BD0)
#define MOLEMOLE_MONOLOGICMOVEMENT_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x18102CD0)
#define MOLEMOLE_MONOLOGICMOVEMENT_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x18102CE0)
#define MOLEMOLE_MONOLOGICMOVEMENT_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x18102B80)
#define MOLEMOLE_MONOLOGICMOVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18102DD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLogicMovement_TypeDefinitionIndex = 44578;

	class MonoLogicMovement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Battle::Entity* FEFFFPGCIIO; // 0x18
		::PJGGDJJPPJP* NJBINFPCGEL; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT__CTOR_OFFSET))(this);
		}

		::System::Void set_Owner(::MoleMole::Battle::Entity* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_SET_OWNER_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::Battle::Entity* get_Owner()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_GET_OWNER_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* GMKILPBDCFN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_ONCOLLISIONENTER_OFFSET))(this, GMKILPBDCFN);
		}

		::System::Void FPJPCJPOFCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGICMOVEMENT_FPJPCJPOFCE_OFFSET))(this);
		}
	};
}
