#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBBDIIJPFJ;
namespace MoleMole { class ConfigPinball; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define MFMNACENMOH_ADOLLGNKFJP_OFFSET UNITYSDK_OFFSET(0x14DE0A20)
#define MFMNACENMOH_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x14DE1F90)
#define MFMNACENMOH_BICDNFPIDLM_OFFSET UNITYSDK_OFFSET(0x14DE0BA0)
#define MFMNACENMOH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14DE2370)
#define MFMNACENMOH_EEDPHFBPCFI_OFFSET UNITYSDK_OFFSET(0x14DE2060)
#define MFMNACENMOH_FJIGJJFGEDE_OFFSET UNITYSDK_OFFSET(0x14DE0F20)
#define MFMNACENMOH_GLCGGOIPIPB_OFFSET UNITYSDK_OFFSET(0x14DE0C90)
#define MFMNACENMOH_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x14DE1C30)
#define MFMNACENMOH_HHJNAIPFBKL_OFFSET UNITYSDK_OFFSET(0x14DE1F40)
#define MFMNACENMOH_JIIJIILEIDK_OFFSET UNITYSDK_OFFSET(0x14DE2270)
#define MFMNACENMOH_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x14DE14A0)
#define MFMNACENMOH_KDGIEABFNAA_OFFSET UNITYSDK_OFFSET(0x14DE1580)
#define MFMNACENMOH_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x14DE1AB0)
#define MFMNACENMOH_MELLGCLEEGF_OFFSET UNITYSDK_OFFSET(0x14DE1160)
#define MFMNACENMOH_MKKPBMLPMIB_OFFSET UNITYSDK_OFFSET(0x14DE22F0)
#define MFMNACENMOH_ODCNNBDIEEF_OFFSET UNITYSDK_OFFSET(0x14DE0990)
#define MFMNACENMOH_ODJBGOGNIBN_OFFSET UNITYSDK_OFFSET(0x14DE0D40)
#define MFMNACENMOH_OMHCOPJMLBI_OFFSET UNITYSDK_OFFSET(0x14DE1310)
#define MFMNACENMOH__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE0920)

inline static constexpr unsigned int MFMNACENMOH_TypeDefinitionIndex = 49274;

class MFMNACENMOH : public ::System::Object
{
public:
	// static const ::System::String* APGOEFAALGF; // 0x0
	// static const ::System::String* EDNAPENBNPH; // 0x0
	// static const ::System::String* NCHHEBKFHFL; // 0x0
	// static const ::System::Single AEDNDMDMPBD; // 0x0
	// static const ::System::Single PHAFHEJOMCJ; // 0x0
	// static const ::System::Single GGOHLKACJBL; // 0x0
	// static const ::System::Single MLFAADIBKDI; // 0x0
	// static const ::System::Int32 BHKDFGKKPKG = 0x3C; // 0x0
	::UnityEngine::GameObject* EECEDHLADJC; // 0x10
	::MoleMole::EntityHandle JKPDLJEGFGH; // 0x18
	::System::Single BNKMCKOCIBA; // 0x28
	::System::Boolean LBGCDHAFGFC; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 CKEMHKEJKED; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNACENMOH__CTOR_OFFSET))(this);
	}

	::System::Void ODCNNBDIEEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNACENMOH_ODCNNBDIEEF_OFFSET))(this);
	}

	::System::Boolean ADOLLGNKFJP(::MoleMole::Battle::Entity* KHGFAKJKDGG, ::System::String* OINGCBBHJLJ, ::MoleMole::Battle::Entity*& HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + MFMNACENMOH_ADOLLGNKFJP_OFFSET))(this, KHGFAKJKDGG, OINGCBBHJLJ, HODAIDNDKHD);
	}

	static ::System::Single ODJBGOGNIBN(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Single(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MFMNACENMOH_ODJBGOGNIBN_OFFSET))(EHHHMFKHNAI);
	}

	::System::Void FJIGJJFGEDE(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MFMNACENMOH_FJIGJJFGEDE_OFFSET))(this, OHOGDOMNHNK, JBCNPOHMGPE);
	}

	static ::System::Boolean MELLGCLEEGF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFMNACENMOH_MELLGCLEEGF_OFFSET))();
	}

	::System::Void JLIMOLHLFAK(::MGBBDIIJPFJ* GMHJEINNFCH, ::MoleMole::ConfigPinball* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*, ::MoleMole::ConfigPinball*))((::PBYTE)hIl2Cpp + MFMNACENMOH_JLIMOLHLFAK_OFFSET))(this, GMHJEINNFCH, DFMKILICPFB);
	}

	::System::Void HHJNAIPFBKL(::System::String* FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFMNACENMOH_HHJNAIPFBKL_OFFSET))(this, FKMHMOELCIO);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNACENMOH_LJAPJFDPIKF_OFFSET))(this);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNACENMOH_AOPGPMDDDDI_OFFSET))(this);
	}

	static ::System::Single JIIJIILEIDK(::MGBBDIIJPFJ* GMHJEINNFCH)
	{
		return ((::System::Single(*)(::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MFMNACENMOH_JIIJIILEIDK_OFFSET))(GMHJEINNFCH);
	}

	::System::Boolean KDGIEABFNAA(::MGBBDIIJPFJ* GMHJEINNFCH, ::MoleMole::ConfigPinball* DFMKILICPFB, ::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Vector3& JBCNPOHMGPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MGBBDIIJPFJ*, ::MoleMole::ConfigPinball*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MFMNACENMOH_KDGIEABFNAA_OFFSET))(this, GMHJEINNFCH, DFMKILICPFB, OHOGDOMNHNK, JBCNPOHMGPE);
	}

	::System::Void COKNIICCODC(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MFMNACENMOH_COKNIICCODC_OFFSET))(this, OHOGDOMNHNK, JBCNPOHMGPE);
	}

	static ::System::Boolean BICDNFPIDLM(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MFMNACENMOH_BICDNFPIDLM_OFFSET))(HODAIDNDKHD);
	}

	::System::Void HFBPONNNLBA(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MFMNACENMOH_HFBPONNNLBA_OFFSET))(this, OHOGDOMNHNK, JBCNPOHMGPE);
	}

	static ::System::Boolean MKKPBMLPMIB(::MGBBDIIJPFJ* DNNJPPJHDKK)
	{
		return ((::System::Boolean(*)(::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MFMNACENMOH_MKKPBMLPMIB_OFFSET))(DNNJPPJHDKK);
	}

	static ::System::Boolean GLCGGOIPIPB(::MoleMole::Battle::Entity* KHGFAKJKDGG, ::System::String* OINGCBBHJLJ, ::MoleMole::Battle::Entity*& IHNGBLNIEIH)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + MFMNACENMOH_GLCGGOIPIPB_OFFSET))(KHGFAKJKDGG, OINGCBBHJLJ, IHNGBLNIEIH);
	}

	::System::Void EEDPHFBPCFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMNACENMOH_EEDPHFBPCFI_OFFSET))(this);
	}

	static ::System::Double OMHCOPJMLBI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* KEKFPKKIIFB)
	{
		return ((::System::Double(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MFMNACENMOH_OMHCOPJMLBI_OFFSET))(KECKGDFIALJ, KEKFPKKIIFB);
	}
};
