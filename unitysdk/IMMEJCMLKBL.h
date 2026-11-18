#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGFCPNEIEDL.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class NGEJCFNLLKD;
namespace MoleMole::Battle { class Entity; }

#define IMMEJCMLKBL_ADHBDABLIJH_OFFSET UNITYSDK_OFFSET(0x14A32810)
#define IMMEJCMLKBL_ANIEFFPLEKB_OFFSET UNITYSDK_OFFSET(0x14A32B10)
#define IMMEJCMLKBL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14A322B0)
#define IMMEJCMLKBL_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x14A32940)
#define IMMEJCMLKBL_BOFDLDLDKLH_OFFSET UNITYSDK_OFFSET(0x14A32930)
#define IMMEJCMLKBL_FLMHLAGHMLE_OFFSET UNITYSDK_OFFSET(0x14A324C0)
#define IMMEJCMLKBL_GEAJEPKJBDG_OFFSET UNITYSDK_OFFSET(0x14A32870)
#define IMMEJCMLKBL_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x14A329E0)
#define IMMEJCMLKBL_LAEPFBIMMBM_OFFSET UNITYSDK_OFFSET(0x14A327E0)
#define IMMEJCMLKBL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x14A32730)
#define IMMEJCMLKBL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14A32380)
#define IMMEJCMLKBL_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x14A32A70)
#define IMMEJCMLKBL__CTOR_OFFSET UNITYSDK_OFFSET(0x14A32900)

inline static constexpr unsigned int IMMEJCMLKBL_TypeDefinitionIndex = 68314;

class IMMEJCMLKBL : public ::NGFCPNEIEDL
{
public:
	::UnityEngine::Vector3 LDLLKOEJDAH; // 0x50
	::UnityEngine::Vector3 IBGFHCHKPNO; // 0x5C
	::UnityEngine::Vector3 DAAEHEHLLLD; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEJCMLKBL__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::NGEJCFNLLKD* NGNGPIPHHLO, ::MoleMole::Battle::Entity* PNJNAAHKAIB)
	{
		return ((::System::Void(*)(::PVOID, ::NGEJCFNLLKD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_BBOMJDBNHIC_OFFSET))(this, NGNGPIPHHLO, PNJNAAHKAIB);
	}

	::System::Void PLPONJAKNEB(::System::Single PMCFOMOFIHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_PLPONJAKNEB_OFFSET))(this, PMCFOMOFIHN);
	}

	::System::Void FLMHLAGHMLE(::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 AKAGDEFAGJA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_FLMHLAGHMLE_OFFSET))(this, DAAEHEHLLLD, IACKHFCLPJI, AKAGDEFAGJA);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Vector3 LAEPFBIMMBM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_LAEPFBIMMBM_OFFSET))(this);
	}

	::UnityEngine::Quaternion ADHBDABLIJH()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_ADHBDABLIJH_OFFSET))(this);
	}

	::System::Void GEAJEPKJBDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_GEAJEPKJBDG_OFFSET))(this);
	}

	::System::Void BOFDLDLDKLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_BOFDLDLDKLH_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::NGEJCFNLLKD* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::NGEJCFNLLKD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ANIEFFPLEKB(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA, ::UnityEngine::Vector3 FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IMMEJCMLKBL_ANIEFFPLEKB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
