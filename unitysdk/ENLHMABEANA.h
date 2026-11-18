#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/ENLHMABEANA_GLJFLKFJPAA.h"
#include "unitysdk/ENLHMABEANA_INNALGMCBBE.h"

class AKOEPKBKAMO;
class ALPKMOKNBML;
class BMHDDHOEFMI;
class HLFPOHLJFKO;
class IBAFGAAAFEJ;
class IJNFEHLCOEP;
class JJNFLFFJNMD;
class OMDAPGKMILG;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENLHMABEANA_AGLEJOGPNKI_OFFSET UNITYSDK_OFFSET(0x1237A300)
#define ENLHMABEANA_AJMHMGIBDLJ_OFFSET UNITYSDK_OFFSET(0x12377420)
#define ENLHMABEANA_BEIMOLLMGDL_OFFSET UNITYSDK_OFFSET(0x12377D20)
#define ENLHMABEANA_BOBBOKOCOKL_OFFSET UNITYSDK_OFFSET(0x12379480)
#define ENLHMABEANA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x123786E0)
#define ENLHMABEANA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12376EE0)
#define ENLHMABEANA_DDANAHNBDMB_OFFSET UNITYSDK_OFFSET(0x12378050)
#define ENLHMABEANA_DJCDPOKLEOC_OFFSET UNITYSDK_OFFSET(0x123773D0)
#define ENLHMABEANA_FCJJDJAEADK_OFFSET UNITYSDK_OFFSET(0x12379950)
#define ENLHMABEANA_FEEEOJBKAGD_OFFSET UNITYSDK_OFFSET(0x12378940)
#define ENLHMABEANA_FJMFNJFMELJ_OFFSET UNITYSDK_OFFSET(0x12379F60)
#define ENLHMABEANA_FNCIMGDGAPI_OFFSET UNITYSDK_OFFSET(0x12378300)
#define ENLHMABEANA_GKDOHMDGEIC_OFFSET UNITYSDK_OFFSET(0x12378770)
#define ENLHMABEANA_IAIMGIJLEGP_OFFSET UNITYSDK_OFFSET(0x12377590)
#define ENLHMABEANA_IMNIIFMHGMG_OFFSET UNITYSDK_OFFSET(0x12378220)
#define ENLHMABEANA_JMKPAKJAIMG_OFFSET UNITYSDK_OFFSET(0x123772F0)
#define ENLHMABEANA_MBKDOFPJPAM_OFFSET UNITYSDK_OFFSET(0x12379C10)
#define ENLHMABEANA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x12377340)
#define ENLHMABEANA_NMPLNPGDGIK_OFFSET UNITYSDK_OFFSET(0x12378460)
#define ENLHMABEANA_PCGFFGFHDAI_OFFSET UNITYSDK_OFFSET(0x1237A460)
#define ENLHMABEANA_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x12379610)
#define ENLHMABEANA_UPDATE_OFFSET UNITYSDK_OFFSET(0x123770A0)
#define ENLHMABEANA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12377260)
#define ENLHMABEANA__CTOR_OFFSET UNITYSDK_OFFSET(0x12377210)

inline static constexpr unsigned int ENLHMABEANA_TypeDefinitionIndex = 92062;

