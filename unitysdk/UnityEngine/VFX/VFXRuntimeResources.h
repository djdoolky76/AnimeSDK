#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_VFX_VFXRUNTIMERESOURCES_A39E8451E157BEEB_OFFSET UNITYSDK_OFFSET(0x40E9CD0)
#define UNITYENGINE_VFX_VFXRUNTIMERESOURCES_A8D76E5A4894E4DF_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define UNITYENGINE_VFX_VFXRUNTIMERESOURCES_B83361FC70476BF1_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define UNITYENGINE_VFX_VFXRUNTIMERESOURCES_E0F5367E866BC4D7_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_VFX_VFXRUNTIMERESOURCES_E3D4443F3865BCFA_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_VFX_VFXRUNTIMERESOURCES_F3EACAB89F67990D_OFFSET UNITYSDK_OFFSET(0x169C070)
#define UNITYENGINE_VFX_VFXRUNTIMERESOURCES_FDFC1BA986E3C5CC_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define UNITYENGINE_VFX_VFXRUNTIMERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXRuntimeResources_TypeDefinitionIndex = 21602;

	class VFXRuntimeResources : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::ComputeShader* m_SDFRayMapCS; // 0x18
		::UnityEngine::ComputeShader* m_SDFNormalsCS; // 0x20
		::UnityEngine::Shader* m_SDFRayMapShader; // 0x28

		::System::Void E0F5367E866BC4D7(::UnityEngine::ComputeShader* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXRUNTIMERESOURCES_E0F5367E866BC4D7_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A8D76E5A4894E4DF(::UnityEngine::Shader* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXRUNTIMERESOURCES_A8D76E5A4894E4DF_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXRUNTIMERESOURCES__CTOR_OFFSET))(this);
		}

		::System::Void B83361FC70476BF1(::UnityEngine::ComputeShader* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXRUNTIMERESOURCES_B83361FC70476BF1_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::UnityEngine::VFX::VFXRuntimeResources* A39E8451E157BEEB()
		{
			return ((::UnityEngine::VFX::VFXRuntimeResources*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXRUNTIMERESOURCES_A39E8451E157BEEB_OFFSET))();
		}

		::UnityEngine::Shader* F3EACAB89F67990D()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXRUNTIMERESOURCES_F3EACAB89F67990D_OFFSET))(this);
		}

		::UnityEngine::ComputeShader* FDFC1BA986E3C5CC()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXRUNTIMERESOURCES_FDFC1BA986E3C5CC_OFFSET))(this);
		}

		::UnityEngine::ComputeShader* E3D4443F3865BCFA()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXRUNTIMERESOURCES_E3D4443F3865BCFA_OFFSET))(this);
		}
	};
}
