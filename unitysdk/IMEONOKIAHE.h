#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class HJDNNLKBHBA;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define IMEONOKIAHE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1ACBE490)
#define IMEONOKIAHE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1ACBE140)
#define IMEONOKIAHE_FHBINEBBMGF_OFFSET UNITYSDK_OFFSET(0x1ACBEC10)
#define IMEONOKIAHE_GHFDHPLBLCC_OFFSET UNITYSDK_OFFSET(0x1ACBF6B0)
#define IMEONOKIAHE_HNLCFHMMNCF_OFFSET UNITYSDK_OFFSET(0x1ACBE5B0)
#define IMEONOKIAHE_HPNJKBKDNOI_OFFSET UNITYSDK_OFFSET(0x1ACBE6D0)
#define IMEONOKIAHE_JBEGJGGPMLC_OFFSET UNITYSDK_OFFSET(0x1ACBF160)
#define IMEONOKIAHE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1ACBE520)
#define IMEONOKIAHE_NPKLNLKCLBJ_OFFSET UNITYSDK_OFFSET(0x1ACBF940)
#define IMEONOKIAHE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ACBE2D0)
#define IMEONOKIAHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBE440)

inline static constexpr unsigned int IMEONOKIAHE_TypeDefinitionIndex = 73983;

class IMEONOKIAHE : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEONOKIAHE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IMEONOKIAHE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEONOKIAHE_UPDATE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEONOKIAHE_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IMEONOKIAHE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HNLCFHMMNCF(::System::Single PMNLNNGEIFM, ::HJDNNLKBHBA* POBADKEDFOE)
	{
		return ((::System::Void(*)(::System::Single, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + IMEONOKIAHE_HNLCFHMMNCF_OFFSET))(PMNLNNGEIFM, POBADKEDFOE);
	}

	static ::System::Void FHBINEBBMGF(::System::Single PMNLNNGEIFM, ::HJDNNLKBHBA* POBADKEDFOE)
	{
		return ((::System::Void(*)(::System::Single, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + IMEONOKIAHE_FHBINEBBMGF_OFFSET))(PMNLNNGEIFM, POBADKEDFOE);
	}

	static ::System::Void HPNJKBKDNOI(::System::Single PMNLNNGEIFM, ::HJDNNLKBHBA* POBADKEDFOE)
	{
		return ((::System::Void(*)(::System::Single, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + IMEONOKIAHE_HPNJKBKDNOI_OFFSET))(PMNLNNGEIFM, POBADKEDFOE);
	}

	static ::System::Boolean GHFDHPLBLCC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IMEONOKIAHE_GHFDHPLBLCC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void JBEGJGGPMLC(::System::Single PMNLNNGEIFM, ::HJDNNLKBHBA* POBADKEDFOE)
	{
		return ((::System::Void(*)(::System::Single, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + IMEONOKIAHE_JBEGJGGPMLC_OFFSET))(PMNLNNGEIFM, POBADKEDFOE);
	}

	static ::System::Void NPKLNLKCLBJ(::HJDNNLKBHBA* POBADKEDFOE)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + IMEONOKIAHE_NPKLNLKCLBJ_OFFSET))(POBADKEDFOE);
	}
};
