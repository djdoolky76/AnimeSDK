#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/DNKIEBOCMNJ.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/IEGMIHHJMEP_AHLDNOIDKMJ.h"
#include "unitysdk/IEGMIHHJMEP_GGKCBDPBIBF.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Nullable_1.h"

class EBEAAFHPBJG;
class GBAJCFMAIHG;
class JCLMLILFGPJ;
class MBJCLLBMALO;
class MOKLLADBIFF;
class PHCAOEMIJPJ;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHJAHPELLKB_ADNHEJNLFMF_1_OFFSET UNITYSDK_OFFSET(0x147CD2C0)
#define DHJAHPELLKB_ADNHEJNLFMF_OFFSET UNITYSDK_OFFSET(0x147CC070)
#define DHJAHPELLKB_AONIPEMMPHN_OFFSET UNITYSDK_OFFSET(0x147CC350)
#define DHJAHPELLKB_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x147CD7C0)
#define DHJAHPELLKB_BBGPCNHDCIP_OFFSET UNITYSDK_OFFSET(0x147CDD00)
#define DHJAHPELLKB_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x147CCD40)
#define DHJAHPELLKB_BNGIACFDOFL_OFFSET UNITYSDK_OFFSET(0x147CC2A0)
#define DHJAHPELLKB_BOFAKHALPPO_OFFSET UNITYSDK_OFFSET(0x147CEB30)
#define DHJAHPELLKB_CCLPNOOOBLO_OFFSET UNITYSDK_OFFSET(0x147CE3A0)
#define DHJAHPELLKB_CDHHGHHEHHB_OFFSET UNITYSDK_OFFSET(0x147CD540)
#define DHJAHPELLKB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x147CAF70)
#define DHJAHPELLKB_DDCHAAENEAL_OFFSET UNITYSDK_OFFSET(0x147CD670)
#define DHJAHPELLKB_DILMOGMELGN_OFFSET UNITYSDK_OFFSET(0x147CD900)
#define DHJAHPELLKB_EOGHJOGIOEI_OFFSET UNITYSDK_OFFSET(0x147CC340)
#define DHJAHPELLKB_FBFCKIBLFKD_OFFSET UNITYSDK_OFFSET(0x147CE240)
#define DHJAHPELLKB_FGFJIGMLHMM_OFFSET UNITYSDK_OFFSET(0x147CEB20)
#define DHJAHPELLKB_FIDJIHEALOI_OFFSET UNITYSDK_OFFSET(0x147CC360)
#define DHJAHPELLKB_FKKBKCBHAML_OFFSET UNITYSDK_OFFSET(0x147CC290)
#define DHJAHPELLKB_GJALJFGPEHN_OFFSET UNITYSDK_OFFSET(0x147CD850)
#define DHJAHPELLKB_GJDGHNOLDBB_OFFSET UNITYSDK_OFFSET(0x147CCDE0)
#define DHJAHPELLKB_HALMLHBNBMH_OFFSET UNITYSDK_OFFSET(0x147CB900)
#define DHJAHPELLKB_HAOPNEBHDEJ_OFFSET UNITYSDK_OFFSET(0x147CE550)
#define DHJAHPELLKB_HEGKFJPDKOD_OFFSET UNITYSDK_OFFSET(0x147CBA20)
#define DHJAHPELLKB_HLMLHPMNIMA_OFFSET UNITYSDK_OFFSET(0x147CC410)
#define DHJAHPELLKB_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x147CDE60)
#define DHJAHPELLKB_JINKFKHMKOF_OFFSET UNITYSDK_OFFSET(0x147CD550)
#define DHJAHPELLKB_JMNPNGBFHAJ_OFFSET UNITYSDK_OFFSET(0x147CDF50)
#define DHJAHPELLKB_KAGMIJBNMHB_OFFSET UNITYSDK_OFFSET(0x147CC210)
#define DHJAHPELLKB_LHHKHEDCFIO_1_OFFSET UNITYSDK_OFFSET(0x147CDC90)
#define DHJAHPELLKB_LHHKHEDCFIO_2_OFFSET UNITYSDK_OFFSET(0x147CDED0)
#define DHJAHPELLKB_LHHKHEDCFIO_OFFSET UNITYSDK_OFFSET(0x147CD680)
#define DHJAHPELLKB_LPHHMHPMNEB_OFFSET UNITYSDK_OFFSET(0x147CDC80)
#define DHJAHPELLKB_MBIOHMEGNBN_OFFSET UNITYSDK_OFFSET(0x147CC2B0)
#define DHJAHPELLKB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x147CDDC0)
#define DHJAHPELLKB_MOMJGAPBHJN_OFFSET UNITYSDK_OFFSET(0x147CD8F0)
#define DHJAHPELLKB_NHHIGHJJLBF_OFFSET UNITYSDK_OFFSET(0x147CD3C0)
#define DHJAHPELLKB_OIKKFCGCMDL_OFFSET UNITYSDK_OFFSET(0x147CC4D0)
#define DHJAHPELLKB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x147CB5E0)
#define DHJAHPELLKB_PNHOEKAMEBN_OFFSET UNITYSDK_OFFSET(0x147CE540)
#define DHJAHPELLKB__CTOR_OFFSET UNITYSDK_OFFSET(0x147CB9B0)

