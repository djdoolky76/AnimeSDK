#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ENGKPGFGGLM;
class JOBGPOKPNHO;
class MGFECCAJFMI;
class OLHCPDPPIIH;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCharacterAttachment; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define COJKPPCNJCM_ANPKODDINND_OFFSET UNITYSDK_OFFSET(0x147B2A80)
#define COJKPPCNJCM_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x147B1DC0)
#define COJKPPCNJCM_BHNLMJNMIHF_OFFSET UNITYSDK_OFFSET(0x147B3EF0)
#define COJKPPCNJCM_BMFKKFGNAEC_OFFSET UNITYSDK_OFFSET(0x147B0FA0)
#define COJKPPCNJCM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x147B0060)
#define COJKPPCNJCM_DJCAFAAMEBD_OFFSET UNITYSDK_OFFSET(0x147B1840)
#define COJKPPCNJCM_EEHCABHLPEC_OFFSET UNITYSDK_OFFSET(0x147B4720)
#define COJKPPCNJCM_GDCKPBIIKDB_OFFSET UNITYSDK_OFFSET(0x147B1460)
#define COJKPPCNJCM_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x147B2DF0)
#define COJKPPCNJCM_IBLGNHKDPMA_OFFSET UNITYSDK_OFFSET(0x147B3080)
#define COJKPPCNJCM_JGIIFKKHLDF_OFFSET UNITYSDK_OFFSET(0x147B1130)
#define COJKPPCNJCM_KAGMKHODBEH_OFFSET UNITYSDK_OFFSET(0x147B3C30)
#define COJKPPCNJCM_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x147B13A0)
#define COJKPPCNJCM_LIGICMNNJPM_OFFSET UNITYSDK_OFFSET(0x147B0680)
#define COJKPPCNJCM_LJKPIDHOCIO_OFFSET UNITYSDK_OFFSET(0x147B0F40)
#define COJKPPCNJCM_LLCNNDPOGBL_OFFSET UNITYSDK_OFFSET(0x147B2250)
#define COJKPPCNJCM_MANDKEJBMMC_OFFSET UNITYSDK_OFFSET(0x147B05F0)
#define COJKPPCNJCM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x147B17B0)
#define COJKPPCNJCM_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x147B0430)
#define COJKPPCNJCM_PPCDENAEMBH_OFFSET UNITYSDK_OFFSET(0x147B3B80)
#define COJKPPCNJCM__CTOR_OFFSET UNITYSDK_OFFSET(0x147B05A0)

inline static constexpr unsigned int COJKPPCNJCM_TypeDefinitionIndex = 52983;

