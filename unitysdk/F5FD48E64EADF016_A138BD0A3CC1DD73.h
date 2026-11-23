#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define F5FD48E64EADF016_A138BD0A3CC1DD73_F7F458730754B685_OFFSET UNITYSDK_OFFSET(0x2877D00)

inline static constexpr unsigned int F5FD48E64EADF016_A138BD0A3CC1DD73_TypeDefinitionIndex = 16098;

struct alignas(4) F5FD48E64EADF016_A138BD0A3CC1DD73
{
	::UnityEngine::Vector3 EB211B01816ACA79; // 0x10
	::UnityEngine::Quaternion A0556B8B541B6D55; // 0x1C
	::UnityEngine::Vector3 EAA16853DB5FF3CD; // 0x2C

	::System::Boolean F7F458730754B685(::UnityEngine::Transform* E241744D4B5D3F18)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + F5FD48E64EADF016_A138BD0A3CC1DD73_F7F458730754B685_OFFSET))(this, E241744D4B5D3F18);
	}
};
