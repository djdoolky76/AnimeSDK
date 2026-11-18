#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class KFHNCJALFJK;
class KOKNPHEMEFL;
class LNFCIBHFJHI;
class NLNIIPDCABP;
class OOHOOAFNBNF;
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define PLANBHCPNID_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x150D4F80)
#define PLANBHCPNID_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x150D3FF0)
#define PLANBHCPNID_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x150D44E0)
#define PLANBHCPNID_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x150D50C0)
#define PLANBHCPNID_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x150D4E10)
#define PLANBHCPNID_KMBINLEMJLI_OFFSET UNITYSDK_OFFSET(0x150D4720)
#define PLANBHCPNID_KNHNLNDKBAD_OFFSET UNITYSDK_OFFSET(0x150D5020)
#define PLANBHCPNID_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x150D5010)
#define PLANBHCPNID__CTOR_OFFSET UNITYSDK_OFFSET(0x150D4EA0)

inline static constexpr unsigned int PLANBHCPNID_TypeDefinitionIndex = 53886;

class PLANBHCPNID : public ::ABLPDAPPABA
{
public:
	::KOKNPHEMEFL* CEJENBBHBBG; // 0x50
	::System::Collections::Generic::Queue_1<::System::Boolean>* AEBPNGGPDMP; // 0x58
	::System::Collections::Generic::Queue_1<::System::Single>* FENEPKCBPBI; // 0x60
	::System::Collections::Generic::Queue_1<::UnityEngine::Quaternion>* KAEEAPPPNCJ; // 0x68
	::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* IMKHBINCMPD; // 0x70
	::GEIHCPAOKKK* OOPDNKPPJFF; // 0x78
	::UnityEngine::Transform* EACOGDHOOMD; // 0x80
	::MoleMole::EntityHandle IKKKBMMNCHH; // 0x88
	::NLNIIPDCABP* PGMFCNBPLPP; // 0x98
	::NLNIIPDCABP* GKDGOBHLDPB; // 0xA0
	::GEIHCPAOKKK* OBEHNKCELBN; // 0xA8
	::System::Single LIGPCDKIOIO; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANBHCPNID__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::OOHOOAFNBNF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + PLANBHCPNID_BBOMJDBNHIC_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, DFMKILICPFB);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANBHCPNID_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void KMBINLEMJLI(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLANBHCPNID_KMBINLEMJLI_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANBHCPNID_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANBHCPNID_BBJHAJJPFKG_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::OOHOOAFNBNF* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + PLANBHCPNID_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void KNHNLNDKBAD(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLANBHCPNID_KNHNLNDKBAD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANBHCPNID_FIGPAOKNJLN_OFFSET))(this);
	}
};
