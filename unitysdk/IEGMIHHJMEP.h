#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/DNKIEBOCMNJ.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/IEGMIHHJMEP_AHLDNOIDKMJ.h"
#include "unitysdk/IEGMIHHJMEP_EJMOEFHCDNE.h"
#include "unitysdk/IEGMIHHJMEP_GGKCBDPBIBF.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Nullable_1.h"

class EBEAAFHPBJG;
class PHCAOEMIJPJ;
class PKKECHFNBLK;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEGMIHHJMEP_AGCAKAOELGD_OFFSET UNITYSDK_OFFSET(0xEBBC4E0)
#define IEGMIHHJMEP_BCMJNFLIOPC_OFFSET UNITYSDK_OFFSET(0xEBBBC10)
#define IEGMIHHJMEP_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0xEBB9670)
#define IEGMIHHJMEP_CMCPANOCGBK_OFFSET UNITYSDK_OFFSET(0xEBB99C0)
#define IEGMIHHJMEP_DLDGPHALHOC_OFFSET UNITYSDK_OFFSET(0xEBBB950)
#define IEGMIHHJMEP_EHDOAAKNOKL_OFFSET UNITYSDK_OFFSET(0xEBB96E0)
#define IEGMIHHJMEP_FDBAPKFJKAN_OFFSET UNITYSDK_OFFSET(0xEBBA5F0)
#define IEGMIHHJMEP_FELDPCJNBOH_OFFSET UNITYSDK_OFFSET(0xEBBC630)
#define IEGMIHHJMEP_GKNDNBNFNIB_OFFSET UNITYSDK_OFFSET(0xEBBCEE0)
#define IEGMIHHJMEP_HBDIMMNNDPI_OFFSET UNITYSDK_OFFSET(0xEBB9450)
#define IEGMIHHJMEP_HEJNHIKMNID_OFFSET UNITYSDK_OFFSET(0xEBB9F00)
#define IEGMIHHJMEP_HKKEHKJMFMP_OFFSET UNITYSDK_OFFSET(0xEBB8FA0)
#define IEGMIHHJMEP_HLMHHJNFLAM_OFFSET UNITYSDK_OFFSET(0xEBBA120)
#define IEGMIHHJMEP_IPCOGOCNHFG_1_OFFSET UNITYSDK_OFFSET(0xEBBCA80)
#define IEGMIHHJMEP_IPCOGOCNHFG_OFFSET UNITYSDK_OFFSET(0xEBBC060)
#define IEGMIHHJMEP_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0xEBB9B90)
#define IEGMIHHJMEP_MABNEOOIBFJ_OFFSET UNITYSDK_OFFSET(0xEBBB680)
#define IEGMIHHJMEP_MBIFPONOBEI_OFFSET UNITYSDK_OFFSET(0xEBBD010)
#define IEGMIHHJMEP_NFPNHNBMDOJ_OFFSET UNITYSDK_OFFSET(0xEBBA980)
#define IEGMIHHJMEP_OBJANJHCBKM_1_OFFSET UNITYSDK_OFFSET(0xEBBB160)
#define IEGMIHHJMEP_OBJANJHCBKM_2_OFFSET UNITYSDK_OFFSET(0xEBBB2B0)
#define IEGMIHHJMEP_OBJANJHCBKM_3_OFFSET UNITYSDK_OFFSET(0xEBBBF20)
#define IEGMIHHJMEP_OBJANJHCBKM_OFFSET UNITYSDK_OFFSET(0xEBB92A0)
#define IEGMIHHJMEP_OKPKDOIAHMG_OFFSET UNITYSDK_OFFSET(0xEBBAA80)
#define IEGMIHHJMEP_OODEHDHIGOF_OFFSET UNITYSDK_OFFSET(0xEBBB460)
#define IEGMIHHJMEP_PCLNAKEDBAL_OFFSET UNITYSDK_OFFSET(0xEBBA2F0)
#define IEGMIHHJMEP_PMDJEPDMCJM_OFFSET UNITYSDK_OFFSET(0xEBBC6E0)
#define IEGMIHHJMEP__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBB8F60)

inline static constexpr unsigned int IEGMIHHJMEP_TypeDefinitionIndex = 39109;

