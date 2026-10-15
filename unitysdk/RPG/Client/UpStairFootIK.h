#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UpStairFootIK_LBIHHAKDFOK.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AttachPointMapping; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UPSTAIRFOOTIK_CBJAMOIDDFD_OFFSET UNITYSDK_OFFSET(0xE4153E0)
#define RPG_CLIENT_UPSTAIRFOOTIK_CTOR_OFFSET UNITYSDK_OFFSET(0xE415990)
#define RPG_CLIENT_UPSTAIRFOOTIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xE414110)
#define RPG_CLIENT_UPSTAIRFOOTIK_LIBMOGKALFC_OFFSET UNITYSDK_OFFSET(0xE415620)
#define RPG_CLIENT_UPSTAIRFOOTIK_NCJGFONNIDL_OFFSET UNITYSDK_OFFSET(0xE414F00)
#define RPG_CLIENT_UPSTAIRFOOTIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0xE414940)
#define RPG_CLIENT_UPSTAIRFOOTIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xE414A60)
#define RPG_CLIENT_UPSTAIRFOOTIK_RESETUPSTAIR_OFFSET UNITYSDK_OFFSET(0xE4140C0)
#define RPG_CLIENT_UPSTAIRFOOTIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xE414170)
#define RPG_CLIENT_UPSTAIRFOOTIK_SETUPUPSTAIR_OFFSET UNITYSDK_OFFSET(0xE414040)

namespace RPG::Client
{
	inline static constexpr unsigned int UpStairFootIK_TypeDefinitionIndex = 68499;

	class UpStairFootIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single fadeInTime; // 0x18
		::System::Single fadeOutTime; // 0x1C
		::System::Boolean forceRotateFoot; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single footRotateSpeed; // 0x24
		::System::Single footRotationLerpSpeed; // 0x28
		::UnityEngine::LayerMask groundLayer; // 0x2C
		::System::Single raycastHeightOffset; // 0x30
		::System::Single raycastDistance; // 0x34
		::System::Single toeRaycastForwardOffset; // 0x38
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* leftFoot; // 0x40
		::UnityEngine::Transform* rightFoot; // 0x48
		::RPG::Client::UpStairFootIK_LBIHHAKDFOK BCIGLMIFAGH; // 0x50
		::RPG::Client::UpStairFootIK_LBIHHAKDFOK CALBKJHDIJK; // 0x70
		::UnityEngine::Quaternion ECNOFNODAIL; // 0x90
		::UnityEngine::Quaternion DBHDMEHGGKF; // 0xA0
		::System::Boolean AMDJLAFJKFA; // 0xB0
		::System::Byte _padding2[0x3];
		::System::Single CLKJEOCKGKE; // 0xB4
		::System::Single PKAKHOMGDLK; // 0xB8
		::System::Single GLJNEGLADEC; // 0xBC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_CTOR_OFFSET))(this);
		}

		::System::Void SetupUpStair(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_SETUPUPSTAIR_OFFSET))(this, a1, a2);
		}

		::System::Void ResetUpStair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_RESETUPSTAIR_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_PROCESS_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion LIBMOGKALFC(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_LIBMOGKALFC_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Quaternion CBJAMOIDDFD(::RPG::Client::UpStairFootIK_LBIHHAKDFOK a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RPG::Client::UpStairFootIK_LBIHHAKDFOK, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_CBJAMOIDDFD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 NCJGFONNIDL(::RPG::Client::UpStairFootIK_LBIHHAKDFOK a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::UpStairFootIK_LBIHHAKDFOK))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_NCJGFONNIDL_OFFSET))(this, a1);
		}

	};
}
