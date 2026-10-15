#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFMMKIMHFPA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdAssembly.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdLod.h"
class CNFEAHMJFAF;
namespace RPG::Client::CrowdAnimator { class CrowdInstance; }
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define OEIPELDMAAE_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBE2F8C0)
#define OEIPELDMAAE_AIEHMLPBHCG_OFFSET UNITYSDK_OFFSET(0xBE2F710)
#define OEIPELDMAAE_CENINLMPIPH_OFFSET UNITYSDK_OFFSET(0xBE2EA10)
#define OEIPELDMAAE_CFDDCIEMDGF_OFFSET UNITYSDK_OFFSET(0xBE2EC90)
#define OEIPELDMAAE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2E9D0)
#define OEIPELDMAAE_EBPECALIHHN_OFFSET UNITYSDK_OFFSET(0xBE2FAA0)
#define OEIPELDMAAE_FEADNMNABOL_OFFSET UNITYSDK_OFFSET(0xBE2F830)
#define OEIPELDMAAE_GET_CULLINGLODDATA_OFFSET UNITYSDK_OFFSET(0xBE2E900)
#define OEIPELDMAAE_GET_INSTANCEREFLIST_OFFSET UNITYSDK_OFFSET(0xBE2E9B0)
#define OEIPELDMAAE_NIKLJNFCMNN_OFFSET UNITYSDK_OFFSET(0xBE2F650)
#define OEIPELDMAAE_OAFPNDBBCHA_OFFSET UNITYSDK_OFFSET(0xBE2FB60)
#define OEIPELDMAAE_OLFOKGPGDFM_OFFSET UNITYSDK_OFFSET(0xBE2F0E0)
#define OEIPELDMAAE_SET_CULLINGLODDATA_OFFSET UNITYSDK_OFFSET(0xBE2E950)
#define OEIPELDMAAE_SET_INSTANCEREFLIST_OFFSET UNITYSDK_OFFSET(0xBE2E9C0)

	class OEIPELDMAAE : public ::System::Object
	{
	public:
		::RPG::Client::CrowdAnimator::CrowdPrototype* JKFLABNOEPI; // 0x10
		::RPG::Client::CrowdAnimator::CrowdVariant* AGHGDGKCEHE; // 0x18
		::Il2CppArray<::CNFEAHMJFAF*>* CJFMOANAFMG; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* _InstanceRefList_k__BackingField; // 0x28
		::System::Int32 FHLLCCCGNBC; // 0x30
		::UnityEngine::Vector4 JEGJGEOFHEJ; // 0x34
		::LFMMKIMHFPA _CullingLODData_k__BackingField; // 0x44
		::UnityEngine::Bounds HKEHAAMAGIF; // 0xB8
		::UnityEngine::Vector4 HOBMOMLBHGC; // 0xD0
		::UnityEngine::Vector4 DJMOCLBJCAL; // 0xE0
		::System::Void _ctor(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + OEIPELDMAAE_CTOR_OFFSET))(this, a1, a2);
		}

		::LFMMKIMHFPA get_CullingLODData()
		{
			return ((::LFMMKIMHFPA(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPELDMAAE_GET_CULLINGLODDATA_OFFSET))(this);
		}

		::System::Void set_CullingLODData(::LFMMKIMHFPA a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFMMKIMHFPA))((::PBYTE)hIl2Cpp + OEIPELDMAAE_SET_CULLINGLODDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* get_InstanceRefList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPELDMAAE_GET_INSTANCEREFLIST_OFFSET))(this);
		}

		::System::Void set_InstanceRefList(::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>*))((::PBYTE)hIl2Cpp + OEIPELDMAAE_SET_INSTANCEREFLIST_OFFSET))(this, a1);
		}

		::System::Boolean NIKLJNFCMNN(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + OEIPELDMAAE_NIKLJNFCMNN_OFFSET))(this, a1, a2);
		}

		::System::Void AIEHMLPBHCG(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + OEIPELDMAAE_AIEHMLPBHCG_OFFSET))(this, a1);
		}

		::System::Void FEADNMNABOL(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + OEIPELDMAAE_FEADNMNABOL_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPELDMAAE_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void OLFOKGPGDFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPELDMAAE_OLFOKGPGDFM_OFFSET))(this);
		}

		::System::Void CFDDCIEMDGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPELDMAAE_CFDDCIEMDGF_OFFSET))(this);
		}

		::System::Void CENINLMPIPH(::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdLod>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdLod>*))((::PBYTE)hIl2Cpp + OEIPELDMAAE_CENINLMPIPH_OFFSET))(this, a1);
		}

		::System::Void EBPECALIHHN(::System::Int32 a1, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdAssembly>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdAssembly>*))((::PBYTE)hIl2Cpp + OEIPELDMAAE_EBPECALIHHN_OFFSET))(this, a1, a2);
		}

		::System::Void OAFPNDBBCHA(::System::Int32 a1, ::UnityEngine::Mesh* a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::Material* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*, ::System::Int32, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + OEIPELDMAAE_OAFPNDBBCHA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