inline static constexpr unsigned int DHJAHPELLKB_TypeDefinitionIndex = 69892;

class DHJAHPELLKB : public ::FJCAJJEAJPC
{
public:
	::Nap::NapECS::EcsFilter* _IEJFEIIHOJD_k__BackingField; // 0x40
	::Nap::NapECS::EcsFilter* _LKODHFEGFGC_k__BackingField; // 0x48
	::Nap::NapECS::EcsFilter* _JAFONCDDOKG_k__BackingField; // 0x50
	::Nap::NapECS::EcsFilter* _NAEJGNJHAGN_k__BackingField; // 0x58
	::Nap::NapECS::EcsFilter* _AJLCGPGMEIB_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJAHPELLKB__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHJAHPELLKB_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void HEGKFJPDKOD(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell PFLKNLADAOI)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DHJAHPELLKB_HEGKFJPDKOD_OFFSET))(KPILIGMMCFC, PFLKNLADAOI);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle ADNHEJNLFMF(::EBEAAFHPBJG* KPILIGMMCFC, ::DNKIEBOCMNJ& FHEMOHNGCAD, ::PHCAOEMIJPJ* BABDLBNLNEJ)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::DNKIEBOCMNJ&, ::PHCAOEMIJPJ*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_ADNHEJNLFMF_OFFSET))(KPILIGMMCFC, FHEMOHNGCAD, BABDLBNLNEJ);
	}

	::System::Void FKKBKCBHAML(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_FKKBKCBHAML_OFFSET))(this, EGEGIMGMJHN);
	}

	::Nap::NapECS::EcsFilter* BNGIACFDOFL()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJAHPELLKB_BNGIACFDOFL_OFFSET))(this);
	}

	static ::System::Void MBIOHMEGNBN(::GBAJCFMAIHG* GBELIHABEDH)
	{
		return ((::System::Void(*)(::GBAJCFMAIHG*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_MBIOHMEGNBN_OFFSET))(GBELIHABEDH);
	}

	::System::Void EOGHJOGIOEI(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_EOGHJOGIOEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::Nap::NapECS::EcsFilter* AONIPEMMPHN()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJAHPELLKB_AONIPEMMPHN_OFFSET))(this);
	}

	static ::System::Void FIDJIHEALOI(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell PFLKNLADAOI)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DHJAHPELLKB_FIDJIHEALOI_OFFSET))(KPILIGMMCFC, PFLKNLADAOI);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHJAHPELLKB_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	static ::IEGMIHHJMEP_GGKCBDPBIBF KAGMIJBNMHB(::EBEAAFHPBJG* KPILIGMMCFC, ::DNKIEBOCMNJ& FHEMOHNGCAD)
	{
		return ((::IEGMIHHJMEP_GGKCBDPBIBF(*)(::EBEAAFHPBJG*, ::DNKIEBOCMNJ&))((::PBYTE)hIl2Cpp + DHJAHPELLKB_KAGMIJBNMHB_OFFSET))(KPILIGMMCFC, FHEMOHNGCAD);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle ADNHEJNLFMF_1(::EBEAAFHPBJG* KPILIGMMCFC, ::DNKIEBOCMNJ& FHEMOHNGCAD)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::DNKIEBOCMNJ&))((::PBYTE)hIl2Cpp + DHJAHPELLKB_ADNHEJNLFMF_1_OFFSET))(KPILIGMMCFC, FHEMOHNGCAD);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle NHHIGHJJLBF(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::String* MCOHLHMKLIP, ::System::Int32 DKOFFFNEFJC, ::System::Boolean HAFDIMGJBHC, ::System::Int32 BGBJPCJGJHE, ::System::Boolean OMMICGMHOGA, ::System::Boolean FGDPMEDGIEB)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DHJAHPELLKB_NHHIGHJJLBF_OFFSET))(KPILIGMMCFC, EKPEBNCLJPM, MCOHLHMKLIP, DKOFFFNEFJC, HAFDIMGJBHC, BGBJPCJGJHE, OMMICGMHOGA, FGDPMEDGIEB);
	}

	::Nap::NapECS::EcsFilter* CDHHGHHEHHB()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJAHPELLKB_CDHHGHHEHHB_OFFSET))(this);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle JINKFKHMKOF(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::System::String* KEAHEADHMBI, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DHJAHPELLKB_JINKFKHMKOF_OFFSET))(KPILIGMMCFC, ABHBKFJKINO, KEAHEADHMBI, DKOFFFNEFJC);
	}

	static ::System::Void HALMLHBNBMH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHJAHPELLKB_HALMLHBNBMH_OFFSET))();
	}

	static ::IEGMIHHJMEP_GGKCBDPBIBF GJDGHNOLDBB(::EBEAAFHPBJG* KPILIGMMCFC, ::DNKIEBOCMNJ& FHEMOHNGCAD)
	{
		return ((::IEGMIHHJMEP_GGKCBDPBIBF(*)(::EBEAAFHPBJG*, ::DNKIEBOCMNJ&))((::PBYTE)hIl2Cpp + DHJAHPELLKB_GJDGHNOLDBB_OFFSET))(KPILIGMMCFC, FHEMOHNGCAD);
	}

	::System::Void DDCHAAENEAL(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_DDCHAAENEAL_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle LHHKHEDCFIO(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::System::Int32 EIHJFFOMCHD, ::System::Int32 DKOFFFNEFJC, ::System::Int32 DBHFIJGFPOK)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DHJAHPELLKB_LHHKHEDCFIO_OFFSET))(KPILIGMMCFC, ABHBKFJKINO, EIHJFFOMCHD, DKOFFFNEFJC, DBHFIJGFPOK);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void GJALJFGPEHN(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_GJALJFGPEHN_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void MOMJGAPBHJN(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_MOMJGAPBHJN_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void DILMOGMELGN(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell PFLKNLADAOI)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DHJAHPELLKB_DILMOGMELGN_OFFSET))(KPILIGMMCFC, PFLKNLADAOI);
	}

	::Nap::NapECS::EcsFilter* LPHHMHPMNEB()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJAHPELLKB_LPHHMHPMNEB_OFFSET))(this);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle LHHKHEDCFIO_1(::EBEAAFHPBJG* KPILIGMMCFC, ::DNKIEBOCMNJ& FHEMOHNGCAD)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::DNKIEBOCMNJ&))((::PBYTE)hIl2Cpp + DHJAHPELLKB_LHHKHEDCFIO_1_OFFSET))(KPILIGMMCFC, FHEMOHNGCAD);
	}

	static ::System::Void BBGPCNHDCIP(::JCLMLILFGPJ* GBELIHABEDH)
	{
		return ((::System::Void(*)(::JCLMLILFGPJ*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_BBGPCNHDCIP_OFFSET))(GBELIHABEDH);
	}

	static ::System::Void OIKKFCGCMDL(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell PFLKNLADAOI)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DHJAHPELLKB_OIKKFCGCMDL_OFFSET))(KPILIGMMCFC, PFLKNLADAOI);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHJAHPELLKB_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle LHHKHEDCFIO_2(::EBEAAFHPBJG* KPILIGMMCFC, ::DNKIEBOCMNJ& FHEMOHNGCAD, ::PHCAOEMIJPJ* BABDLBNLNEJ)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::DNKIEBOCMNJ&, ::PHCAOEMIJPJ*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_LHHKHEDCFIO_2_OFFSET))(KPILIGMMCFC, FHEMOHNGCAD, BABDLBNLNEJ);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle JMNPNGBFHAJ(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 DKOFFFNEFJC, ::System::String* CJBJONJDOLI, ::System::Boolean HAFDIMGJBHC, ::MoleMole::UIHollowChessPieceParticle_AttachPointType HIHGOIPENBM, ::System::Boolean HHOJNLOMCNJ, ::MoleMole::UIHollowChessPieceParticle_TransformType MMGCIBDFNFO, ::System::Nullable_1<::Foundation::Unreal::FTransform> HOCNHLIONBM)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + DHJAHPELLKB_JMNPNGBFHAJ_OFFSET))(KPILIGMMCFC, EKPEBNCLJPM, DKOFFFNEFJC, CJBJONJDOLI, HAFDIMGJBHC, HIHGOIPENBM, HHOJNLOMCNJ, MMGCIBDFNFO, HOCNHLIONBM);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle FBFCKIBLFKD(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 DKOFFFNEFJC, ::IEGMIHHJMEP_AHLDNOIDKMJ& OJMOHMLBAKN)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::IEGMIHHJMEP_AHLDNOIDKMJ&))((::PBYTE)hIl2Cpp + DHJAHPELLKB_FBFCKIBLFKD_OFFSET))(EKPEBNCLJPM, DKOFFFNEFJC, OJMOHMLBAKN);
	}

	static ::System::Void CCLPNOOOBLO(::EBEAAFHPBJG* DKELJKPOHOC, ::MOKLLADBIFF* PHJFDMHCCHE, ::MBJCLLBMALO* EFEBFFCEJEF)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::MOKLLADBIFF*, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_CCLPNOOOBLO_OFFSET))(DKELJKPOHOC, PHJFDMHCCHE, EFEBFFCEJEF);
	}

	::System::Void PNHOEKAMEBN(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_PNHOEKAMEBN_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle HAOPNEBHDEJ(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 MGMDLMBEDJF, ::System::Int32 DKOFFFNEFJC, ::System::Boolean HAFDIMGJBHC, ::System::Int32 BGBJPCJGJHE, ::System::Boolean OMMICGMHOGA, ::System::String* HKAGGHDEHKF, ::System::Boolean FGDPMEDGIEB, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* HMPKKCKNFIH, ::System::Nullable_1<::System::Int64> HKCNCLEMGPD)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>*, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + DHJAHPELLKB_HAOPNEBHDEJ_OFFSET))(KPILIGMMCFC, EKPEBNCLJPM, MGMDLMBEDJF, DKOFFFNEFJC, HAFDIMGJBHC, BGBJPCJGJHE, OMMICGMHOGA, HKAGGHDEHKF, FGDPMEDGIEB, HMPKKCKNFIH, HKCNCLEMGPD);
	}

	::Nap::NapECS::EcsFilter* FGFJIGMLHMM()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJAHPELLKB_FGFJIGMLHMM_OFFSET))(this);
	}

	static ::System::Void BOFAKHALPPO(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DHJAHPELLKB_BOFAKHALPPO_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HLMLHPMNIMA(::EBEAAFHPBJG* KPILIGMMCFC, ::MoleMole::HollowChessboard::HollowCell PFLKNLADAOI)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + DHJAHPELLKB_HLMLHPMNIMA_OFFSET))(KPILIGMMCFC, PFLKNLADAOI);
	}
};
