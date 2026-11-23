#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RayfireCombine; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RAYFIRE_RAYFIRECOMBINE_ADA1130C8EF94450_E0B562434338CE00_OFFSET UNITYSDK_OFFSET(0x2978000)
#define RAYFIRE_RAYFIRECOMBINE_ADA1130C8EF94450__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireCombine_ADA1130C8EF94450_TypeDefinitionIndex = 15485;

	class RayfireCombine_ADA1130C8EF94450 : public ::System::Object
	{
	public:
		::RayFire::RayfireCombine* A544919C800E2923; // 0x10
		::System::Int32 B8A196AEAF73E28B; // 0x18
		::System::Byte _padding0[0x4];
		::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* F422651CC4956382; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_ADA1130C8EF94450__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 E0B562434338CE00(::UnityEngine::Vector3 BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_ADA1130C8EF94450_E0B562434338CE00_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
