#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DeformModulePreset_LodTypeEnum.h"
#include "unitysdk/DeformModulePreset_UVTillingMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define DEFORMMODULEPRESET_CCTOR_OFFSET UNITYSDK_OFFSET(0x12662170)
#define DEFORMMODULEPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x12662150)
#define DEFORMMODULEPRESET_DECODEQTANGENT_OFFSET UNITYSDK_OFFSET(0x12661FD0)
#define DEFORMMODULEPRESET_GET_IFDISABLEAUTOADJUST_OFFSET UNITYSDK_OFFSET(0x12661FA0)
#define DEFORMMODULEPRESET_GET_ISLOD0_OFFSET UNITYSDK_OFFSET(0x12661FC0)
#define DEFORMMODULEPRESET_SET_IFDISABLEAUTOADJUST_OFFSET UNITYSDK_OFFSET(0x12661FB0)

inline static constexpr unsigned int DeformModulePreset_TypeDefinitionIndex = 47159;

	class DeformModulePreset : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DeformModulePreset_LodTypeEnum LodType; // 0x18
		::System::Boolean IfUseQuadDeform; // 0x1C
		::System::Byte _padding0[0x3];
		::DeformModulePreset_UVTillingMode UVMode; // 0x20
		::UnityEngine::Vector3 ModuleSize; // 0x24
		::UnityEngine::Vector3 SourceModelSize; // 0x30
		::System::Boolean IfUseDeformRef; // 0x3C
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 DeformRefSize; // 0x40
		::System::Byte _padding2[0x4];
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x50
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x58
		::UnityEngine::MeshFilter* FNDMMIEAEHF; // 0x60
		::System::Boolean _IfDisableAutoAdjust_k__BackingField; // 0x68
		static ::System::String** StaticGet_JKMGJKAFIMD()
		{
			return (::System::String**)UnitySDK::FromName("", "DeformModulePreset")->GetStaticField(0x6F990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_CCTOR_OFFSET))();
		}

		::System::Boolean get_IfDisableAutoAdjust()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_GET_IFDISABLEAUTOADJUST_OFFSET))(this);
		}

		::System::Void set_IfDisableAutoAdjust(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_SET_IFDISABLEAUTOADJUST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLod0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_GET_ISLOD0_OFFSET))(this);
		}

		static ::System::Void DecodeQTangent(::UnityEngine::Vector4 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_DECODEQTANGENT_OFFSET))(a1, a2, a3);
		}

	};
