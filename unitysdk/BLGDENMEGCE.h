#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKHJIPHJNAJ.h"
#include "unitysdk/OAOOLPCNHKA.h"

class AMHGCFJOJHJ;
class AMHGCFJOJHJ_FIDLLPCNIDD;
class BIPBNDIFDOL;
class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLGDENMEGCE_ALLINMINPPL_OFFSET UNITYSDK_OFFSET(0x1857A180)
#define BLGDENMEGCE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1857AAA0)
#define BLGDENMEGCE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x185794B0)
#define BLGDENMEGCE_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x1857AB30)
#define BLGDENMEGCE_FFDJAMLPLFA_OFFSET UNITYSDK_OFFSET(0x1857A7F0)
#define BLGDENMEGCE_FMDKHEOOBOM_OFFSET UNITYSDK_OFFSET(0x1857A5B0)
#define BLGDENMEGCE_GJMNGIAPBEJ_OFFSET UNITYSDK_OFFSET(0x1857A3C0)
#define BLGDENMEGCE_HNJFIINKHHB_OFFSET UNITYSDK_OFFSET(0x1857AF50)
#define BLGDENMEGCE_JDOELLFIFID_OFFSET UNITYSDK_OFFSET(0x1857ADF0)
#define BLGDENMEGCE_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x1857A020)
#define BLGDENMEGCE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x18579D70)
#define BLGDENMEGCE_NEOHIDGLPFJ_OFFSET UNITYSDK_OFFSET(0x18579E00)
#define BLGDENMEGCE_NPOPNCPCLAC_OFFSET UNITYSDK_OFFSET(0x1857AC90)
#define BLGDENMEGCE_PGPOFMKIGDA_OFFSET UNITYSDK_OFFSET(0x18579AF0)
#define BLGDENMEGCE_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x1857B4C0)
#define BLGDENMEGCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18579930)
#define BLGDENMEGCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18579AA0)

inline static constexpr unsigned int BLGDENMEGCE_TypeDefinitionIndex = 74296;

class BLGDENMEGCE : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGDENMEGCE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGDENMEGCE_UPDATE_OFFSET))(this);
	}

	static ::System::Boolean PGPOFMKIGDA(::System::Single PMNLNNGEIFM, ::ENGKPGFGGLM* FFNKDGGHBPP, ::AMHGCFJOJHJ_FIDLLPCNIDD* NCHEALMACAA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Single, ::ENGKPGFGGLM*, ::AMHGCFJOJHJ_FIDLLPCNIDD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_PGPOFMKIGDA_OFFSET))(PMNLNNGEIFM, FFNKDGGHBPP, NCHEALMACAA, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean NEOHIDGLPFJ(::AMHGCFJOJHJ* MEPOKLMKCBF, ::System::Int32 BODFDNDJDOJ, ::BIPBNDIFDOL*& EALMIOONPOK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* AKBJMFGBNPJ)
	{
		return ((::System::Boolean(*)(::AMHGCFJOJHJ*, ::System::Int32, ::BIPBNDIFDOL*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_NEOHIDGLPFJ_OFFSET))(MEPOKLMKCBF, BODFDNDJDOJ, EALMIOONPOK, AKBJMFGBNPJ);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void ALLINMINPPL(::BIPBNDIFDOL* HHIJHDFHPOI, ::KKHJIPHJNAJ IGAAKDOIPNN, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::BIPBNDIFDOL*, ::KKHJIPHJNAJ, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_ALLINMINPPL_OFFSET))(HHIJHDFHPOI, IGAAKDOIPNN, KECKGDFIALJ);
	}

	static ::System::Boolean GJMNGIAPBEJ(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BLGDENMEGCE_GJMNGIAPBEJ_OFFSET))(NJNCGJLHLKC);
	}

	static ::System::Boolean FMDKHEOOBOM(::System::Int32 BODFDNDJDOJ, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_FMDKHEOOBOM_OFFSET))(BODFDNDJDOJ, KECKGDFIALJ);
	}

	static ::System::Void FFDJAMLPLFA(::BIPBNDIFDOL* HHIJHDFHPOI, ::KKHJIPHJNAJ IGAAKDOIPNN, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::BIPBNDIFDOL*, ::KKHJIPHJNAJ, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_FFDJAMLPLFA_OFFSET))(HHIJHDFHPOI, IGAAKDOIPNN, KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGDENMEGCE_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void NPOPNCPCLAC(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_NPOPNCPCLAC_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void JDOELLFIFID(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_JDOELLFIFID_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void HNJFIINKHHB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_HNJFIINKHHB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + BLGDENMEGCE_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}
};
