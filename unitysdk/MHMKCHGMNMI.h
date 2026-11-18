#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKNGCMPAFNF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BLGMMOFGMAP.h"
#include "unitysdk/EKMPCEIGNNM.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MHMKCHGMNMI_BIIODMLEAJK_OFFSET UNITYSDK_OFFSET(0x107528F0)
#define MHMKCHGMNMI_BJLGEHIPFIA_OFFSET UNITYSDK_OFFSET(0x10753270)
#define MHMKCHGMNMI_HDHGMEGOGPO_OFFSET UNITYSDK_OFFSET(0x10753450)
#define MHMKCHGMNMI_HGOBPMBFAKO_OFFSET UNITYSDK_OFFSET(0x10753580)
#define MHMKCHGMNMI_HHOBDBBMDKI_OFFSET UNITYSDK_OFFSET(0x10742070)
#define MHMKCHGMNMI_HNMEPJOECAP_1_OFFSET UNITYSDK_OFFSET(0x10752E10)
#define MHMKCHGMNMI_HNMEPJOECAP_OFFSET UNITYSDK_OFFSET(0x10752B00)
#define MHMKCHGMNMI_IEELAAIFBMB_OFFSET UNITYSDK_OFFSET(0x10752860)
#define MHMKCHGMNMI_INMNLLICIPF_OFFSET UNITYSDK_OFFSET(0x10753EF0)
#define MHMKCHGMNMI_IOBBKHPDBKG_OFFSET UNITYSDK_OFFSET(0x107529D0)
#define MHMKCHGMNMI_NIIFDMNMBKP_OFFSET UNITYSDK_OFFSET(0x107538C0)
#define MHMKCHGMNMI_OJJBGJGHPKF_OFFSET UNITYSDK_OFFSET(0x107534F0)
#define MHMKCHGMNMI_PBNOMEDPFMA_OFFSET UNITYSDK_OFFSET(0x10753180)
#define MHMKCHGMNMI_PFCPJGPBACH_OFFSET UNITYSDK_OFFSET(0x10754140)

inline static constexpr unsigned int MHMKCHGMNMI_TypeDefinitionIndex = 59683;

