#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HAKKGAAOFNJ;
namespace RPG::Client::CrowdAnimator { class CrowdInstance; }
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace System { class Action; }
namespace System { class String; }

#define HDNOPCLLMAD_BGMHNMECNMK_OFFSET UNITYSDK_OFFSET(0x15C33840)
#define HDNOPCLLMAD_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0x15C33490)
#define HDNOPCLLMAD_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C333B0)
#define HDNOPCLLMAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C338B0)
#define HDNOPCLLMAD_DGHLCFLEJFC_OFFSET UNITYSDK_OFFSET(0x15C337B0)
#define HDNOPCLLMAD_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x15C332C0)
#define HDNOPCLLMAD_GCHFMMKNMKJ_OFFSET UNITYSDK_OFFSET(0x15C33440)
#define HDNOPCLLMAD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15C33280)
#define HDNOPCLLMAD_GET_CROWDPROTOTYPEPATH_OFFSET UNITYSDK_OFFSET(0x15C33240)
#define HDNOPCLLMAD_GET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0x15C33220)
#define HDNOPCLLMAD_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15C332A0)
#define HDNOPCLLMAD_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x15C33260)
#define HDNOPCLLMAD_MDFDJBBEDEJ_OFFSET UNITYSDK_OFFSET(0x15C33760)
#define HDNOPCLLMAD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15C33290)
#define HDNOPCLLMAD_SET_CROWDPROTOTYPEPATH_OFFSET UNITYSDK_OFFSET(0x15C33250)
#define HDNOPCLLMAD_SET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0x15C33230)
#define HDNOPCLLMAD_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15C332B0)
#define HDNOPCLLMAD_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x15C33270)

inline static constexpr unsigned int HDNOPCLLMAD_TypeDefinitionIndex = 69263;

	class HDNOPCLLMAD : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::RPG::Client::CrowdAnimator::CrowdPrototype* _Config_k__BackingField; // 0x18
		::HAKKGAAOFNJ* EOBLJJBOBIN; // 0x20
		::System::Action* JKCABHALIHH; // 0x28
		::System::String* _CrowdVariantPath_k__BackingField; // 0x30
		::RPG::Client::CrowdAnimator::CrowdInstance* _Instance_k__BackingField; // 0x38
		::System::String* _CrowdPrototypePath_k__BackingField; // 0x40
		::RPG::Client::CrowdAnimator::CrowdVariant* _Prefab_k__BackingField; // 0x48
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x50
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_CTOR_OFFSET))(this);
		}

		::System::String* get_CrowdVariantPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_GET_CROWDVARIANTPATH_OFFSET))(this);
		}

		::System::Void set_CrowdVariantPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_SET_CROWDVARIANTPATH_OFFSET))(this, a1);
		}

		::System::String* get_CrowdPrototypePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_GET_CROWDPROTOTYPEPATH_OFFSET))(this);
		}

		::System::Void set_CrowdPrototypePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_SET_CROWDPROTOTYPEPATH_OFFSET))(this, a1);
		}

		::RPG::Client::CrowdAnimator::CrowdVariant* get_Prefab()
		{
			return ((::RPG::Client::CrowdAnimator::CrowdVariant*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_GET_PREFAB_OFFSET))(this);
		}

		::System::Void set_Prefab(::RPG::Client::CrowdAnimator::CrowdVariant* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_SET_PREFAB_OFFSET))(this, a1);
		}

		::RPG::Client::CrowdAnimator::CrowdPrototype* get_Config()
		{
			return ((::RPG::Client::CrowdAnimator::CrowdPrototype*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::CrowdAnimator::CrowdPrototype* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::CrowdAnimator::CrowdInstance* get_Instance()
		{
			return ((::RPG::Client::CrowdAnimator::CrowdInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_Instance(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_SET_INSTANCE_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI(::System::String* a1, ::HAKKGAAOFNJ* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5, ::System::String* a6, ::System::Action* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HAKKGAAOFNJ*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_CLEAR_OFFSET))(this);
		}

		::System::Void GCHFMMKNMKJ(::RPG::Client::CrowdAnimator::CrowdVariant* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_GCHFMMKNMKJ_OFFSET))(this, a1);
		}

		::System::Void MDFDJBBEDEJ(::RPG::Client::CrowdAnimator::CrowdPrototype* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_MDFDJBBEDEJ_OFFSET))(this, a1);
		}

		::System::Void CIPJBBAOLBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_CIPJBBAOLBD_OFFSET))(this);
		}

		::System::Boolean DGHLCFLEJFC(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_DGHLCFLEJFC_OFFSET))(this, a1);
		}

		::System::Void BGMHNMECNMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOPCLLMAD_BGMHNMECNMK_OFFSET))(this);
		}

	};
