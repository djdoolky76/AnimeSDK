#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ANIMTILT_AWAKE_OFFSET UNITYSDK_OFFSET(0x163D53B0)
#define MOLEMOLE_ANIMTILT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x163D53F0)
#define MOLEMOLE_ANIMTILT_NALFDGKEKBK_OFFSET UNITYSDK_OFFSET(0x163D5440)
#define MOLEMOLE_ANIMTILT_SETTILTANGLETARGET_OFFSET UNITYSDK_OFFSET(0x163D58D0)
#define MOLEMOLE_ANIMTILT__CTOR_OFFSET UNITYSDK_OFFSET(0x163D5960)

namespace MoleMole
{
	inline static constexpr unsigned int AnimTilt_TypeDefinitionIndex = 44327;

	class AnimTilt : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsTiltOpen; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single MaxTiltAngle; // 0x1C
		::System::Single ReturnSpeedRate; // 0x20
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* _BoneTiltRoot; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _BoneWeapons; // 0x30
		::System::Single NLDHCMICMKH; // 0x38
		::System::Single ACFOPGEDBHB; // 0x3C
		::System::Int32 BOMIHICFKGA; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetTiltAngleTarget(::System::Single OINIJFOILHG, ::System::Single EHCPOGPDDCP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT_SETTILTANGLETARGET_OFFSET))(this, OINIJFOILHG, EHCPOGPDDCP);
		}

		::System::Void NALFDGKEKBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMTILT_NALFDGKEKBK_OFFSET))(this);
		}
	};
}
