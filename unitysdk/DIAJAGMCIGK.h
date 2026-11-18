#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENEEEAPOCEL.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"

class ELOPDAHLHMH;
class ENGKPGFGGLM;
class NDLAFLLJANL;
class PPODAINACLI;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIAJAGMCIGK_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x12084710)
#define DIAJAGMCIGK_BOBMKKEDDLB_OFFSET UNITYSDK_OFFSET(0x12084330)
#define DIAJAGMCIGK_CBOKFEOGLKK_OFFSET UNITYSDK_OFFSET(0x12083EC0)
#define DIAJAGMCIGK_CIAEFLHMJFP_OFFSET UNITYSDK_OFFSET(0x12081F00)
#define DIAJAGMCIGK_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x12083520)
#define DIAJAGMCIGK_CNAJNGODJPI_OFFSET UNITYSDK_OFFSET(0x120847B0)
#define DIAJAGMCIGK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12081710)
#define DIAJAGMCIGK_DJNPPDJHNHO_OFFSET UNITYSDK_OFFSET(0x12083960)
#define DIAJAGMCIGK_DKAOFNEINJB_OFFSET UNITYSDK_OFFSET(0x12083C10)
#define DIAJAGMCIGK_DKEAJPLOGOF_OFFSET UNITYSDK_OFFSET(0x12082610)
#define DIAJAGMCIGK_DOJCNOMJHFN_OFFSET UNITYSDK_OFFSET(0x12082420)
#define DIAJAGMCIGK_EMBEBACINLI_OFFSET UNITYSDK_OFFSET(0x120849F0)
#define DIAJAGMCIGK_FCNEOHKOOFE_OFFSET UNITYSDK_OFFSET(0x12082490)
#define DIAJAGMCIGK_FNOPOEOKPGB_OFFSET UNITYSDK_OFFSET(0x12082F40)
#define DIAJAGMCIGK_GNIFENKGKOJ_OFFSET UNITYSDK_OFFSET(0x12085210)
#define DIAJAGMCIGK_GPFEGMEFMEB_OFFSET UNITYSDK_OFFSET(0x12081CA0)
#define DIAJAGMCIGK_IAGKCBAKBBA_OFFSET UNITYSDK_OFFSET(0x12085350)
#define DIAJAGMCIGK_IHHOJJFPEAJ_OFFSET UNITYSDK_OFFSET(0x12083D40)
#define DIAJAGMCIGK_JEIEKHJHCGB_OFFSET UNITYSDK_OFFSET(0x12081F70)
#define DIAJAGMCIGK_KIFFCONJHMF_OFFSET UNITYSDK_OFFSET(0x12082120)
#define DIAJAGMCIGK_KNILLLMDDKG_OFFSET UNITYSDK_OFFSET(0x120827F0)
#define DIAJAGMCIGK_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x12082A00)
#define DIAJAGMCIGK_LNCGPPEPCPK_OFFSET UNITYSDK_OFFSET(0x12082850)
#define DIAJAGMCIGK_LPPCFFNMJHF_OFFSET UNITYSDK_OFFSET(0x120831F0)
#define DIAJAGMCIGK_MCLPHBEGMFK_OFFSET UNITYSDK_OFFSET(0x12084130)
#define DIAJAGMCIGK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x120852C0)
#define DIAJAGMCIGK_NIJMLMBFLLI_OFFSET UNITYSDK_OFFSET(0x12083F30)
#define DIAJAGMCIGK_OLJNALFMKPA_OFFSET UNITYSDK_OFFSET(0x120834C0)
#define DIAJAGMCIGK_OMPKIPJFCML_OFFSET UNITYSDK_OFFSET(0x12081E40)
#define DIAJAGMCIGK_PBOKJKHHEHD_OFFSET UNITYSDK_OFFSET(0x120845C0)
#define DIAJAGMCIGK_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x120835B0)
#define DIAJAGMCIGK_UPDATE_OFFSET UNITYSDK_OFFSET(0x12081AE0)
#define DIAJAGMCIGK__CTOR_OFFSET UNITYSDK_OFFSET(0x12081C50)

inline static constexpr unsigned int DIAJAGMCIGK_TypeDefinitionIndex = 62413;

