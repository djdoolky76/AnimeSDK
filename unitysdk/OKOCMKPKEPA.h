#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define OKOCMKPKEPA_BDOILHJMHHK_OFFSET UNITYSDK_OFFSET(0xBEF2BD0)
#define OKOCMKPKEPA_BMCAENBJINO_OFFSET UNITYSDK_OFFSET(0xBEF2B60)
#define OKOCMKPKEPA_BNGEOKJOCOM_OFFSET UNITYSDK_OFFSET(0xBEF23B0)
#define OKOCMKPKEPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF2810)
#define OKOCMKPKEPA_FKKOPENCOCJ_OFFSET UNITYSDK_OFFSET(0xBEF2170)
#define OKOCMKPKEPA_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xBEF27F0)
#define OKOCMKPKEPA_GMOHFNLGHIF_OFFSET UNITYSDK_OFFSET(0xBEF25F0)
#define OKOCMKPKEPA_HKEEIHKGGKF_OFFSET UNITYSDK_OFFSET(0xBEF1A90)
#define OKOCMKPKEPA_HMOIGKDGLFA_OFFSET UNITYSDK_OFFSET(0xBEF1B00)
#define OKOCMKPKEPA_JJDFGLKIDAO_OFFSET UNITYSDK_OFFSET(0xBEF1BF0)
#define OKOCMKPKEPA_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xBEF19E0)
#define OKOCMKPKEPA_MPOFIHCCEIE_OFFSET UNITYSDK_OFFSET(0xBEF1A40)
#define OKOCMKPKEPA_NOHJAKDEOLF_OFFSET UNITYSDK_OFFSET(0xBEF2070)
#define OKOCMKPKEPA_PELCDFOHIMI_OFFSET UNITYSDK_OFFSET(0xBEF2A40)
#define OKOCMKPKEPA_PFAKBNCECNG_OFFSET UNITYSDK_OFFSET(0xBEF26F0)
#define OKOCMKPKEPA_PMLJDKDPPGO_OFFSET UNITYSDK_OFFSET(0xBEF1CF0)
#define OKOCMKPKEPA_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xBEF2800)

	class OKOCMKPKEPA : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* LJLEHEGLILM; // 0x10
		::UnityEngine::Mesh* BBBBPICMJMN; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* _Materials_k__BackingField; // 0x20
		::Il2CppArray<::System::Int32>* KMEFELKKHLH; // 0x28
		::Il2CppArray<::UnityEngine::Vector2>* FCPBNGFPGAN; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* BGCIECHFCAN; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* GCPIKOFOCDD; // 0x40
		::Il2CppArray<::UnityEngine::Color32>* ACPCFKLMHGL; // 0x48
		::Il2CppArray<::UnityEngine::Vector4>* NNENIMEGHMH; // 0x50
		static ::UnityEngine::Material** StaticGet_ONLCKOKNOBD()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("", "OKOCMKPKEPA")->GetStaticField(0x56F60);
		}

		::System::Void _ctor(::UnityEngine::Mesh* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Int32 MPOFIHCCEIE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_MPOFIHCCEIE_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* HKEEIHKGGKF()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_HKEEIHKGGKF_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* HMOIGKDGLFA()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_HMOIGKDGLFA_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* JJDFGLKIDAO()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_JJDFGLKIDAO_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* PMLJDKDPPGO()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_PMLJDKDPPGO_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector4>* NOHJAKDEOLF()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_NOHJAKDEOLF_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color32>* GMOHFNLGHIF()
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_GMOHFNLGHIF_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* PFAKBNCECNG()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_PFAKBNCECNG_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_Materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void set_Materials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_SET_MATERIALS_OFFSET))(this, a1);
		}

		::System::Boolean FKKOPENCOCJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_FKKOPENCOCJ_OFFSET))(this);
		}

		::System::Boolean BMCAENBJINO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_BMCAENBJINO_OFFSET))(this);
		}

		::System::Boolean BNGEOKJOCOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_BNGEOKJOCOM_OFFSET))(this);
		}

		::System::Boolean BDOILHJMHHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA_BDOILHJMHHK_OFFSET))(this);
		}

		static ::UnityEngine::Material* PELCDFOHIMI()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + OKOCMKPKEPA_PELCDFOHIMI_OFFSET))();
		}

	};