class COJKPPCNJCM : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJKPPCNJCM__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PostSimulationUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJKPPCNJCM_POSTSIMULATIONUPDATE_OFFSET))(this);
	}

	::System::Void MANDKEJBMMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJKPPCNJCM_MANDKEJBMMC_OFFSET))(this);
	}

	static ::System::Void LIGICMNNJPM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_LIGICMNNJPM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void LJKPIDHOCIO(::OLHCPDPPIIH* GHOHABHMFNF)
	{
		return ((::System::Void(*)(::OLHCPDPPIIH*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_LJKPIDHOCIO_OFFSET))(GHOHABHMFNF);
	}

	static ::System::Void JGIIFKKHLDF(::OLHCPDPPIIH* GHOHABHMFNF, ::MGFECCAJFMI* KMKCJKHEEHJ)
	{
		return ((::System::Void(*)(::OLHCPDPPIIH*, ::MGFECCAJFMI*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_JGIIFKKHLDF_OFFSET))(GHOHABHMFNF, KMKCJKHEEHJ);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::MGFECCAJFMI* DJCAFAAMEBD(::OLHCPDPPIIH* CHPPFKKIKMA, ::System::String* FBKNNCJAMNI, ::System::String* GOBCDIANBDB, ::System::Boolean OBHNHBKCNGN)
	{
		return ((::MGFECCAJFMI*(*)(::OLHCPDPPIIH*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + COJKPPCNJCM_DJCAFAAMEBD_OFFSET))(CHPPFKKIKMA, FBKNNCJAMNI, GOBCDIANBDB, OBHNHBKCNGN);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void LLCNNDPOGBL(::OLHCPDPPIIH* CHPPFKKIKMA, ::System::Boolean HFMHOELKCAJ, ::System::String* FBKNNCJAMNI, ::System::String* GOBCDIANBDB, ::System::Boolean NMOIPKPKPKB, ::System::Int32 EMHLAKPBPKD, ::System::Single DIGAKEMJPMO, ::System::Single LBCNKBHOKPP, ::System::Int32 EIDPKJIOANG)
	{
		return ((::System::Void(*)(::OLHCPDPPIIH*, ::System::Boolean, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + COJKPPCNJCM_LLCNNDPOGBL_OFFSET))(CHPPFKKIKMA, HFMHOELKCAJ, FBKNNCJAMNI, GOBCDIANBDB, NMOIPKPKPKB, EMHLAKPBPKD, DIGAKEMJPMO, LBCNKBHOKPP, EIDPKJIOANG);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + COJKPPCNJCM_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::MoleMole::Config::ConfigCharacterAttachment* PPCDENAEMBH(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::Config::ConfigCharacterAttachment*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COJKPPCNJCM_PPCDENAEMBH_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Void KAGMKHODBEH(::OLHCPDPPIIH* GHOHABHMFNF, ::System::String* GMEDBALJCLB, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::OLHCPDPPIIH*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + COJKPPCNJCM_KAGMKHODBEH_OFFSET))(GHOHABHMFNF, GMEDBALJCLB, FIPHFGHNNBE);
	}

	static ::System::Void ANPKODDINND(::OLHCPDPPIIH* CHPPFKKIKMA, ::MGFECCAJFMI* CJEKDBFDGID, ::System::String* GOBCDIANBDB)
	{
		return ((::System::Void(*)(::OLHCPDPPIIH*, ::MGFECCAJFMI*, ::System::String*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_ANPKODDINND_OFFSET))(CHPPFKKIKMA, CJEKDBFDGID, GOBCDIANBDB);
	}

	static ::System::Void BMFKKFGNAEC(::OLHCPDPPIIH* GHOHABHMFNF)
	{
		return ((::System::Void(*)(::OLHCPDPPIIH*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_BMFKKFGNAEC_OFFSET))(GHOHABHMFNF);
	}

	static ::System::Void GDCKPBIIKDB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::JOBGPOKPNHO* KFJKACIFBME)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::JOBGPOKPNHO*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_GDCKPBIIKDB_OFFSET))(KECKGDFIALJ, KFJKACIFBME);
	}

	static ::System::Void IBLGNHKDPMA(::MoleMole::CharacterScriptConfig* DFMKILICPFB, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::CharacterScriptConfig*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_IBLGNHKDPMA_OFFSET))(DFMKILICPFB, KECKGDFIALJ);
	}

	static ::System::Void BHNLMJNMIHF(::System::String* BGMJNHGFMGH, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* JMBNHKNMAND)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_BHNLMJNMIHF_OFFSET))(BGMJNHGFMGH, NJOAJLDJCCJ, KECKGDFIALJ, JMBNHKNMAND);
	}

	static ::System::Void EEHCABHLPEC(::OLHCPDPPIIH* GHOHABHMFNF, ::System::String* HCFAHBNJOML, ::UnityEngine::Vector2 DIBJOPFACAD, ::System::Single IGGIJLMKOFM)
	{
		return ((::System::Void(*)(::OLHCPDPPIIH*, ::System::String*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + COJKPPCNJCM_EEHCABHLPEC_OFFSET))(GHOHABHMFNF, HCFAHBNJOML, DIBJOPFACAD, IGGIJLMKOFM);
	}
};
