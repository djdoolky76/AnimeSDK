#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollisions.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/MoleMole/Vehicle/VehicleModelNodes.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MBGJEDODLED.h"

class CIFCJFHMGBB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Vehicle { class VehicleCollider; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace MoleMole::Vehicle { class VehicleInputHandle; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Rigidbody; }

#define MOLEMOLE_VEHICLE_VEHICLEMONO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13C10B90)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_CGPIBDBDKCB_OFFSET UNITYSDK_OFFSET(0x13C11C00)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_ENTERVOLUME_OFFSET UNITYSDK_OFFSET(0x13C11F10)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_EXCLUDESOUNDOBJECT_OFFSET UNITYSDK_OFFSET(0x13C12050)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_EXITVOLUME_OFFSET UNITYSDK_OFFSET(0x13C11FC0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_GETHITCOUNT_OFFSET UNITYSDK_OFFSET(0x13C10AC0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_GET_HITCOUNT_OFFSET UNITYSDK_OFFSET(0x13C10A60)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_GET_PREVIEW_OFFSET UNITYSDK_OFFSET(0x13C10830)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_GET_VEHICLEUNIT_OFFSET UNITYSDK_OFFSET(0x13C10B20)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_INITENTITY_OFFSET UNITYSDK_OFFSET(0x13C117F0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13C11530)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_NDOHLBDCEIF_OFFSET UNITYSDK_OFFSET(0x13C109B0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_ONTIMESCALECHANGED_OFFSET UNITYSDK_OFFSET(0x13C122A0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x13C117A0)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_OVERRIDEMAXSPEED_OFFSET UNITYSDK_OFFSET(0x13C12110)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_STARTRUN_OFFSET UNITYSDK_OFFSET(0x13C11E10)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_START_OFFSET UNITYSDK_OFFSET(0x13C10B30)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_TRYGETVEHICLECOMPONENT_OFFSET UNITYSDK_OFFSET(0x13C12560)
#define MOLEMOLE_VEHICLE_VEHICLEMONO_UPDATE_OFFSET UNITYSDK_OFFSET(0x13C10D60)
#define MOLEMOLE_VEHICLE_VEHICLEMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x13C12660)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleMono_TypeDefinitionIndex = 85356;

	class VehicleMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean drawSteer; // 0x18
		::System::Boolean drawRoad; // 0x19
		::System::Boolean drawAutomatic; // 0x1A
		::System::Byte _padding0[0x1];
		::UnityEngine::Color trailColor; // 0x1C
		::System::Single trailDuration; // 0x2C
		::System::Boolean overrideInput; // 0x30
		::System::Byte _padding1[0x3];
		::MoleMole::Vehicle::VehicleControlInput configInput; // 0x34
		::System::Boolean _isAutoDrive; // 0x40
		::System::Byte _padding2[0x7];
		::MoleMole::Vehicle::VehicleInputHandle* inputHandle; // 0x48
		::UnityEngine::Animator* driverAnimator; // 0x50
		::UnityEngine::Animator* vehicleAnimator; // 0x58
		::MoleMole::Vehicle::VehicleCollisions collisions; // 0x60
		::MoleMole::Vehicle::VehicleModelNodes modelNodes; // 0x70
		::MoleMole::Vehicle::VehicleConfig* config; // 0x80
		::Il2CppArray<::System::Object*>* AnimatorStateLength; // 0x88
		::CIFCJFHMGBB* CCOAIBFOFPE; // 0x90
		::System::Boolean MLDANCGPKPG; // 0x98
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 KIJEOOMELGM; // 0x9C
		::System::Collections::Generic::HashSet_1<::MoleMole::Vehicle::VehicleCollider*>* APMOHLLCCIA; // 0xA8
		::Il2CppArray<::UnityEngine::Rigidbody*>* FIMDPDJNGNA; // 0xB0
		::System::Boolean _isStarted; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO__CTOR_OFFSET))(this);
		}

		::CIFCJFHMGBB* get_Preview()
		{
			return ((::CIFCJFHMGBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_GET_PREVIEW_OFFSET))(this);
		}

		::System::Int32 get_HitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_GET_HITCOUNT_OFFSET))(this);
		}

		::CIFCJFHMGBB* get_VehicleUnit()
		{
			return ((::CIFCJFHMGBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_GET_VEHICLEUNIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_ONVALIDATE_OFFSET))(this);
		}

		::System::Void InitEntity(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_INITENTITY_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void StartRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_STARTRUN_OFFSET))(this);
		}

		::System::Void EnterVolume(::MoleMole::Vehicle::VehicleCollider* GFLADDDFLAC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_ENTERVOLUME_OFFSET))(this, GFLADDDFLAC);
		}

		::System::Void ExitVolume(::MoleMole::Vehicle::VehicleCollider* GFLADDDFLAC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_EXITVOLUME_OFFSET))(this, GFLADDDFLAC);
		}

		::System::Void ExcludeSoundObject(::MoleMole::Vehicle::VehicleCollider* CHIFPJGLFPK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_EXCLUDESOUNDOBJECT_OFFSET))(this, CHIFPJGLFPK);
		}

		::System::Void OverrideMaxSpeed(::System::Single ENONGEJAKOP, ::System::Single KLOAMEFPJJJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_OVERRIDEMAXSPEED_OFFSET))(this, ENONGEJAKOP, KLOAMEFPJJJ);
		}

		::System::Void OnTimeScaleChanged(::System::Single CAOPDAMCNCN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_ONTIMESCALECHANGED_OFFSET))(this, CAOPDAMCNCN);
		}

		static ::MoleMole::Vehicle::VehicleMono* TryGetVehicleComponent(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::MoleMole::Vehicle::VehicleMono*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_TRYGETVEHICLECOMPONENT_OFFSET))(KECKGDFIALJ);
		}

		::System::Int32 GetHitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_GETHITCOUNT_OFFSET))(this);
		}

		::System::Void CGPIBDBDKCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_CGPIBDBDKCB_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_BBOMJDBNHIC_OFFSET))(this);
		}

		::MBGJEDODLED NDOHLBDCEIF()
		{
			return ((::MBGJEDODLED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEMONO_NDOHLBDCEIF_OFFSET))(this);
		}
	};
}
