#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NNEBEOAFJLE;
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace UnityEngine { class Transform; }

#define DEKNDDBDICM_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x73C750)
#define DEKNDDBDICM_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x73C910)
#define DEKNDDBDICM_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x73C7B0)
#define DEKNDDBDICM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x73C760)
#define DEKNDDBDICM_PENDMLPCMKB_OFFSET UNITYSDK_OFFSET(0x147C8210)

inline static constexpr unsigned int DEKNDDBDICM_TypeDefinitionIndex = 58222;

struct alignas(8) DEKNDDBDICM
{
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x10
	::System::Boolean DJCKLFKLMOO; // 0x18

	::System::Boolean EDEFLFIKNFK(::NNEBEOAFJLE* MBADBPHJMBJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::NNEBEOAFJLE*))((::PBYTE)hIl2Cpp + DEKNDDBDICM_EDEFLFIKNFK_OFFSET))(this, MBADBPHJMBJ);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKNDDBDICM_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::MoleMole::Cameras::CameraDataAccessor* PENDMLPCMKB()
	{
		return ((::MoleMole::Cameras::CameraDataAccessor*(*)())((::PBYTE)hIl2Cpp + DEKNDDBDICM_PENDMLPCMKB_OFFSET))();
	}

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKNDDBDICM_LBCBPEJEHNB_OFFSET))(this);
	}

	::UnityEngine::Quaternion INMGLPLEEIK()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKNDDBDICM_INMGLPLEEIK_OFFSET))(this);
	}
};
