#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIFOLLOWGYRO_AWAKE_OFFSET UNITYSDK_OFFSET(0xEE5C400)
#define RPG_CLIENT_UIFOLLOWGYRO_CCTOR_OFFSET UNITYSDK_OFFSET(0xEE5D360)
#define RPG_CLIENT_UIFOLLOWGYRO_CTOR_OFFSET UNITYSDK_OFFSET(0xEE5D2B0)
#define RPG_CLIENT_UIFOLLOWGYRO_DEBUGDISABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xEE5CFF0)
#define RPG_CLIENT_UIFOLLOWGYRO_DEBUGENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xEE5CFB0)
#define RPG_CLIENT_UIFOLLOWGYRO_GET_MAXOFFSET_OFFSET UNITYSDK_OFFSET(0xEE5D2A0)
#define RPG_CLIENT_UIFOLLOWGYRO_GET_MINOFFSET_OFFSET UNITYSDK_OFFSET(0xEE5D290)
#define RPG_CLIENT_UIFOLLOWGYRO_ISUSINGGYRO_OFFSET UNITYSDK_OFFSET(0xEE5C670)
#define RPG_CLIENT_UIFOLLOWGYRO_SETMAXOFFSET_OFFSET UNITYSDK_OFFSET(0xEE5CF40)
#define RPG_CLIENT_UIFOLLOWGYRO_UPDATE_OFFSET UNITYSDK_OFFSET(0xEE5C4C0)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0xEE5D130)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRANGEDRATIO_OFFSET UNITYSDK_OFFSET(0xEE5D030)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYGYRO_OFFSET UNITYSDK_OFFSET(0xEE5C770)
#define RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xEE5C8E0)
#define RPG_CLIENT_UIFOLLOWGYRO__GETROTATIONRANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0xEE5D1E0)
#define RPG_CLIENT_UIFOLLOWGYRO__UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0xEE5C9A0)
#define RPG_CLIENT_UIFOLLOWGYRO__UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0xEE5CCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFollowGyro_TypeDefinitionIndex = 71053;

	class UIFollowGyro : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnableGyro; // 0x18
		::System::Boolean EnableMouse; // 0x19
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 _MinOffset; // 0x1C
		::UnityEngine::Vector2 _MaxOffset; // 0x24
		::System::Single _GyroOffsetMultiplier; // 0x2C
		::System::Single _RandomRange; // 0x30
		::UnityEngine::Vector2 _GravityXRange; // 0x34
		::UnityEngine::Vector2 _GravityYRange; // 0x3C
		::System::Single _PositionSmoothTime; // 0x44
		::System::Boolean EnableRotation; // 0x48
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 _MinRotation; // 0x4C
		::UnityEngine::Vector2 _MaxRotation; // 0x54
		::System::Single _RotationGyroMultiplier; // 0x5C
		::System::Single _RotationRandomRange; // 0x60
		::UnityEngine::Vector2 _RotationGravityXRange; // 0x64
		::UnityEngine::Vector2 _RotationGravityYRange; // 0x6C
		::System::Single _RotationSmoothSpeed; // 0x74
		::UnityEngine::RectTransform* _Root; // 0x78
		::UnityEngine::Vector2 _DefaultRatio; // 0x80
		::UnityEngine::Vector2 _TargetRatio; // 0x88
		::System::Single _RandomOffset; // 0x90
		::System::Single _RotationRandomOffset; // 0x94
		static ::System::Single* StaticGet__ZeroRatio()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "UIFollowGyro")->GetStaticField(0xDCB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_UPDATE_OFFSET))(this);
		}

		::System::Void SetMaxOffset(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_SETMAXOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Void DebugEnableUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_DEBUGENABLEUPDATE_OFFSET))(this);
		}

		::System::Void DebugDisableUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_DEBUGDISABLEUPDATE_OFFSET))(this);
		}

		::System::Boolean IsUsingGyro()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_ISUSINGGYRO_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetRatioByGyro(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYGYRO_OFFSET))(this, a1, a2);
		}

		::System::Single _GetRangedRatio(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETRANGEDRATIO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 _GetRatioByScreenPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETRATIOBYSCREENPOSITION_OFFSET))(this, a1);
		}

		::System::Void _UpdatePosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__UPDATEPOSITION_OFFSET))(this, a1);
		}

		::System::Void _UpdateRotation(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__UPDATEROTATION_OFFSET))(this, a1);
		}

		::System::Single _GetRandomOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETRANDOMOFFSET_OFFSET))(this);
		}

		::System::Single _GetRotationRandomOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO__GETROTATIONRANDOMOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_MinOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_GET_MINOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_MaxOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOWGYRO_GET_MAXOFFSET_OFFSET))(this);
		}

	};
}