class DIAJAGMCIGK : public ::ENEEEAPOCEL
{
public:
	::Nap::NapECS::EcsFilter* IDPCLILBEAF; // 0x20
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_UPDATE_OFFSET))(this);
	}

	static ::System::Void GPFEGMEFMEB(::PPODAINACLI* EMBMHDIAGDE, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PPODAINACLI*, ::System::String*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_GPFEGMEFMEB_OFFSET))(EMBMHDIAGDE, AELLPLBJELA);
	}

	static ::System::Void CIAEFLHMJFP(::PPODAINACLI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_CIAEFLHMJFP_OFFSET))(BIEIBKELCPP);
	}

	static ::System::Void JEIEKHJHCGB(::System::Single PMNLNNGEIFM, ::PPODAINACLI* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::System::Single, ::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_JEIEKHJHCGB_OFFSET))(PMNLNNGEIFM, EMBMHDIAGDE);
	}

	static ::System::Void DOJCNOMJHFN(::PPODAINACLI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DOJCNOMJHFN_OFFSET))(BIEIBKELCPP);
	}

	::System::Void FCNEOHKOOFE(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_FCNEOHKOOFE_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Boolean KIFFCONJHMF(::PPODAINACLI* EMBMHDIAGDE, ::System::Single NGFJBFGFGNO)
	{
		return ((::System::Boolean(*)(::PPODAINACLI*, ::System::Single))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_KIFFCONJHMF_OFFSET))(EMBMHDIAGDE, NGFJBFGFGNO);
	}

	static ::System::Void KNILLLMDDKG(::PPODAINACLI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_KNILLLMDDKG_OFFSET))(BIEIBKELCPP);
	}

	static ::System::Void LNCGPPEPCPK(::PPODAINACLI* GBELIHABEDH, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PPODAINACLI*, ::System::String*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_LNCGPPEPCPK_OFFSET))(GBELIHABEDH, AELLPLBJELA);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void LPPCFFNMJHF(::PPODAINACLI* BIEIBKELCPP, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PPODAINACLI*, ::System::Single))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_LPPCFFNMJHF_OFFSET))(BIEIBKELCPP, PMNLNNGEIFM);
	}

	static ::System::Void FNOPOEOKPGB(::ELOPDAHLHMH* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::ELOPDAHLHMH*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_FNOPOEOKPGB_OFFSET))(FFNKDGGHBPP, DJMEFDIHNDO);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void DJNPPDJHNHO(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GEEKODJDNLG, ::MoleMole::Config::EnterBattleState KDEHMPGOCEP, ::MoleMole::Config::EnterBattleState PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DJNPPDJHNHO_OFFSET))(this, GEEKODJDNLG, KDEHMPGOCEP, PADJNMGMGHO);
	}

	static ::System::Boolean DKAOFNEINJB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DKAOFNEINJB_OFFSET))();
	}

	static ::System::Void IHHOJJFPEAJ(::PPODAINACLI* GBELIHABEDH, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PPODAINACLI*, ::System::String*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_IHHOJJFPEAJ_OFFSET))(GBELIHABEDH, AELLPLBJELA);
	}

	static ::System::Void OMPKIPJFCML(::PPODAINACLI* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_OMPKIPJFCML_OFFSET))(EMBMHDIAGDE);
	}

	static ::System::Void CBOKFEOGLKK(::PPODAINACLI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_CBOKFEOGLKK_OFFSET))(BIEIBKELCPP);
	}

	::System::Void NIJMLMBFLLI(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GEEKODJDNLG, ::System::Boolean FOFHCEMHBGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_NIJMLMBFLLI_OFFSET))(this, GEEKODJDNLG, FOFHCEMHBGL);
	}

	static ::System::Void MCLPHBEGMFK(::PPODAINACLI* BIEIBKELCPP, ::MoleMole::Config::InlevelCameraState IIHGNBNLLNG)
	{
		return ((::System::Void(*)(::PPODAINACLI*, ::MoleMole::Config::InlevelCameraState))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_MCLPHBEGMFK_OFFSET))(BIEIBKELCPP, IIHGNBNLLNG);
	}

	static ::System::Boolean BOBMKKEDDLB(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& DDKJFOKEBPI, ::PPODAINACLI* EMBMHDIAGDE, ::System::Single NGFJBFGFGNO)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&, ::PPODAINACLI*, ::System::Single))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_BOBMKKEDDLB_OFFSET))(DDKJFOKEBPI, EMBMHDIAGDE, NGFJBFGFGNO);
	}

	::System::Void PBOKJKHHEHD(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_PBOKJKHHEHD_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void CNAJNGODJPI(::PPODAINACLI* EMBMHDIAGDE, ::System::String* AELLPLBJELA, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PPODAINACLI*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_CNAJNGODJPI_OFFSET))(EMBMHDIAGDE, AELLPLBJELA, EGEGIMGMJHN);
	}

	static ::System::Void EMBEBACINLI(::PPODAINACLI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_EMBEBACINLI_OFFSET))(BIEIBKELCPP);
	}

	static ::System::Boolean DKEAJPLOGOF(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* MAGNIBCKAIL, ::System::Single NGFJBFGFGNO)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DKEAJPLOGOF_OFFSET))(OMPHGGCEIBD, MAGNIBCKAIL, NGFJBFGFGNO);
	}

	static ::System::Void GNIFENKGKOJ(::NDLAFLLJANL* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::NDLAFLLJANL*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_GNIFENKGKOJ_OFFSET))(EMBMHDIAGDE);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void IAGKCBAKBBA(::System::Single PMNLNNGEIFM, ::PPODAINACLI* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::System::Single, ::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_IAGKCBAKBBA_OFFSET))(PMNLNNGEIFM, EMBMHDIAGDE);
	}

	static ::System::Void OLJNALFMKPA(::PPODAINACLI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::PPODAINACLI*))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_OLJNALFMKPA_OFFSET))(BIEIBKELCPP);
	}
};
