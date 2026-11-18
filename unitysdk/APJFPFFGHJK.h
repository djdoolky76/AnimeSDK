#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class EBEAAFHPBJG;
class JCLMLILFGPJ;
class MBJCLLBMALO;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define APJFPFFGHJK_AONIPEMMPHN_OFFSET UNITYSDK_OFFSET(0x13872AA0)
#define APJFPFFGHJK_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x138728F0)
#define APJFPFFGHJK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x138724E0)
#define APJFPFFGHJK_FKKBKCBHAML_OFFSET UNITYSDK_OFFSET(0x13872AB0)
#define APJFPFFGHJK_IIGGNFKJOIB_OFFSET UNITYSDK_OFFSET(0x13872990)
#define APJFPFFGHJK_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x138728A0)
#define APJFPFFGHJK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x13872800)
#define APJFPFFGHJK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13872640)
#define APJFPFFGHJK__CTOR_OFFSET UNITYSDK_OFFSET(0x13872790)

inline static constexpr unsigned int APJFPFFGHJK_TypeDefinitionIndex = 40987;

class APJFPFFGHJK : public ::FJCAJJEAJPC
{
public:
	::Nap::NapECS::EcsFilter* _NAEJGNJHAGN_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APJFPFFGHJK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + APJFPFFGHJK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APJFPFFGHJK_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + APJFPFFGHJK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JDDMFEELKDH(::MBJCLLBMALO* NKNNAKJNJMO, ::EBEAAFHPBJG* DKELJKPOHOC)
	{
		return ((::System::Void(*)(::PVOID, ::MBJCLLBMALO*, ::EBEAAFHPBJG*))((::PBYTE)hIl2Cpp + APJFPFFGHJK_JDDMFEELKDH_OFFSET))(this, NKNNAKJNJMO, DKELJKPOHOC);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APJFPFFGHJK_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void IIGGNFKJOIB(::JCLMLILFGPJ* GBELIHABEDH)
	{
		return ((::System::Void(*)(::JCLMLILFGPJ*))((::PBYTE)hIl2Cpp + APJFPFFGHJK_IIGGNFKJOIB_OFFSET))(GBELIHABEDH);
	}

	::Nap::NapECS::EcsFilter* AONIPEMMPHN()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + APJFPFFGHJK_AONIPEMMPHN_OFFSET))(this);
	}

	::System::Void FKKBKCBHAML(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + APJFPFFGHJK_FKKBKCBHAML_OFFSET))(this, EGEGIMGMJHN);
	}
};
