#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EMFPGBMMDFN_EDNDKEPKEJI;
class GOLFABOKKLO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define MOLEMOLE_MONONAVMESHHANDLER_BHFLGDABILC_OFFSET UNITYSDK_OFFSET(0x13EFEA40)
#define MOLEMOLE_MONONAVMESHHANDLER_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0x13EFE460)
#define MOLEMOLE_MONONAVMESHHANDLER_FIPGHAFKKJM_OFFSET UNITYSDK_OFFSET(0x13EFE900)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_DEBUGPATHROOT_OFFSET UNITYSDK_OFFSET(0x13EFE340)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_MOVEPATHDEBUGGER_OFFSET UNITYSDK_OFFSET(0x13EFE0E0)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_NAVMESHHELPER_OFFSET UNITYSDK_OFFSET(0x13EFE350)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x13EFE330)
#define MOLEMOLE_MONONAVMESHHANDLER_IBCCPHEBACG_OFFSET UNITYSDK_OFFSET(0x13EFE8C0)
#define MOLEMOLE_MONONAVMESHHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13EFE5E0)
#define MOLEMOLE_MONONAVMESHHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EFE720)
#define MOLEMOLE_MONONAVMESHHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13EFE7C0)
#define MOLEMOLE_MONONAVMESHHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13EFE780)
#define MOLEMOLE_MONONAVMESHHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EFE6B0)
#define MOLEMOLE_MONONAVMESHHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFE810)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNavmeshHandler_TypeDefinitionIndex = 56918;

	class MonoNavmeshHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AI::NavMeshAgent* navMeshAgent; // 0x18
		::UnityEngine::Transform* target; // 0x20
		::System::Single colliderRadius; // 0x28
		::System::Boolean withColliderOffset; // 0x2C
		::System::Boolean autoCalculate; // 0x2D
		::System::Byte _padding0[0x2];
		::EMFPGBMMDFN_EDNDKEPKEJI* JKJOJNCPAOK; // 0x30
		::System::Int32 cornersLength; // 0x38
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* GGIKBFFAJEM; // 0x48
		::UnityEngine::Transform* debugPathRoot; // 0x50
		::GOLFABOKKLO* BHGPAOHFDHP; // 0x58
		::System::Boolean LMDPLJPDBIA; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER__CTOR_OFFSET))(this);
		}

		::EMFPGBMMDFN_EDNDKEPKEJI* get_movePathDebugger()
		{
			return ((::EMFPGBMMDFN_EDNDKEPKEJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_MOVEPATHDEBUGGER_OFFSET))(this);
		}

		::System::Int32 get_PathIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_PATHINDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_DebugPathRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_DEBUGPATHROOT_OFFSET))(this);
		}

		::GOLFABOKKLO* get_navmeshHelper()
		{
			return ((::GOLFABOKKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_NAVMESHHELPER_OFFSET))(this);
		}

		::System::Void CalculatePath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_CALCULATEPATH_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IBCCPHEBACG()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_IBCCPHEBACG_OFFSET))(this);
		}

		::System::Void FIPGHAFKKJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_FIPGHAFKKJM_OFFSET))(this);
		}

		::System::Void BHFLGDABILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_BHFLGDABILC_OFFSET))(this);
		}
	};
}
