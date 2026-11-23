#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RAYFIRE_RAYFIRECOMBINE_F5628F8349D4A8A6_A15B9233AEA8D7A9_OFFSET UNITYSDK_OFFSET(0x2977E90)
#define RAYFIRE_RAYFIRECOMBINE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x29782D0)
#define RAYFIRE_RAYFIRECOMBINE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireCombine_F5628F8349D4A8A6_TypeDefinitionIndex = 15484;

	class RayfireCombine_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::RayFire::RayfireCombine_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::RayFire::RayfireCombine_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(RayfireCombine_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>** StaticGet_F632F93CC8DEA2A0()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(RayfireCombine_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 A15B9233AEA8D7A9(::UnityEngine::Vector3 E1B624472530B0E4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_F5628F8349D4A8A6_A15B9233AEA8D7A9_OFFSET))(this, E1B624472530B0E4);
		}
	};
}
