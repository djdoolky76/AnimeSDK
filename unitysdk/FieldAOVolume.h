#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class IAssetOperation; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture3D; }

#define FIELDAOVOLUME_AJEEDOFEJAK_OFFSET UNITYSDK_OFFSET(0x15923C80)
#define FIELDAOVOLUME_BOLPJEKFGDF_OFFSET UNITYSDK_OFFSET(0x15923D90)
#define FIELDAOVOLUME_CTOR_OFFSET UNITYSDK_OFFSET(0x15924CE0)
#define FIELDAOVOLUME_DNIGIBCEAJL_OFFSET UNITYSDK_OFFSET(0x15923F00)
#define FIELDAOVOLUME_INFKFGLAKLB_OFFSET UNITYSDK_OFFSET(0x15924360)
#define FIELDAOVOLUME_MOEOLBMEIFI_OFFSET UNITYSDK_OFFSET(0x15924860)
#define FIELDAOVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15924780)
#define FIELDAOVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15924470)
#define FIELDAOVOLUME_START_OFFSET UNITYSDK_OFFSET(0x15923E80)
#define FIELDAOVOLUME_UPDATEMATRIX_OFFSET UNITYSDK_OFFSET(0x15924550)

inline static constexpr unsigned int FieldAOVolume_TypeDefinitionIndex = 47509;

	class FieldAOVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 volumeScale; // 0x18
		::System::Int32 cubeSize; // 0x24
		::System::Single cutFarPlane; // 0x28
		::UnityEngine::Vector3 BoundsExpand; // 0x2C
		::UnityEngine::Color AOColor; // 0x38
		::System::Single AOStrength; // 0x48
		::System::Single AOBias; // 0x4C
		::System::Single AlphaWidthEdge; // 0x50
		::System::Boolean ShowOnlyAO; // 0x54
		::System::Boolean UseVisualization; // 0x55
		::System::Byte _padding0[0x2];
		::System::Single arrowScale; // 0x58
		::UnityEngine::Vector2 widthRemapped; // 0x5C
		::System::Byte _padding1[0x4];
		::UnityEngine::GameObject* AODecal; // 0x68
		::UnityEngine::Vector3 _FieldStartPoint; // 0x70
		::UnityEngine::Vector3 _FieldScale; // 0x7C
		::UnityEngine::Texture3D* volumeTex; // 0x88
		::UnityEngine::Cubemap* testCube; // 0x90
		::UnityEngine::Material* matDecal; // 0x98
		::UnityEngine::MaterialPropertyBlock* BEFHHGEFFJP; // 0xA0
		::UnityEngine::Renderer* GFLFKALANCC; // 0xA8
		static ::UnityEngine::Material** StaticGet_HFPPOGPOBHA()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("", "FieldAOVolume")->GetStaticField(0x5E180);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_CTOR_OFFSET))(this);
		}

		::System::Void AJEEDOFEJAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_AJEEDOFEJAK_OFFSET))(this);
		}

		::System::Void BOLPJEKFGDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_BOLPJEKFGDF_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_UPDATEMATRIX_OFFSET))(this);
		}

		::System::Boolean MOEOLBMEIFI(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_MOEOLBMEIFI_OFFSET))(this, a1);
		}

		::System::Void DNIGIBCEAJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_DNIGIBCEAJL_OFFSET))(this);
		}

		::System::Void INFKFGLAKLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDAOVOLUME_INFKFGLAKLB_OFFSET))(this);
		}

	};