class ENLHMABEANA : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::List_1<::IJNFEHLCOEP*>** StaticGet_LDCJLNAFMIK()
	{
		return (::System::Collections::Generic::List_1<::IJNFEHLCOEP*>**)Il2CppClass::FromTypeDefinitionIndex(ENLHMABEANA_TypeDefinitionIndex)->GetStaticField(0x40860);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLHMABEANA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENLHMABEANA__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ENLHMABEANA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLHMABEANA_UPDATE_OFFSET))(this);
	}

	::System::Void JMKPAKJAIMG(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MAINFHBDABE, ::System::Int32 MOGFJCCNEHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + ENLHMABEANA_JMKPAKJAIMG_OFFSET))(this, MAINFHBDABE, MOGFJCCNEHN);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ENLHMABEANA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::JJNFLFFJNMD* DJCDPOKLEOC(::HLFPOHLJFKO* DFMKILICPFB)
	{
		return ((::JJNFLFFJNMD*(*)(::PVOID, ::HLFPOHLJFKO*))((::PBYTE)hIl2Cpp + ENLHMABEANA_DJCDPOKLEOC_OFFSET))(this, DFMKILICPFB);
	}

	::System::Int32 AJMHMGIBDLJ(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OCLKECEIKLF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + ENLHMABEANA_AJMHMGIBDLJ_OFFSET))(this, OCLKECEIKLF);
	}

	static ::System::Void IAIMGIJLEGP(::AKOEPKBKAMO* JHPFMIFAKDE, ::System::Collections::Generic::List_1<::BMHDDHOEFMI*>* KOMBBDHBNCA)
	{
		return ((::System::Void(*)(::AKOEPKBKAMO*, ::System::Collections::Generic::List_1<::BMHDDHOEFMI*>*))((::PBYTE)hIl2Cpp + ENLHMABEANA_IAIMGIJLEGP_OFFSET))(JHPFMIFAKDE, KOMBBDHBNCA);
	}

	static ::System::Void DDANAHNBDMB(::AKOEPKBKAMO* JHPFMIFAKDE, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::AKOEPKBKAMO*, ::System::Single))((::PBYTE)hIl2Cpp + ENLHMABEANA_DDANAHNBDMB_OFFSET))(JHPFMIFAKDE, PMNLNNGEIFM);
	}

	::ALPKMOKNBML* IMNIIFMHGMG(::HLFPOHLJFKO* DFMKILICPFB)
	{
		return ((::ALPKMOKNBML*(*)(::PVOID, ::HLFPOHLJFKO*))((::PBYTE)hIl2Cpp + ENLHMABEANA_IMNIIFMHGMG_OFFSET))(this, DFMKILICPFB);
	}

	static ::System::Void FNCIMGDGAPI(::AKOEPKBKAMO* JHPFMIFAKDE)
	{
		return ((::System::Void(*)(::AKOEPKBKAMO*))((::PBYTE)hIl2Cpp + ENLHMABEANA_FNCIMGDGAPI_OFFSET))(JHPFMIFAKDE);
	}

	::IBAFGAAAFEJ* NMPLNPGDGIK(::HLFPOHLJFKO* DFMKILICPFB)
	{
		return ((::IBAFGAAAFEJ*(*)(::PVOID, ::HLFPOHLJFKO*))((::PBYTE)hIl2Cpp + ENLHMABEANA_NMPLNPGDGIK_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLHMABEANA_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void GKDOHMDGEIC(::AKOEPKBKAMO* JHPFMIFAKDE, ::System::Int32& ELHHHDPGGCJ, ::System::Int32& GLKNCIDNNOG, ::System::Collections::Generic::List_1<::System::Int32>*& JBFPEJCOPPK, ::System::Collections::Generic::List_1<::System::Int32>*& KNJAPBBLEEC)
	{
		return ((::System::Void(*)(::AKOEPKBKAMO*, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + ENLHMABEANA_GKDOHMDGEIC_OFFSET))(JHPFMIFAKDE, ELHHHDPGGCJ, GLKNCIDNNOG, JBFPEJCOPPK, KNJAPBBLEEC);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + ENLHMABEANA_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void FJMFNJFMELJ(::AKOEPKBKAMO* JHPFMIFAKDE, ::System::Int32 GLKNCIDNNOG, ::System::Collections::Generic::List_1<::System::Int32>* JBFPEJCOPPK)
	{
		return ((::System::Void(*)(::AKOEPKBKAMO*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ENLHMABEANA_FJMFNJFMELJ_OFFSET))(JHPFMIFAKDE, GLKNCIDNNOG, JBFPEJCOPPK);
	}

	::System::Void FCJJDJAEADK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + ENLHMABEANA_FCJJDJAEADK_OFFSET))(this, KECKGDFIALJ, KMMGKJPAOMF);
	}

	static ::System::Int32 FEEEOJBKAGD(::AKOEPKBKAMO* JHPFMIFAKDE, ::System::Collections::Generic::List_1<::System::Int32>*& JBFPEJCOPPK, ::System::Collections::Generic::List_1<::System::Int32>*& KNJAPBBLEEC)
	{
		return ((::System::Int32(*)(::AKOEPKBKAMO*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + ENLHMABEANA_FEEEOJBKAGD_OFFSET))(JHPFMIFAKDE, JBFPEJCOPPK, KNJAPBBLEEC);
	}

	static ::IBAFGAAAFEJ* AGLEJOGPNKI(::System::Collections::Generic::List_1<::IBAFGAAAFEJ*>* DJLOKMMLFJC)
	{
		return ((::IBAFGAAAFEJ*(*)(::System::Collections::Generic::List_1<::IBAFGAAAFEJ*>*))((::PBYTE)hIl2Cpp + ENLHMABEANA_AGLEJOGPNKI_OFFSET))(DJLOKMMLFJC);
	}

	static ::System::Void BEIMOLLMGDL(::ENLHMABEANA_INNALGMCBBE& param_0, ::ENLHMABEANA_GLJFLKFJPAA& param_1)
	{
		return ((::System::Void(*)(::ENLHMABEANA_INNALGMCBBE&, ::ENLHMABEANA_GLJFLKFJPAA&))((::PBYTE)hIl2Cpp + ENLHMABEANA_BEIMOLLMGDL_OFFSET))(param_0, param_1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BOBBOKOCOKL(::System::Int32 GLKNCIDNNOG, ::System::Int32& ELHHHDPGGCJ, ::System::Int32& MOGFJCCNEHN)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ENLHMABEANA_BOBBOKOCOKL_OFFSET))(GLKNCIDNNOG, ELHHHDPGGCJ, MOGFJCCNEHN);
	}

	static ::System::Void PCGFFGFHDAI(::AKOEPKBKAMO* JHPFMIFAKDE, ::OMDAPGKMILG* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::AKOEPKBKAMO*, ::OMDAPGKMILG*))((::PBYTE)hIl2Cpp + ENLHMABEANA_PCGFFGFHDAI_OFFSET))(JHPFMIFAKDE, LJBPECKCCEA);
	}

	::System::Void MBKDOFPJPAM(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 ENGBBMDACHJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + ENLHMABEANA_MBKDOFPJPAM_OFFSET))(this, KECKGDFIALJ, ENGBBMDACHJ);
	}
};
