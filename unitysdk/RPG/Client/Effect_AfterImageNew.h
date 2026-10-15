#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class LPLFLCEMMLE;
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0xCD1D190)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDOFFSET_OFFSET UNITYSDK_OFFSET(0xCD1DDF0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xCD1E0D0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ALLOWBAKEIMAGE_OFFSET UNITYSDK_OFFSET(0xCD1C650)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD1B820)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_BAKEMESHIMAGE_OFFSET UNITYSDK_OFFSET(0xCD1D150)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD1E7B0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_CJDNGDFCOBI_OFFSET UNITYSDK_OFFSET(0xCD1D360)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCD1E6F0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_DEACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0xCD1BA20)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xCD1BB70)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_GET_CURRENTIMAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCD1C920)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_HOCLOIKHMHC_OFFSET UNITYSDK_OFFSET(0xCD1C840)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_HOEKDHBPGAI_OFFSET UNITYSDK_OFFSET(0xCD1E650)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_JKJENCPDDHM_OFFSET UNITYSDK_OFFSET(0xCD1C980)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_JMKMNFAJFOK_OFFSET UNITYSDK_OFFSET(0xCD1E6A0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_LATETICK_OFFSET UNITYSDK_OFFSET(0xCD1BF30)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_NAHPKOKENEB_OFFSET UNITYSDK_OFFSET(0xCD1BBC0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD1BEC0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD1B980)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD1B8F0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_PCDKHPNNLAP_OFFSET UNITYSDK_OFFSET(0xCD1E4F0)

namespace RPG::Client
{
	class Effect_AfterImageNew : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxCount; // 0x18
		::System::Single TimeLimit; // 0x1C
		::System::Single TimeDelay; // 0x20
		::System::Single ImageBakeDeltaTime; // 0x24
		::UnityEngine::Transform* BoneRoot; // 0x28
		::System::Boolean UseFrameMode; // 0x30
		::System::Boolean FetchMeshFromEffect; // 0x31
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::String*>* MeshFilters; // 0x38
		::Il2CppArray<::System::String*>* SkinnedMeshRenderers; // 0x40
		::Il2CppArray<::System::Object*>* MaterialProperties; // 0x48
		::Il2CppArray<::System::Object*>* MaterialColorProperties; // 0x50
		::UnityEngine::Material* FixedMaterial; // 0x58
		::System::Boolean AlwaysBehindCharacter; // 0x60
		::System::Boolean Actived; // 0x61
		::System::Boolean _Init; // 0x62
		::System::Byte _padding1[0x5];
		::RPG::Client::MonoEffect* LBNBPMIFDHI; // 0x68
		::UnityEngine::GameObject* KGCFHPOMNLJ; // 0x70
		::Il2CppArray<::System::Single>* FGPOADGIMMJ; // 0x78
		::Il2CppArray<::System::Single>* HOEFAFMAEGA; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* CFPOFBLILMM; // 0x88
		::System::Single FFPHEOCGFFF; // 0x90
		::System::Boolean HOCLHDEPAAB; // 0x94
		::System::Byte _padding2[0x3];
		::System::Int32 APLPHBHFIIC; // 0x98
		::System::Int32 LDOCFAIGGKD; // 0x9C
		::System::Int32 DINGKKIBKIE; // 0xA0
		::System::Byte _padding3[0x4];
		::System::Object* MJMFFKCOLDB; // 0xA8
		::System::Object* LKOINBLJGHL; // 0xB0
		::Il2CppArray<::UnityEngine::Transform*>* KKALAJFMLFL; // 0xB8
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0xC0
		::Il2CppArray<::System::Single>* KPBLOMGEEOL; // 0xC8
		::Il2CppArray<::UnityEngine::Matrix4x4>* AKAIGBJLFAD; // 0xD0
		::Il2CppArray<::UnityEngine::MeshFilter*>* NALCLNBGGMB; // 0xD8
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* BKFBBLCEEEO; // 0xE0
		::Il2CppArray<::UnityEngine::MeshFilter*>* CDPBNBDNPMM; // 0xE8
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* MBIPABEDICH; // 0xF0
		::System::Int32 CJJIFIGMHHB; // 0xF8
		::System::Byte _padding4[0x4];
		::UnityEngine::Material* CBBBEOKELHN; // 0x100
		::LPLFLCEMMLE* LKAGBKODCOF; // 0x108
		::System::Boolean PIPBEKLBFMJ; // 0x110
		static ::System::Int32* StaticGet_PMMMMOLGEAG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_AfterImageNew")->GetStaticField(0xBB70);
		}

		static ::System::Int32* StaticGet_GOEIGKDDJOH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_AfterImageNew")->GetStaticField(0xBB74);
		}

		static ::System::Int32* StaticGet_EBJGHNFJLLF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_AfterImageNew")->GetStaticField(0xBB78);
		}

		static ::System::Int32* StaticGet_PPBOELILJKN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_AfterImageNew")->GetStaticField(0xBB7C);
		}

		static ::System::Int32* StaticGet_JIOEPBGDDNJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_AfterImageNew")->GetStaticField(0xBB80);
		}

		// static const ::System::Object ImageLimit; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_LATETICK_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentImageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_GET_CURRENTIMAGECOUNT_OFFSET))(this);
		}

		::System::Void BakeMeshImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_BAKEMESHIMAGE_OFFSET))(this);
		}

		::System::Boolean AllowBakeImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ALLOWBAKEIMAGE_OFFSET))(this);
		}

		::System::Void ActivateAfterImage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ACTIVATEAFTERIMAGE_OFFSET))(this, a1);
		}

		::System::Void DeactivateAfterImage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_DEACTIVATEAFTERIMAGE_OFFSET))(this, a1);
		}

		::System::Void AddWorldOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDOFFSET_OFFSET))(this, a1);
		}

		::System::Void AddWorldRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* HOCLOIKHMHC(::RPG::Client::MonoEffect* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_HOCLOIKHMHC_OFFSET))(this, a1);
		}

		::System::Void CJDNGDFCOBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_CJDNGDFCOBI_OFFSET))(this);
		}

		::System::Void NAHPKOKENEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_NAHPKOKENEB_OFFSET))(this);
		}

		::System::Void PCDKHPNNLAP(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_PCDKHPNNLAP_OFFSET))(this, a1);
		}

		::System::Void JKJENCPDDHM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_JKJENCPDDHM_OFFSET))(this, a1);
		}

		::System::Void HOEKDHBPGAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_HOEKDHBPGAI_OFFSET))(this);
		}

		::System::Void JMKMNFAJFOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_JMKMNFAJFOK_OFFSET))(this);
		}

	};
}
