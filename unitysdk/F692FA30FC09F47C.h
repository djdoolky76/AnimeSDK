#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define F692FA30FC09F47C_EE9561EB1FBE57E1_OFFSET UNITYSDK_OFFSET(0x3808730)
#define F692FA30FC09F47C__CTOR_OFFSET UNITYSDK_OFFSET(0x38087E0)

inline static constexpr unsigned int F692FA30FC09F47C_TypeDefinitionIndex = 17834;

struct alignas(8) F692FA30FC09F47C
{
	::UnityEngine::Vector3 EB211B01816ACA79; // 0x10
	::UnityEngine::Quaternion A0556B8B541B6D55; // 0x1C
	::UnityEngine::Vector3 BAC5F8FDF24B54F8; // 0x2C
	::UnityEngine::Vector3 B09423C7B6B09466; // 0x38
	::UnityEngine::Quaternion A85491B05B94916F; // 0x44
	::System::Byte _padding0[0x4];
	::UnityEngine::Transform* EFE497ABF6BF98D8; // 0x58

	::System::Void _ctor(::UnityEngine::Transform* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + F692FA30FC09F47C__CTOR_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void EE9561EB1FBE57E1(::UnityEngine::Transform* BEEE7A5A60941632, ::System::Boolean F2DB096CD01F9601)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + F692FA30FC09F47C_EE9561EB1FBE57E1_OFFSET))(this, BEEE7A5A60941632, F2DB096CD01F9601);
	}
};
