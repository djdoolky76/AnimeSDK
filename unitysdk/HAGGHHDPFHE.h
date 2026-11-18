#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGFCPNEIEDL.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class ICPLBNDOFOK;
class NGEJCFNLLKD;
namespace MoleMole::Battle { class Entity; }

#define HAGGHHDPFHE_ADHBDABLIJH_OFFSET UNITYSDK_OFFSET(0x13D7A930)
#define HAGGHHDPFHE_ANIEFFPLEKB_OFFSET UNITYSDK_OFFSET(0x13D7ABD0)
#define HAGGHHDPFHE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13D79FB0)
#define HAGGHHDPFHE_BKJGHKJMHBN_OFFSET UNITYSDK_OFFSET(0x13D7A280)
#define HAGGHHDPFHE_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x13D7AB30)
#define HAGGHHDPFHE_BOFDLDLDKLH_OFFSET UNITYSDK_OFFSET(0x13D7ADB0)
#define HAGGHHDPFHE_FLMHLAGHMLE_OFFSET UNITYSDK_OFFSET(0x13D7A0A0)
#define HAGGHHDPFHE_GEAJEPKJBDG_OFFSET UNITYSDK_OFFSET(0x13D7A870)
#define HAGGHHDPFHE_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x13D7AAA0)
#define HAGGHHDPFHE_HLFCECJPNOI_OFFSET UNITYSDK_OFFSET(0x13D7A840)
#define HAGGHHDPFHE_LAEPFBIMMBM_OFFSET UNITYSDK_OFFSET(0x13D7A900)
#define HAGGHHDPFHE_NGMHHBHKIAJ_OFFSET UNITYSDK_OFFSET(0x13D7A5E0)
#define HAGGHHDPFHE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13D7A9B0)
#define HAGGHHDPFHE_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13D7A740)
#define HAGGHHDPFHE_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x13D7AD10)
#define HAGGHHDPFHE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D7AA90)

inline static constexpr unsigned int HAGGHHDPFHE_TypeDefinitionIndex = 61482;

class HAGGHHDPFHE : public ::NGFCPNEIEDL
{
public:
	::ICPLBNDOFOK* INCMAGLDFDM; // 0x50
	::System::Single JPKEBDGEBPI; // 0x58
	::UnityEngine::Vector3 DAAEHEHLLLD; // 0x5C
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x68
	::UnityEngine::Vector3 OHCGACAAGBF; // 0x74
	::UnityEngine::Vector3 BNJDNCHMMLM; // 0x80
	::UnityEngine::Vector3 FGHBGLFOAMJ; // 0x8C
	::System::Single IAKPGBCAAKM; // 0x98
	::System::Single NJJDOHOOMGD; // 0x9C
	::UnityEngine::Vector3 LDLLKOEJDAH; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::NGEJCFNLLKD* DFMKILICPFB, ::MoleMole::Battle::Entity* PNJNAAHKAIB)
	{
		return ((::System::Void(*)(::PVOID, ::NGEJCFNLLKD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_BBOMJDBNHIC_OFFSET))(this, DFMKILICPFB, PNJNAAHKAIB);
	}

	::System::Void FLMHLAGHMLE(::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 AKAGDEFAGJA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_FLMHLAGHMLE_OFFSET))(this, DAAEHEHLLLD, IACKHFCLPJI, AKAGDEFAGJA);
	}

	::System::Void PLPONJAKNEB(::System::Single PMCFOMOFIHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_PLPONJAKNEB_OFFSET))(this, PMCFOMOFIHN);
	}

	::System::Void GEAJEPKJBDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_GEAJEPKJBDG_OFFSET))(this);
	}

	::UnityEngine::Vector3 LAEPFBIMMBM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_LAEPFBIMMBM_OFFSET))(this);
	}

	::UnityEngine::Quaternion ADHBDABLIJH()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_ADHBDABLIJH_OFFSET))(this);
	}

	::UnityEngine::Vector3 HLFCECJPNOI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_HLFCECJPNOI_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void BKJGHKJMHBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_BKJGHKJMHBN_OFFSET))(this);
	}

	::System::Void NGMHHBHKIAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_NGMHHBHKIAJ_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANIEFFPLEKB(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA, ::UnityEngine::Vector3 FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_ANIEFFPLEKB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PNHPDOBPKKE(::NGEJCFNLLKD* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::NGEJCFNLLKD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void BOFDLDLDKLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGGHHDPFHE_BOFDLDLDKLH_OFFSET))(this);
	}
};
