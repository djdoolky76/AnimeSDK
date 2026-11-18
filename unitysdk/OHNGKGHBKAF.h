#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NNEBEOAFJLE;
namespace UnityEngine { class Transform; }

#define OHNGKGHBKAF_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x811980)
#define OHNGKGHBKAF_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x73C910)
#define OHNGKGHBKAF_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x8118F0)
#define OHNGKGHBKAF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x8118A0)

inline static constexpr unsigned int OHNGKGHBKAF_TypeDefinitionIndex = 69617;

struct alignas(8) OHNGKGHBKAF
{
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x10
	::System::Boolean DJCKLFKLMOO; // 0x18

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNGKGHBKAF_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNGKGHBKAF_LBCBPEJEHNB_OFFSET))(this);
	}

	::UnityEngine::Quaternion INMGLPLEEIK()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNGKGHBKAF_INMGLPLEEIK_OFFSET))(this);
	}

	::System::Boolean EDEFLFIKNFK(::NNEBEOAFJLE* MBADBPHJMBJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::NNEBEOAFJLE*))((::PBYTE)hIl2Cpp + OHNGKGHBKAF_EDEFLFIKNFK_OFFSET))(this, MBADBPHJMBJ);
	}
};
