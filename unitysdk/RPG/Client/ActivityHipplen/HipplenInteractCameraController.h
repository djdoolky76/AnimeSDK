#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMainController; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_BFBAJHFIMKK_OFFSET UNITYSDK_OFFSET(0xC42C570)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xC42CDE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC410740)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_EABCMBNMECP_OFFSET UNITYSDK_OFFSET(0xC42C040)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_FKEBNJPOPCG_OFFSET UNITYSDK_OFFSET(0xC42C290)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_IBFBEADFGMO_OFFSET UNITYSDK_OFFSET(0xC42C690)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC40FDE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_KCKLEAHAKGP_OFFSET UNITYSDK_OFFSET(0xC42CA40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_KCNGCNNDKMO_OFFSET UNITYSDK_OFFSET(0xC42C400)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC42BF70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_MFNBDDBJGNE_OFFSET UNITYSDK_OFFSET(0xC42CD80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_PGALKHJDOEE_OFFSET UNITYSDK_OFFSET(0xC42CCE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0xC412F50)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenInteractCameraController_TypeDefinitionIndex = 75577;

	class HipplenInteractCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single AKAJAJDNIOP; // 0x18
		::System::Single DBCBACNBGPD; // 0x1C
		::UnityEngine::Transform* KHPMDEJPJGA; // 0x20
		::System::Nullable_1<::UnityEngine::Vector2> OIPCDKEFHHN; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Quaternion AAMLGAMNAIF; // 0x34
		::UnityEngine::Vector2 _CamRotatorMin; // 0x44
		::UnityEngine::Vector2 _CamRotatorMax; // 0x4C
		::UnityEngine::Vector2 _Speed; // 0x54
		::System::Single _Sensitivity; // 0x5C
		::System::Single _ControllerSpeed; // 0x60
		::System::Single _ControllerSensitivity; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityHipplen::ActivityHipplenMainController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenMainController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void FKEBNJPOPCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_FKEBNJPOPCG_OFFSET))(this);
		}

		::System::Void KCNGCNNDKMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_KCNGCNNDKMO_OFFSET))(this);
		}

		::System::Void EABCMBNMECP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_EABCMBNMECP_OFFSET))(this);
		}

		::System::Void BFBAJHFIMKK(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_BFBAJHFIMKK_OFFSET))(this, a1);
		}

		::System::Void IBFBEADFGMO(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_IBFBEADFGMO_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion KCKLEAHAKGP(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_KCKLEAHAKGP_OFFSET))(this, a1);
		}

		::System::Single PGALKHJDOEE(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_PGALKHJDOEE_OFFSET))(this, a1);
		}

		::System::Void MFNBDDBJGNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENINTERACTCAMERACONTROLLER_MFNBDDBJGNE_OFFSET))(this, a1);
		}

	};
}
