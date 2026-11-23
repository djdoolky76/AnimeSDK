#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }

#define RAYFIRE_RAYFIREDEBRIS_F5628F8349D4A8A6_E54D1B1026C10DD0_OFFSET UNITYSDK_OFFSET(0x2A1BF40)
#define RAYFIRE_RAYFIREDEBRIS_F5628F8349D4A8A6_EBB57C63B8BDBFFE_OFFSET UNITYSDK_OFFSET(0x2A1BEA0)
#define RAYFIRE_RAYFIREDEBRIS_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A1D110)
#define RAYFIRE_RAYFIREDEBRIS_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireDebris_F5628F8349D4A8A6_TypeDefinitionIndex = 15894;

	class RayfireDebris_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::RayFire::RayfireDebris_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::RayFire::RayfireDebris_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(RayfireDebris_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::MeshFilter*, ::System::Boolean>** StaticGet_B55D445D85F5FA3C()
		{
			return (::System::Func_2<::UnityEngine::MeshFilter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RayfireDebris_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::UnityEngine::MeshFilter*, ::UnityEngine::Mesh*>** StaticGet_A49E2C4B5BCE65D3()
		{
			return (::System::Func_2<::UnityEngine::MeshFilter*, ::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(RayfireDebris_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean EBB57C63B8BDBFFE(::UnityEngine::MeshFilter* FA58A598BB9C8553)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_F5628F8349D4A8A6_EBB57C63B8BDBFFE_OFFSET))(this, FA58A598BB9C8553);
		}

		::UnityEngine::Mesh* E54D1B1026C10DD0(::UnityEngine::MeshFilter* FA58A598BB9C8553)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_F5628F8349D4A8A6_E54D1B1026C10DD0_OFFSET))(this, FA58A598BB9C8553);
		}
	};
}
