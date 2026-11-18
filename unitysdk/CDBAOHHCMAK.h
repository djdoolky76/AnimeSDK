#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/LevelQuestConditionOperation.h"
#include "unitysdk/MoleMole/Battle/LevelQuestOperation.h"
#include "unitysdk/OAOOLPCNHKA.h"

class EGBACDONJPO;
class ENGKPGFGGLM;
class OEKFGKDAPJE;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }

#define CDBAOHHCMAK_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x159B5240)
#define CDBAOHHCMAK_BBAFOKPMDGL_OFFSET UNITYSDK_OFFSET(0x159B5870)
#define CDBAOHHCMAK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x159B4930)
#define CDBAOHHCMAK_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x159B4C80)
#define CDBAOHHCMAK_HOHNHKBFMHI_OFFSET UNITYSDK_OFFSET(0x159B5110)
#define CDBAOHHCMAK_MEPAHCAKNAG_OFFSET UNITYSDK_OFFSET(0x159B4FC0)
#define CDBAOHHCMAK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x159B5630)
#define CDBAOHHCMAK_NAEJJNGHPEB_OFFSET UNITYSDK_OFFSET(0x159B56C0)
#define CDBAOHHCMAK_NEOGHOJHBLL_OFFSET UNITYSDK_OFFSET(0x159B5730)
#define CDBAOHHCMAK_PDCOGLHFJJI_OFFSET UNITYSDK_OFFSET(0x159B4D50)
#define CDBAOHHCMAK_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x159B55E0)
#define CDBAOHHCMAK_PPOCHMOCNAH_OFFSET UNITYSDK_OFFSET(0x159B53C0)
#define CDBAOHHCMAK__CTOR_OFFSET UNITYSDK_OFFSET(0x159B4C30)

inline static constexpr unsigned int CDBAOHHCMAK_TypeDefinitionIndex = 58076;

class CDBAOHHCMAK : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBAOHHCMAK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void MEPAHCAKNAG(::OEKFGKDAPJE* GBELIHABEDH, ::System::Int32 GAJKPHIHLEI, ::MoleMole::Battle::LevelQuestOperation CBBCJFPGBOK)
	{
		return ((::System::Void(*)(::OEKFGKDAPJE*, ::System::Int32, ::MoleMole::Battle::LevelQuestOperation))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_MEPAHCAKNAG_OFFSET))(GBELIHABEDH, GAJKPHIHLEI, CBBCJFPGBOK);
	}

	static ::System::Int32 HOHNHKBFMHI(::OEKFGKDAPJE* GBELIHABEDH, ::System::Int32 GAJKPHIHLEI)
	{
		return ((::System::Int32(*)(::OEKFGKDAPJE*, ::System::Int32))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_HOHNHKBFMHI_OFFSET))(GBELIHABEDH, GAJKPHIHLEI);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Boolean PPOCHMOCNAH(::OEKFGKDAPJE* GBELIHABEDH, ::System::Int32 GAJKPHIHLEI, ::System::Action* CGLEGFPKCAM, ::System::Action* COFINDNEAHE, ::System::Action* HFGEDPLPMDI)
	{
		return ((::System::Boolean(*)(::OEKFGKDAPJE*, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_PPOCHMOCNAH_OFFSET))(GBELIHABEDH, GAJKPHIHLEI, CGLEGFPKCAM, COFINDNEAHE, HFGEDPLPMDI);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_PMHJBNNPCLB_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Int32 NAEJJNGHPEB(::System::Int32 IDKHENBBLDB, ::MoleMole::Battle::LevelQuestConditionOperation CBBCJFPGBOK, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::System::Int32, ::MoleMole::Battle::LevelQuestConditionOperation, ::System::Int32))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_NAEJJNGHPEB_OFFSET))(IDKHENBBLDB, CBBCJFPGBOK, EGEGIMGMJHN);
	}

	::System::Void PDCOGLHFJJI(::EGBACDONJPO* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::EGBACDONJPO*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_PDCOGLHFJJI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Int32 NEOGHOJHBLL(::OEKFGKDAPJE* GBELIHABEDH, ::System::Int32 GAJKPHIHLEI, ::System::Boolean NMCDILKHHIL)
	{
		return ((::System::Int32(*)(::OEKFGKDAPJE*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_NEOGHOJHBLL_OFFSET))(GBELIHABEDH, GAJKPHIHLEI, NMCDILKHHIL);
	}

	static ::System::Void BBAFOKPMDGL(::OEKFGKDAPJE* GBELIHABEDH, ::System::Int32 GAJKPHIHLEI, ::System::Boolean NMCDILKHHIL, ::MoleMole::Battle::LevelQuestConditionOperation CBBCJFPGBOK, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::OEKFGKDAPJE*, ::System::Int32, ::System::Boolean, ::MoleMole::Battle::LevelQuestConditionOperation, ::System::Int32))((::PBYTE)hIl2Cpp + CDBAOHHCMAK_BBAFOKPMDGL_OFFSET))(GBELIHABEDH, GAJKPHIHLEI, NMCDILKHHIL, CBBCJFPGBOK, EGEGIMGMJHN);
	}
};