class MHMKCHGMNMI : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_IBPGBAPKFAN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MHMKCHGMNMI_TypeDefinitionIndex)->GetStaticField(0xADB0);
	}
	static ::System::Single* StaticGet_GLFCBLLDFLM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MHMKCHGMNMI_TypeDefinitionIndex)->GetStaticField(0xADB4);
	}
	static ::System::Int32* StaticGet_FEGAPBEEPJA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MHMKCHGMNMI_TypeDefinitionIndex)->GetStaticField(0xADB8);
	}

	static ::System::Single IEELAAIFBMB(::UnityEngine::Vector3& CPIJGPIFEON, ::UnityEngine::Vector3& ACGIDGBJJHM)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_IEELAAIFBMB_OFFSET))(CPIJGPIFEON, ACGIDGBJJHM);
	}

	static ::System::Single BIIODMLEAJK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MHMKCHGMNMI_BIIODMLEAJK_OFFSET))();
	}

	static ::UnityEngine::Transform* HNMEPJOECAP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* DNHFBECBFHB)
	{
		return ((::UnityEngine::Transform*(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_HNMEPJOECAP_OFFSET))(KECKGDFIALJ, DNHFBECBFHB);
	}

	static ::UnityEngine::Transform* HNMEPJOECAP_1(::MoleMole::EntityHandle HPADNAEINPK, ::System::String* DNHFBECBFHB)
	{
		return ((::UnityEngine::Transform*(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_HNMEPJOECAP_1_OFFSET))(HPADNAEINPK, DNHFBECBFHB);
	}

	static ::UnityEngine::GameObject* HHOBDBBMDKI(::EKMPCEIGNNM HNOPAJLDCFB)
	{
		return ((::UnityEngine::GameObject*(*)(::EKMPCEIGNNM))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_HHOBDBBMDKI_OFFSET))(HNOPAJLDCFB);
	}

	static ::UnityEngine::Transform* HDHGMEGOGPO(::BLGMMOFGMAP PJABJDGGAIN)
	{
		return ((::UnityEngine::Transform*(*)(::BLGMMOFGMAP))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_HDHGMEGOGPO_OFFSET))(PJABJDGGAIN);
	}

	static ::System::Boolean OJJBGJGHPKF(::IKNGCMPAFNF DAAEHEHLLLD, ::UnityEngine::Vector3& CPIJGPIFEON, ::UnityEngine::Vector3& ACGIDGBJJHM)
	{
		return ((::System::Boolean(*)(::IKNGCMPAFNF, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_OJJBGJGHPKF_OFFSET))(DAAEHEHLLLD, CPIJGPIFEON, ACGIDGBJJHM);
	}

	static ::UnityEngine::Transform* HGOBPMBFAKO()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + MHMKCHGMNMI_HGOBPMBFAKO_OFFSET))();
	}

	static ::System::Void NIIFDMNMBKP(::Foundation::Clamped_1<::System::Single>& DHCKBCEHMLA, ::Foundation::Clamped_1<::System::Single>& EFIFPFFBLLO, ::UnityEngine::CanvasGroup*& IMPIJIGBPKN, ::UnityEngine::CanvasGroup*& JNDLNIPNKJI, ::UnityEngine::CanvasGroup*& BBCODANAFGI, ::UnityEngine::CanvasGroup*& KILPCOMOCMD)
	{
		return ((::System::Void(*)(::Foundation::Clamped_1<::System::Single>&, ::Foundation::Clamped_1<::System::Single>&, ::UnityEngine::CanvasGroup*&, ::UnityEngine::CanvasGroup*&, ::UnityEngine::CanvasGroup*&, ::UnityEngine::CanvasGroup*&))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_NIIFDMNMBKP_OFFSET))(DHCKBCEHMLA, EFIFPFFBLLO, IMPIJIGBPKN, JNDLNIPNKJI, BBCODANAFGI, KILPCOMOCMD);
	}

	static ::System::Single IOBBKHPDBKG()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MHMKCHGMNMI_IOBBKHPDBKG_OFFSET))();
	}

	static ::System::Void INMNLLICIPF(::Foundation::Clamped_1<::System::Single>& DHCKBCEHMLA, ::Foundation::Clamped_1<::System::Single>& EFIFPFFBLLO, ::UnityEngine::Transform*& HENEJLGHKCC, ::UnityEngine::Transform*& CPMFIJMFGAI, ::UnityEngine::Transform*& GMAECBNBOIG, ::UnityEngine::Transform*& PPAFFECPMBJ, ::UnityEngine::Transform*& MIOFPFPCAKG, ::UnityEngine::Transform*& HALKLBCMOFK, ::UnityEngine::Transform*& EKIBEJPOIBA, ::UnityEngine::Transform*& GJHFDKIPLJD)
	{
		return ((::System::Void(*)(::Foundation::Clamped_1<::System::Single>&, ::Foundation::Clamped_1<::System::Single>&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_INMNLLICIPF_OFFSET))(DHCKBCEHMLA, EFIFPFFBLLO, HENEJLGHKCC, CPMFIJMFGAI, GMAECBNBOIG, PPAFFECPMBJ, MIOFPFPCAKG, HALKLBCMOFK, EKIBEJPOIBA, GJHFDKIPLJD);
	}

	static ::UnityEngine::GameObject* BJLGEHIPFIA(::System::Int32 MGMDLMBEDJF)
	{
		return ((::UnityEngine::GameObject*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_BJLGEHIPFIA_OFFSET))(MGMDLMBEDJF);
	}

	static ::UnityEngine::GameObject* PBNOMEDPFMA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::UnityEngine::GameObject*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_PBNOMEDPFMA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PFCPJGPBACH(::UnityEngine::Camera* IOENKICNNME, ::UnityEngine::Vector3 BAECLPHLLHO, ::UnityEngine::Vector3& ILOHHLNGEHM)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MHMKCHGMNMI_PFCPJGPBACH_OFFSET))(IOENKICNNME, BAECLPHLLHO, ILOHHLNGEHM);
	}
};
