#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ALDJBPDKFCH.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EJHHPFFPFOJ;
namespace UnityEngine { class Transform; }

#define FNEDFAKBNBC_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x700580)
#define FNEDFAKBNBC_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x700460)
#define FNEDFAKBNBC_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x700310)
#define FNEDFAKBNBC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7003C0)

inline static constexpr unsigned int FNEDFAKBNBC_TypeDefinitionIndex = 57935;

struct alignas(8) FNEDFAKBNBC
{
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x10
	::EJHHPFFPFOJ* MNOGECBMLOL; // 0x18
	::System::Boolean DJCKLFKLMOO; // 0x20
	::System::Byte _padding0[0x3];
	::Foundation::Unreal::FTransform NHKKLBFLNPB; // 0x24

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEDFAKBNBC_LBCBPEJEHNB_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEDFAKBNBC_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Quaternion INMGLPLEEIK()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEDFAKBNBC_INMGLPLEEIK_OFFSET))(this);
	}

	::System::Boolean EDEFLFIKNFK(::ALDJBPDKFCH DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::ALDJBPDKFCH))((::PBYTE)hIl2Cpp + FNEDFAKBNBC_EDEFLFIKNFK_OFFSET))(this, DFMKILICPFB);
	}
};
