#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBHIKNMOHCG.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define BGONKLMMLFE_JDDLHIJFGKD_DDHCAELCOKG_OFFSET UNITYSDK_OFFSET(0x681300)
#define BGONKLMMLFE_JDDLHIJFGKD_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0x6812F0)
#define BGONKLMMLFE_JDDLHIJFGKD_FOKNJMMFIOJ_OFFSET UNITYSDK_OFFSET(0x681260)
#define BGONKLMMLFE_JDDLHIJFGKD__CCTOR_OFFSET UNITYSDK_OFFSET(0x115C56F0)
#define BGONKLMMLFE_JDDLHIJFGKD__CTOR_OFFSET UNITYSDK_OFFSET(0x6811C0)

inline static constexpr unsigned int BGONKLMMLFE_JDDLHIJFGKD_TypeDefinitionIndex = 60784;

struct alignas(4) BGONKLMMLFE_JDDLHIJFGKD
{
	static ::UnityEngine::Color* StaticGet_NGKALLJKFGG()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(BGONKLMMLFE_JDDLHIJFGKD_TypeDefinitionIndex)->GetStaticField(0x132E0);
	}
	// static const ::System::Single CEOKLKLGPJJ; // 0x0
	::FBHIKNMOHCG EODBKDDMFON; // 0x10
	::UnityEngine::Vector3 MKEGNKPNOAB; // 0x14
	::UnityEngine::Vector3 IAIGNDIOBAC; // 0x20
	::UnityEngine::Vector3 AEOKBAOODKG; // 0x2C
	::System::Single PJDIFFEJPJD; // 0x38
	::System::Single ODJLNMDABGB; // 0x3C
	::System::Single HKBKCBKJPOM; // 0x40

	::System::Void _ctor(::FBHIKNMOHCG& MAJNEEALBKL, ::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH, ::System::Single BDEDDEGJFKL, ::System::Boolean BNJCKOLHOLI)
	{
		return ((::System::Void(*)(::PVOID, ::FBHIKNMOHCG&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JDDLHIJFGKD__CTOR_OFFSET))(this, MAJNEEALBKL, MPLDDNMCECG, CFJFMMGPGKE, KBHFBLJPFJH, JBGLCAFPGHK, KKAMDFNMMJH, BDEDDEGJFKL, BNJCKOLHOLI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGONKLMMLFE_JDDLHIJFGKD__CCTOR_OFFSET))();
	}

	::System::Void FOKNJMMFIOJ(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JDDLHIJFGKD_FOKNJMMFIOJ_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::Void ENADCIEBIBL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JDDLHIJFGKD_ENADCIEBIBL_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void DDHCAELCOKG(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC, ::UnityEngine::Vector3 CBLGCIFLMKL, ::UnityEngine::Vector3 MKBCMHIAMHF, ::UnityEngine::Vector3 NFFNEFLKPDG, ::UnityEngine::Vector3 FEKJMJOPFJC, ::UnityEngine::Vector3 LMLPPLMKLFL, ::UnityEngine::Vector3 DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JDDLHIJFGKD_DDHCAELCOKG_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, MKBCMHIAMHF, NFFNEFLKPDG, FEKJMJOPFJC, LMLPPLMKLFL, DMIAICJPPDL);
	}
};
