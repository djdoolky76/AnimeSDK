#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCFLKPABIOM.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_PossessionConfig.h"
namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define PKBGGDEPGDO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2A4420)
#define PKBGGDEPGDO_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0xC2A43A0)
#define PKBGGDEPGDO_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC2A4400)
#define PKBGGDEPGDO_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xC2A43B0)
#define PKBGGDEPGDO_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0xC2A43D0)
#define PKBGGDEPGDO_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xC2A43E0)
#define PKBGGDEPGDO_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC2A4390)
#define PKBGGDEPGDO_HHPNEJMBACH_OFFSET UNITYSDK_OFFSET(0xC2A4660)
#define PKBGGDEPGDO_JFIIFBJPHPC_OFFSET UNITYSDK_OFFSET(0xC2A4540)
#define PKBGGDEPGDO_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xC2A44F0)
#define PKBGGDEPGDO_NMBMEBMCJGE_OFFSET UNITYSDK_OFFSET(0xC2A4580)
#define PKBGGDEPGDO_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC2A4410)

inline static constexpr unsigned int PKBGGDEPGDO_TypeDefinitionIndex = 82215;

	class PKBGGDEPGDO : public ::FCFLKPABIOM
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x20
		::UnityEngine::Rendering::BatchAnimationInstance* _Instance_k__BackingField; // 0x28
		::UnityEngine::Vector3 _LocalScale_k__BackingField; // 0x30
		::UnityEngine::Quaternion _LocalRotation_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _LocalPosition_k__BackingField; // 0x4C
		::System::Int32 _BoneIndex_k__BackingField; // 0x58
		::System::Void _ctor(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::RPG::Client::Subway::AirlineSubwayWay_PossessionConfig a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::RPG::Client::Subway::AirlineSubwayWay_PossessionConfig))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Int32 get_BoneIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_GET_BONEINDEX_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_GET_LOCALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_LocalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_GET_LOCALROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LocalScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_GET_LOCALSCALE_OFFSET))(this);
		}

		::UnityEngine::Rendering::BatchAnimationInstance* get_Instance()
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_Instance(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_SET_INSTANCE_OFFSET))(this, a1);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void JFIIFBJPHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_JFIIFBJPHPC_OFFSET))(this);
		}

		::System::Void NMBMEBMCJGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_NMBMEBMCJGE_OFFSET))(this);
		}

		::System::Void HHPNEJMBACH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBGGDEPGDO_HHPNEJMBACH_OFFSET))(this);
		}

	};
