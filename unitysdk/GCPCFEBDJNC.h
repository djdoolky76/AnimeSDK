#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CNGIFKHEFEJ;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class OOHOOAFNBNF;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define GCPCFEBDJNC_ANNAIMGCCLL_OFFSET UNITYSDK_OFFSET(0x14133520)
#define GCPCFEBDJNC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14132A80)
#define GCPCFEBDJNC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14133890)
#define GCPCFEBDJNC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x141329F0)
#define GCPCFEBDJNC_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x14132FE0)
#define GCPCFEBDJNC_LHLBNDFAMNE_OFFSET UNITYSDK_OFFSET(0x141337E0)
#define GCPCFEBDJNC_OCLNIHMPKBK_OFFSET UNITYSDK_OFFSET(0x14132F70)
#define GCPCFEBDJNC_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x14133880)
#define GCPCFEBDJNC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14133790)
#define GCPCFEBDJNC__CTOR_OFFSET UNITYSDK_OFFSET(0x14133780)

inline static constexpr unsigned int GCPCFEBDJNC_TypeDefinitionIndex = 53016;

class GCPCFEBDJNC : public ::ABLPDAPPABA
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_CHDEOIGJMDH()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(GCPCFEBDJNC_TypeDefinitionIndex)->GetStaticField(0x50820);
	}
	::UnityEngine::Vector3 CDEJOLDPOEB; // 0x50
	::UnityEngine::LayerMask NHFLELKLBBF; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPCFEBDJNC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCPCFEBDJNC__CCTOR_OFFSET))();
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPCFEBDJNC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::OOHOOAFNBNF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + GCPCFEBDJNC_BBOMJDBNHIC_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, DFMKILICPFB);
	}

	::System::Void LBODGKNICHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCPCFEBDJNC_LBODGKNICHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::CNGIFKHEFEJ* OCLNIHMPKBK()
	{
		return ((::CNGIFKHEFEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPCFEBDJNC_OCLNIHMPKBK_OFFSET))(this);
	}

	::System::Void LHLBNDFAMNE(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCPCFEBDJNC_LHLBNDFAMNE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PNHPDOBPKKE(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::OOHOOAFNBNF* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + GCPCFEBDJNC_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Boolean ANNAIMGCCLL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCPCFEBDJNC_ANNAIMGCCLL_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPCFEBDJNC_FIGPAOKNJLN_OFFSET))(this);
	}
};
