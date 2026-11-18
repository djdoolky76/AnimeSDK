#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIKENOBIEEC.h"
#include "unitysdk/NGFCPNEIEDL.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class NGEJCFNLLKD;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define AGIGINCFIME_ADHBDABLIJH_OFFSET UNITYSDK_OFFSET(0x16D76BD0)
#define AGIGINCFIME_ANIEFFPLEKB_OFFSET UNITYSDK_OFFSET(0x16D76F20)
#define AGIGINCFIME_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16D761A0)
#define AGIGINCFIME_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x16D76D40)
#define AGIGINCFIME_BLIHGMOJJKD_OFFSET UNITYSDK_OFFSET(0x16D76C70)
#define AGIGINCFIME_BOFDLDLDKLH_OFFSET UNITYSDK_OFFSET(0x16D76E80)
#define AGIGINCFIME_FLMHLAGHMLE_OFFSET UNITYSDK_OFFSET(0x16D762D0)
#define AGIGINCFIME_GEAJEPKJBDG_OFFSET UNITYSDK_OFFSET(0x16D76490)
#define AGIGINCFIME_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x16D76E90)
#define AGIGINCFIME_HLFCECJPNOI_OFFSET UNITYSDK_OFFSET(0x16D76D10)
#define AGIGINCFIME_LAEPFBIMMBM_OFFSET UNITYSDK_OFFSET(0x16D76C40)
#define AGIGINCFIME_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16D76430)
#define AGIGINCFIME_OLFLJLDJLHI_OFFSET UNITYSDK_OFFSET(0x16D76DE0)
#define AGIGINCFIME_PIFKPFFODLE_OFFSET UNITYSDK_OFFSET(0x16D76D00)
#define AGIGINCFIME_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16D76520)
#define AGIGINCFIME_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x16D77060)
#define AGIGINCFIME__CTOR_OFFSET UNITYSDK_OFFSET(0x16D76D30)

inline static constexpr unsigned int AGIGINCFIME_TypeDefinitionIndex = 91732;

class AGIGINCFIME : public ::NGFCPNEIEDL
{
public:
	::MoleMole::Battle::Entity* PNJNAAHKAIB; // 0x50
	::MoleMole::Config::ConfigPosRot* ICJMAMIPCBG; // 0x58
	::MoleMole::Battle::Entity* MFEHPHCJIMF; // 0x60
	::IIKENOBIEEC IFNKGOMHJCI; // 0x68
	::UnityEngine::Vector3 LDLLKOEJDAH; // 0x6C
	::System::Single JOJIHAGBDAE; // 0x78
	::UnityEngine::Vector3 FMJGOHNLJNA; // 0x7C
	::UnityEngine::Vector3 EECMDPPHLAM; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::NGEJCFNLLKD* DFMKILICPFB, ::MoleMole::Battle::Entity* PNJNAAHKAIB)
	{
		return ((::System::Void(*)(::PVOID, ::NGEJCFNLLKD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AGIGINCFIME_BBOMJDBNHIC_OFFSET))(this, DFMKILICPFB, PNJNAAHKAIB);
	}

	::System::Void FLMHLAGHMLE(::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 AKAGDEFAGJA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AGIGINCFIME_FLMHLAGHMLE_OFFSET))(this, DAAEHEHLLLD, IACKHFCLPJI, AKAGDEFAGJA);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void GEAJEPKJBDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME_GEAJEPKJBDG_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMCFOMOFIHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGIGINCFIME_PLPONJAKNEB_OFFSET))(this, PMCFOMOFIHN);
	}

	::System::Void BLIHGMOJJKD(::MoleMole::Battle::Entity* MFEHPHCJIMF, ::MoleMole::Config::ConfigPosRot* ICJMAMIPCBG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + AGIGINCFIME_BLIHGMOJJKD_OFFSET))(this, MFEHPHCJIMF, ICJMAMIPCBG);
	}

	::UnityEngine::Vector3 LAEPFBIMMBM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME_LAEPFBIMMBM_OFFSET))(this);
	}

	::UnityEngine::Quaternion ADHBDABLIJH()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME_ADHBDABLIJH_OFFSET))(this);
	}

	::System::Boolean PIFKPFFODLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME_PIFKPFFODLE_OFFSET))(this);
	}

	::UnityEngine::Vector3 HLFCECJPNOI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME_HLFCECJPNOI_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGIGINCFIME_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OLFLJLDJLHI(::MoleMole::Battle::Entity* MIALFKCCCPI, ::MoleMole::Config::ConfigPosRot* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + AGIGINCFIME_OLFLJLDJLHI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void BOFDLDLDKLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME_BOFDLDLDKLH_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIGINCFIME_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void ANIEFFPLEKB(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA, ::UnityEngine::Vector3 FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AGIGINCFIME_ANIEFFPLEKB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PNHPDOBPKKE(::NGEJCFNLLKD* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::NGEJCFNLLKD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AGIGINCFIME_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
