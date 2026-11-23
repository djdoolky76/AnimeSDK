#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RayfireCombine_B78EE80FE856A4BB.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIRECOMBINE_A461DE7D5A2F0970_OFFSET UNITYSDK_OFFSET(0x2975150)
#define RAYFIRE_RAYFIRECOMBINE_ADB443FAC51BDA15_OFFSET UNITYSDK_OFFSET(0x2972EF0)
#define RAYFIRE_RAYFIRECOMBINE_AE03B4FBB41C500E_OFFSET UNITYSDK_OFFSET(0x2973990)
#define RAYFIRE_RAYFIRECOMBINE_B2BEA44CB41E8A2E_OFFSET UNITYSDK_OFFSET(0x2973150)
#define RAYFIRE_RAYFIRECOMBINE_BE54BA397E36170F_OFFSET UNITYSDK_OFFSET(0x2972F20)
#define RAYFIRE_RAYFIRECOMBINE__CTOR_OFFSET UNITYSDK_OFFSET(0x29751B0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireCombine_TypeDefinitionIndex = 15486;

	class RayfireCombine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RayFire::RayfireCombine_B78EE80FE856A4BB type; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objects; // 0x28
		::System::Boolean meshFilters; // 0x30
		::System::Boolean skinnedMeshes; // 0x31
		::System::Boolean particleSystems; // 0x32
		::System::Byte _padding1[0x1];
		::System::Single sizeThreshold; // 0x34
		::System::Int32 vertexThreshold; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* ABF768E1D71A14F9; // 0x40
		::UnityEngine::MeshFilter* B732B42C6564DCE9; // 0x48
		::UnityEngine::MeshRenderer* FB2FBFDF7BFFD3EC; // 0x50
		::System::Collections::Generic::List_1<::System::Boolean>* AA6125A1F5F59DE5; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* BF538EEC873D7DA7; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* F91B464623477E68; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* AB44F7E0D9F9DFC5; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* FCB1A82AE6549ADB; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* FB03BCCB66F225A3; // 0x80
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* F4D6043609944D6B; // 0x88
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* A17A1E3987F9F191; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* E3894D9A7440B5E6; // 0x98
		::System::Collections::Generic::List_1<::System::Int32>* A11C0E9388913067; // 0xA0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* AF8605861FF3C742; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ABCF934BE8482F0E; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* B901758947C94B2C; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* F1579910E1F074F8; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::E8984F4E44AE20E5>* A5DFCA20A7F2DA8A; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE__CTOR_OFFSET))(this);
		}

		::System::Int32 A461DE7D5A2F0970(::UnityEngine::Material* BBCFEC7DB309E927)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_A461DE7D5A2F0970_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Void B2BEA44CB41E8A2E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_B2BEA44CB41E8A2E_OFFSET))(this);
		}

		::System::Void BE54BA397E36170F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_BE54BA397E36170F_OFFSET))(this);
		}

		::System::Void AE03B4FBB41C500E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_AE03B4FBB41C500E_OFFSET))(this);
		}

		::System::Void ADB443FAC51BDA15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECOMBINE_ADB443FAC51BDA15_OFFSET))(this);
		}
	};
}