class IEGMIHHJMEP : public ::System::Object
{
public:
	static ::System::String** StaticGet_NDEDDOJPCEM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IEGMIHHJMEP_TypeDefinitionIndex)->GetStaticField(0x40E10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEGMIHHJMEP__CCTOR_OFFSET))();
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle HKKEHKJMFMP(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::String* CJBJONJDOLI, ::System::Boolean HAFDIMGJBHC, ::MoleMole::UIHollowChessPieceParticle_AttachPointType HIHGOIPENBM, ::System::Boolean HHOJNLOMCNJ, ::MoleMole::UIHollowChessPieceParticle_TransformType MMGCIBDFNFO, ::System::Nullable_1<::Foundation::Unreal::FTransform> HOCNHLIONBM)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_HKKEHKJMFMP_OFFSET))(BONICGBNDAA, DKOFFFNEFJC, EKPEBNCLJPM, CJBJONJDOLI, HAFDIMGJBHC, HIHGOIPENBM, HHOJNLOMCNJ, MMGCIBDFNFO, HOCNHLIONBM);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle OBJANJHCBKM(::EBEAAFHPBJG* DKELJKPOHOC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 EIHJFFOMCHD, ::System::Int32 DBHFIJGFPOK)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_OBJANJHCBKM_OFFSET))(DKELJKPOHOC, DKOFFFNEFJC, EKPEBNCLJPM, EIHJFFOMCHD, DBHFIJGFPOK);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle HBDIMMNNDPI(::EBEAAFHPBJG* DKELJKPOHOC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 EIHJFFOMCHD, ::System::Int32 DBHFIJGFPOK, ::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_HBDIMMNNDPI_OFFSET))(DKELJKPOHOC, DKOFFFNEFJC, EKPEBNCLJPM, EIHJFFOMCHD, DBHFIJGFPOK, NJINEMLOICB);
	}

	static ::System::Boolean CGADIPLIANC(::System::Int32 EIHJFFOMCHD)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_CGADIPLIANC_OFFSET))(EIHJFFOMCHD);
	}

	static ::PKKECHFNBLK* CMCPANOCGBK(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA)
	{
		return ((::PKKECHFNBLK*(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_CMCPANOCGBK_OFFSET))(PHHDHIBOCKA);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle LJPJBPCIEAF(::EBEAAFHPBJG* KPILIGMMCFC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::String* CJBJONJDOLI, ::System::Boolean HAFDIMGJBHC, ::MoleMole::UIHollowChessPieceParticle_AttachPointType HIHGOIPENBM, ::System::Boolean HHOJNLOMCNJ, ::MoleMole::UIHollowChessPieceParticle_TransformType MMGCIBDFNFO, ::System::Nullable_1<::Foundation::Unreal::FTransform> HOCNHLIONBM)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_LJPJBPCIEAF_OFFSET))(KPILIGMMCFC, DKOFFFNEFJC, EKPEBNCLJPM, CJBJONJDOLI, HAFDIMGJBHC, HIHGOIPENBM, HHOJNLOMCNJ, MMGCIBDFNFO, HOCNHLIONBM);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle HLMHHJNFLAM(::EBEAAFHPBJG* DKELJKPOHOC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::String* MCOHLHMKLIP, ::System::Boolean HAFDIMGJBHC, ::System::Int32 BGBJPCJGJHE, ::System::Boolean OMMICGMHOGA, ::System::Boolean FGDPMEDGIEB)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_HLMHHJNFLAM_OFFSET))(DKELJKPOHOC, DKOFFFNEFJC, EKPEBNCLJPM, MCOHLHMKLIP, HAFDIMGJBHC, BGBJPCJGJHE, OMMICGMHOGA, FGDPMEDGIEB);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle PCLNAKEDBAL(::EBEAAFHPBJG* KPILIGMMCFC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::System::String* KEAHEADHMBI)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_PCLNAKEDBAL_OFFSET))(KPILIGMMCFC, DKOFFFNEFJC, ABHBKFJKINO, KEAHEADHMBI);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle FDBAPKFJKAN(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::String* CAGFMLEKFGG, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_FDBAPKFJKAN_OFFSET))(EKPEBNCLJPM, CAGFMLEKFGG, HAFDIMGJBHC);
	}

	static ::Cysharp::Threading::Tasks::UniTask NFPNHNBMDOJ(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_NFPNHNBMDOJ_OFFSET))(PHHDHIBOCKA);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle OKPKDOIAHMG(::EBEAAFHPBJG* DKELJKPOHOC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 DKOFFFNEFJC, ::IEGMIHHJMEP_AHLDNOIDKMJ& FIICALKNJFK)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::IEGMIHHJMEP_AHLDNOIDKMJ&))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_OKPKDOIAHMG_OFFSET))(DKELJKPOHOC, EKPEBNCLJPM, DKOFFFNEFJC, FIICALKNJFK);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle OBJANJHCBKM_1(::EBEAAFHPBJG* DKELJKPOHOC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::String* MCOHLHMKLIP, ::System::Int32 DBHFIJGFPOK, ::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_OBJANJHCBKM_1_OFFSET))(DKELJKPOHOC, DKOFFFNEFJC, EKPEBNCLJPM, MCOHLHMKLIP, DBHFIJGFPOK, NJINEMLOICB);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle OBJANJHCBKM_2(::EBEAAFHPBJG* DKELJKPOHOC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::String* MCOHLHMKLIP, ::System::String* ELGNJFIOBAA, ::System::Int32 DBHFIJGFPOK, ::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::String*, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_OBJANJHCBKM_2_OFFSET))(DKELJKPOHOC, DKOFFFNEFJC, EKPEBNCLJPM, MCOHLHMKLIP, ELGNJFIOBAA, DBHFIJGFPOK, NJINEMLOICB);
	}

	static ::IEGMIHHJMEP_GGKCBDPBIBF OODEHDHIGOF(::EBEAAFHPBJG* DKELJKPOHOC, ::System::Int32 DKOFFFNEFJC, ::System::UInt64 HDKFLLDHOIL, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::IEGMIHHJMEP_EJMOEFHCDNE& OJMOHMLBAKN, ::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB)
	{
		return ((::IEGMIHHJMEP_GGKCBDPBIBF(*)(::EBEAAFHPBJG*, ::System::Int32, ::System::UInt64, ::MoleMole::HollowChessboard::HollowCell, ::IEGMIHHJMEP_EJMOEFHCDNE&, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_OODEHDHIGOF_OFFSET))(DKELJKPOHOC, DKOFFFNEFJC, HDKFLLDHOIL, EKPEBNCLJPM, OJMOHMLBAKN, NJINEMLOICB);
	}

	static ::System::Void MABNEOOIBFJ(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_MABNEOOIBFJ_OFFSET))(BONICGBNDAA);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle DLDGPHALHOC(::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 DKOFFFNEFJC, ::System::String* MCOHLHMKLIP, ::System::Boolean HAFDIMGJBHC, ::System::Int32 BGBJPCJGJHE, ::System::Boolean OMMICGMHOGA, ::System::Boolean FGDPMEDGIEB)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_DLDGPHALHOC_OFFSET))(IACHFFGPFMF, EKPEBNCLJPM, DKOFFFNEFJC, MCOHLHMKLIP, HAFDIMGJBHC, BGBJPCJGJHE, OMMICGMHOGA, FGDPMEDGIEB);
	}

	static ::System::Void BCMJNFLIOPC(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB, ::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_BCMJNFLIOPC_OFFSET))(GNHEHOMMHPB, ABHBKFJKINO, FBILHHBPEHD);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle OBJANJHCBKM_3(::EBEAAFHPBJG* DKELJKPOHOC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 EIHJFFOMCHD, ::System::Int32 DBHFIJGFPOK, ::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_OBJANJHCBKM_3_OFFSET))(DKELJKPOHOC, DKOFFFNEFJC, EKPEBNCLJPM, EIHJFFOMCHD, DBHFIJGFPOK, NJINEMLOICB);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle IPCOGOCNHFG(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA, ::DNKIEBOCMNJ FHEMOHNGCAD, ::MoleMole::HollowChessboard::HollowEntity*& KECKGDFIALJ, ::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>* NCPGEEMGJEL)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::DNKIEBOCMNJ, ::MoleMole::HollowChessboard::HollowEntity*&, ::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_IPCOGOCNHFG_OFFSET))(BONICGBNDAA, FHEMOHNGCAD, KECKGDFIALJ, NCPGEEMGJEL);
	}

	static ::System::Void AGCAKAOELGD(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_AGCAKAOELGD_OFFSET))(ABHBKFJKINO);
	}

	static ::System::Void FELDPCJNBOH(::PKKECHFNBLK* FFCEMMICNJF)
	{
		return ((::System::Void(*)(::PKKECHFNBLK*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_FELDPCJNBOH_OFFSET))(FFCEMMICNJF);
	}

	static ::System::Void PMDJEPDMCJM(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB, ::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP, ::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_PMDJEPDMCJM_OFFSET))(GNHEHOMMHPB, AEPEPHHADNP, AELLPLBJELA);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle EHDOAAKNOKL(::EBEAAFHPBJG* DKELJKPOHOC, ::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::IEGMIHHJMEP_EJMOEFHCDNE& OJMOHMLBAKN, ::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::EBEAAFHPBJG*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::IEGMIHHJMEP_EJMOEFHCDNE&, ::MoleMole::HollowChessboard::RenderDataAliveType, ::System::Boolean))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_EHDOAAKNOKL_OFFSET))(DKELJKPOHOC, DKOFFFNEFJC, EKPEBNCLJPM, OJMOHMLBAKN, NJINEMLOICB, HAFDIMGJBHC);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle IPCOGOCNHFG_1(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA, ::DNKIEBOCMNJ FHEMOHNGCAD, ::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>* NCPGEEMGJEL)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::DNKIEBOCMNJ, ::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_IPCOGOCNHFG_1_OFFSET))(BONICGBNDAA, FHEMOHNGCAD, NCPGEEMGJEL);
	}

	static ::System::Void GKNDNBNFNIB(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_GKNDNBNFNIB_OFFSET))(PHHDHIBOCKA);
	}

	static ::System::Void HEJNHIKMNID(::IEGMIHHJMEP_GGKCBDPBIBF& ELEIACDBIPL, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Int32 DKOFFFNEFJC, ::System::UInt64 HDKFLLDHOIL, ::System::Int32 NALFPPJFEKN)
	{
		return ((::System::Void(*)(::IEGMIHHJMEP_GGKCBDPBIBF&, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_HEJNHIKMNID_OFFSET))(ELEIACDBIPL, EKPEBNCLJPM, DKOFFFNEFJC, HDKFLLDHOIL, NALFPPJFEKN);
	}

	static ::MoleMole::BlendTextureSheetData* MBIFPONOBEI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_MBIFPONOBEI_OFFSET))(MCOHLHMKLIP);
	}
};
