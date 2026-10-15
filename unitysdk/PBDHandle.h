#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LPPIHKNHFGF;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Mesh; }

#define PBDHANDLE_AHICNHPCLNM_OFFSET UNITYSDK_OFFSET(0xBFE4530)
#define PBDHANDLE_APPLYFORCE_OFFSET UNITYSDK_OFFSET(0xBFE4290)
#define PBDHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE4910)
#define PBDHANDLE_EEOPJHCMECI_OFFSET UNITYSDK_OFFSET(0xBFE3650)
#define PBDHANDLE_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0xBFE30A0)
#define PBDHANDLE_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0xBFE2FF0)
#define PBDHANDLE_LNNBMIFDOOH_OFFSET UNITYSDK_OFFSET(0xBFE3A50)
#define PBDHANDLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBFE48A0)
#define PBDHANDLE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xBFE4780)
#define PBDHANDLE_START_OFFSET UNITYSDK_OFFSET(0xBFE3050)
#define PBDHANDLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xBFE3780)

	class PBDHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsAnimated; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single forceMagnitude; // 0x1C
		::System::Single propagationSpeed; // 0x20
		::System::Single baseDamping; // 0x24
		::System::Single dampingIncreaseRate; // 0x28
		::System::Single RecoverRatio; // 0x2C
		::System::Single MinRecover; // 0x30
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Queue_1<::LPPIHKNHFGF*>* MFDNJNNIHLP; // 0x38
		::UnityEngine::Mesh* GELIKHJKMMH; // 0x40
		::UnityEngine::Mesh* POGNHLFFGED; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* NBNAEABBGGB; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BAHIIAGLNCN; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* DKMOBINHMPA; // 0x60
		::Il2CppArray<::UnityEngine::Vector3>* LLAEBOAFDGI; // 0x68
		::System::Int32 ELLCPPLOAHG; // 0x70
		::System::Single AJHHBNJIKEG; // 0x74
		::System::Boolean CGDHNDBBDCH; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_GET_ISREADY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_START_OFFSET))(this);
		}

		::System::Boolean EnsureInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_ENSUREINITIALIZED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_UPDATE_OFFSET))(this);
		}

		::System::Void ApplyForce(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PBDHANDLE_APPLYFORCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AHICNHPCLNM(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PBDHANDLE_AHICNHPCLNM_OFFSET))(this, a1, a2);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void LNNBMIFDOOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_LNNBMIFDOOH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_ONDESTROY_OFFSET))(this);
		}

		static ::System::Single EEOPJHCMECI(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + PBDHANDLE_EEOPJHCMECI_OFFSET))(a1);
		}

	};
