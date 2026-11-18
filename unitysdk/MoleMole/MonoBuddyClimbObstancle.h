#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_HMNNFPJAHMI_OFFSET UNITYSDK_OFFSET(0x10431060)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_IJNDGMPHHJP_OFFSET UNITYSDK_OFFSET(0x10430B50)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_IKOJFLNKIDG_OFFSET UNITYSDK_OFFSET(0x10431140)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_NBFDPKPDADC_OFFSET UNITYSDK_OFFSET(0x10431390)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10430240)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x104300F0)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x10430390)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_START_OFFSET UNITYSDK_OFFSET(0x1042FF80)
#define MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x104314B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuddyClimbObstancle_TypeDefinitionIndex = 70422;

	class MonoBuddyClimbObstancle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single rayLength; // 0x18
		::System::Single stepHeight; // 0x1C
		::System::Single stepLow; // 0x20
		::System::Single stepSpeed; // 0x24
		::System::Single climbTimer; // 0x28
		::UnityEngine::LayerMask FBNGKPGLADH; // 0x2C
		::Il2CppArray<::UnityEngine::RaycastHit>* DGDEFOCBJAC; // 0x30
		::System::Boolean KLGOLNGGKNM; // 0x38
		::System::Byte _padding0[0x7];
		::MoleMole::Battle::Entity* CJHKKDKFGJE; // 0x40
		::System::Single HACJFKBLODH; // 0x48
		::System::Single MGFBHAFEHHB; // 0x4C
		::System::Single GLGOOKBDEOK; // 0x50
		::System::Boolean isOpen; // 0x54
		::System::Byte _padding1[0x3];
		::UnityEngine::Rigidbody* CFCDGNIJMNL; // 0x58
		::System::Single MOCBLOAHMBC; // 0x60
		::System::Single NACGECEJGOE; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void HMNNFPJAHMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_HMNNFPJAHMI_OFFSET))(this);
		}

		::System::Void IKOJFLNKIDG(::System::Single EJAOAGGJHHA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_IKOJFLNKIDG_OFFSET))(this, EJAOAGGJHHA);
		}

		::System::Void IJNDGMPHHJP(::UnityEngine::Vector3 PDODAFIEJJO, ::UnityEngine::Vector3 KGMLKDGAJGN, ::System::Single& PMEHNJABPAN, ::UnityEngine::BoxCollider*& LMPJGPGDDPJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::BoxCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_IJNDGMPHHJP_OFFSET))(this, PDODAFIEJJO, KGMLKDGAJGN, PMEHNJABPAN, LMPJGPGDDPJ);
		}

		::System::Void NBFDPKPDADC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYCLIMBOBSTANCLE_NBFDPKPDADC_OFFSET))(this);
		}
	};
}
