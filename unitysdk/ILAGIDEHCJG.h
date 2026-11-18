#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LoseButtonTrigger.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_ConfigLevelResultPerformEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig.h"

class AGJFDPBLDDF;
class GMCPAFDJNLH;
namespace Foundation { class FunctionalObject; }
namespace MoleMole { class MonoUIGameObjectNumber; }
namespace MoleMole { class UILevelGeneralFailedResultDialogPopWindowController; }
namespace MoleMole { class UILevelResultPageContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILAGIDEHCJG_ADDPLGJLMDE_OFFSET UNITYSDK_OFFSET(0x13C908F0)
#define ILAGIDEHCJG_AHJCKHIDPDG_OFFSET UNITYSDK_OFFSET(0x13C936F0)
#define ILAGIDEHCJG_BAEIBIJKHLK_OFFSET UNITYSDK_OFFSET(0x13C92FC0)
#define ILAGIDEHCJG_BBEPDDIMDFI_OFFSET UNITYSDK_OFFSET(0x13C99FD0)
#define ILAGIDEHCJG_BDCMJAGFJHC_OFFSET UNITYSDK_OFFSET(0x13C98380)
#define ILAGIDEHCJG_BEACOJFENBL_OFFSET UNITYSDK_OFFSET(0x13C99B50)
#define ILAGIDEHCJG_BFDILBKFGAF_OFFSET UNITYSDK_OFFSET(0x13C938E0)
#define ILAGIDEHCJG_BILMLJBMBDL_OFFSET UNITYSDK_OFFSET(0x13C993E0)
#define ILAGIDEHCJG_CDLLJFDMDCK_OFFSET UNITYSDK_OFFSET(0x13C90820)
#define ILAGIDEHCJG_CFGFBGCEIML_OFFSET UNITYSDK_OFFSET(0x13C8F2A0)
#define ILAGIDEHCJG_CHMBDPNICML_OFFSET UNITYSDK_OFFSET(0x13C93940)
#define ILAGIDEHCJG_CIDAPKKOGJE_OFFSET UNITYSDK_OFFSET(0x13C98D10)
#define ILAGIDEHCJG_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x13C97D80)
#define ILAGIDEHCJG_CPGBJGJDFBF_OFFSET UNITYSDK_OFFSET(0x13C911C0)
#define ILAGIDEHCJG_DDKIPCNOIMJ_OFFSET UNITYSDK_OFFSET(0x13C99B40)
#define ILAGIDEHCJG_DFAPLDEHGGA_OFFSET UNITYSDK_OFFSET(0x13C91FC0)
#define ILAGIDEHCJG_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x13C8F410)
#define ILAGIDEHCJG_DFPDGCOHPAI_OFFSET UNITYSDK_OFFSET(0x13C966C0)
#define ILAGIDEHCJG_DLMPBAOODGH_OFFSET UNITYSDK_OFFSET(0x13C96F60)
#define ILAGIDEHCJG_DMCECFKOCPO_OFFSET UNITYSDK_OFFSET(0x13C90660)
#define ILAGIDEHCJG_DMEBBPOLIAH_OFFSET UNITYSDK_OFFSET(0x13C93040)
#define ILAGIDEHCJG_DOHHEDOOPGN_OFFSET UNITYSDK_OFFSET(0x13C93590)
#define ILAGIDEHCJG_DOHPLKLNPNG_OFFSET UNITYSDK_OFFSET(0x13C98730)
#define ILAGIDEHCJG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C99230)
#define ILAGIDEHCJG_EHPKMHOPGHN_OFFSET UNITYSDK_OFFSET(0x13C8EA90)
#define ILAGIDEHCJG_FFJGANKMLNA_OFFSET UNITYSDK_OFFSET(0x13C91750)
#define ILAGIDEHCJG_FGFKPMGKCBJ_OFFSET UNITYSDK_OFFSET(0x13C992C0)
#define ILAGIDEHCJG_FJKBBOEBOCI_OFFSET UNITYSDK_OFFSET(0x13C95680)
#define ILAGIDEHCJG_FKDBKGDDPLC_OFFSET UNITYSDK_OFFSET(0x13C95FE0)
#define ILAGIDEHCJG_FPEBPPEKFEN_OFFSET UNITYSDK_OFFSET(0x13C95750)
#define ILAGIDEHCJG_FPJLDCINCEJ_OFFSET UNITYSDK_OFFSET(0x13C8E8D0)
#define ILAGIDEHCJG_GEIOJACJJHM_OFFSET UNITYSDK_OFFSET(0x13C92B10)
#define ILAGIDEHCJG_GEPAFBJNIGC_OFFSET UNITYSDK_OFFSET(0x13C92600)
#define ILAGIDEHCJG_HKKEHKJMFMP_1_OFFSET UNITYSDK_OFFSET(0x13C99520)
#define ILAGIDEHCJG_HKKEHKJMFMP_OFFSET UNITYSDK_OFFSET(0x13C97E10)
#define ILAGIDEHCJG_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x13C974F0)
#define ILAGIDEHCJG_IBMPJBOPHJN_OFFSET UNITYSDK_OFFSET(0x13C95D20)
#define ILAGIDEHCJG_IBNPPBHLCKF_OFFSET UNITYSDK_OFFSET(0x13C8F6D0)
#define ILAGIDEHCJG_ILNAJLGGEHJ_OFFSET UNITYSDK_OFFSET(0x13C98D70)
#define ILAGIDEHCJG_INOGMMOOHGA_OFFSET UNITYSDK_OFFSET(0x13C95CA0)
#define ILAGIDEHCJG_JFGPDEDANIK_OFFSET UNITYSDK_OFFSET(0x13C933F0)
#define ILAGIDEHCJG_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x13C991A0)
#define ILAGIDEHCJG_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x13C94120)
#define ILAGIDEHCJG_KAHAKKMLIPL_OFFSET UNITYSDK_OFFSET(0x13C96150)
#define ILAGIDEHCJG_KBIIKLEJDMO_OFFSET UNITYSDK_OFFSET(0x13C94720)
#define ILAGIDEHCJG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x13C90620)
#define ILAGIDEHCJG_KHANFCDHIDK_OFFSET UNITYSDK_OFFSET(0x13C96040)
#define ILAGIDEHCJG_KNKODNAHFLG_OFFSET UNITYSDK_OFFSET(0x13C96090)
#define ILAGIDEHCJG_LAIODIKOJNB_OFFSET UNITYSDK_OFFSET(0x13C99FE0)
#define ILAGIDEHCJG_LEJLBCECNFP_OFFSET UNITYSDK_OFFSET(0x13C984E0)
#define ILAGIDEHCJG_LGHHIBAOHOB_OFFSET UNITYSDK_OFFSET(0x13C971E0)
#define ILAGIDEHCJG_LIKNPGKLIFD_OFFSET UNITYSDK_OFFSET(0x13C986D0)
#define ILAGIDEHCJG_MELBPMJMEOI_OFFSET UNITYSDK_OFFSET(0x13C98740)
#define ILAGIDEHCJG_MFMDLOJACCH_OFFSET UNITYSDK_OFFSET(0x13C95E50)
#define ILAGIDEHCJG_MLKONKHHMPK_OFFSET UNITYSDK_OFFSET(0x13C94070)
#define ILAGIDEHCJG_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x13C8E8E0)
#define ILAGIDEHCJG_MNFNCFFCGAF_OFFSET UNITYSDK_OFFSET(0x13C8F820)
#define ILAGIDEHCJG_MNJHBALJLFC_OFFSET UNITYSDK_OFFSET(0x13C90880)
#define ILAGIDEHCJG_MOGMLAKFDOK_OFFSET UNITYSDK_OFFSET(0x13C918A0)
#define ILAGIDEHCJG_MPILIIKHDMD_OFFSET UNITYSDK_OFFSET(0x13C969C0)
#define ILAGIDEHCJG_NBKMICLPMME_OFFSET UNITYSDK_OFFSET(0x13C8F610)
#define ILAGIDEHCJG_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x13C8F250)
#define ILAGIDEHCJG_NLHDOGGGBAM_OFFSET UNITYSDK_OFFSET(0x13C96BF0)
#define ILAGIDEHCJG_NPOENIONCLP_OFFSET UNITYSDK_OFFSET(0x13C97020)
#define ILAGIDEHCJG_ODEGJAIOAMM_OFFSET UNITYSDK_OFFSET(0x13C987D0)
#define ILAGIDEHCJG_OFKMIGEFEBC_OFFSET UNITYSDK_OFFSET(0x13C98440)
#define ILAGIDEHCJG_OHBGMLNKBMC_OFFSET UNITYSDK_OFFSET(0x13C978A0)
#define ILAGIDEHCJG_OIOCAKCOMGC_OFFSET UNITYSDK_OFFSET(0x13C97940)
#define ILAGIDEHCJG_OIOHOCOIOOO_OFFSET UNITYSDK_OFFSET(0x13C8FB20)
#define ILAGIDEHCJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C8E730)
#define ILAGIDEHCJG_OMFEPGPOLLH_OFFSET UNITYSDK_OFFSET(0x13C91E80)
#define ILAGIDEHCJG_OPGKKCLDOOO_OFFSET UNITYSDK_OFFSET(0x13C92930)
#define ILAGIDEHCJG_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x13C99350)
#define ILAGIDEHCJG_PBINHOEIFHH_OFFSET UNITYSDK_OFFSET(0x13C90470)
#define ILAGIDEHCJG_PDKKPJCGPBF_OFFSET UNITYSDK_OFFSET(0x13C92E70)
#define ILAGIDEHCJG_PONAFFHOIGP_OFFSET UNITYSDK_OFFSET(0x13C978B0)
#define ILAGIDEHCJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C97820)
#define ILAGIDEHCJG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C976A0)

inline static constexpr unsigned int ILAGIDEHCJG_TypeDefinitionIndex = 56502;

class ILAGIDEHCJG
{
public:
	static ::Foundation::Unreal::FName* StaticGet_KIEDAOHBJDE()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ILAGIDEHCJG_TypeDefinitionIndex)->GetStaticField(0x103A0);
	}
	static ::Foundation::Unreal::FName* StaticGet_NNFPDLEDMIO()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ILAGIDEHCJG_TypeDefinitionIndex)->GetStaticField(0x103A8);
	}
	// static const ::System::String* BLJOABCDOED; // 0x0
	// static const ::System::String* ANJCOCKKMAL; // 0x0
	// static const ::System::String* KALDLCDGNHD; // 0x0
	// static const ::System::String* JHHNJOLJJJK; // 0x0
	// static const ::System::String* GIPGDPLIIDC; // 0x0
	// static const ::System::String* EPAKMBGPLOM; // 0x0
	// static const ::System::String* LKGFODEJKEN; // 0x0
	// static const ::System::String* EAPFEHCEMMJ; // 0x0
	::MoleMole::MonoUIGameObjectNumber* KNIGHDAHOOF; // 0x20
	::MoleMole::UILevelGeneralFailedResultDialogPopWindowController* IECAGOFEFMI; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* FICKBFGEHLC; // 0x30
	::MoleMole::UILevelResultPageContext* GCIPCHAPBPA; // 0x38
	::System::Action* EGBBBMAIKNP; // 0x40
	::MoleMole::EntityHandle HDNCHPIIOIB; // 0x48
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* DCCMFJKCCMB; // 0x58
	::AGJFDPBLDDF* PPBHOLBFCLP; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* POAGLNCDAOK; // 0x68
	::Foundation::FunctionalObject* CMBHFLFIDPI; // 0x70
	::System::Single HMMIOMPCABP; // 0x78
	::System::Single OHCCGLOBFNK; // 0x7C
	::System::Boolean MNHPHAOFGCF; // 0x80
	::System::Boolean JHEHAJOHEBJ; // 0x81
	::System::Boolean KBFLDIPOFOB; // 0x82
	::System::Boolean EIGLJGKIKFE; // 0x83
	::System::Boolean DJDGHEIHAKJ; // 0x84
	::System::Boolean NJFCAIGPPMF; // 0x85
	::System::Boolean _HIAMDONIBKG_k__BackingField; // 0x86
	::System::Byte _padding0[0x1];
	::System::Single BPNJIOJLGGM; // 0x88
	::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger PCEAGPGMIBC; // 0x8C
	::Foundation::Coroutine::CoroutineHandle NIGNKGGKPIC; // 0x90
	::System::Int32 CONHEJHBJKE; // 0x94
	::System::Single PLKKIAPIOKC; // 0x98
	::System::Int32 DPOMELECKJP; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILAGIDEHCJG__CCTOR_OFFSET))();
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Boolean FPJLDCINCEJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_FPJLDCINCEJ_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Void CFGFBGCEIML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_CFGFBGCEIML_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Void PBINHOEIFHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_PBINHOEIFHH_OFFSET))(this);
	}

	::System::Void CPGBJGJDFBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_CPGBJGJDFBF_OFFSET))(this);
	}

	::System::Void DFAPLDEHGGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DFAPLDEHGGA_OFFSET))(this);
	}

	::System::Void PDKKPJCGPBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_PDKKPJCGPBF_OFFSET))(this);
	}

	::System::Void DMEBBPOLIAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DMEBBPOLIAH_OFFSET))(this);
	}

	::MoleMole::UILevelGeneralFailedResultDialogPopWindowController* DOHHEDOOPGN(::MoleMole::UILevelResultPageContext* AIPMOMEMBPO, ::GMCPAFDJNLH* HNOPAJLDCFB)
	{
		return ((::MoleMole::UILevelGeneralFailedResultDialogPopWindowController*(*)(::PVOID, ::MoleMole::UILevelResultPageContext*, ::GMCPAFDJNLH*))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DOHHEDOOPGN_OFFSET))(this, AIPMOMEMBPO, HNOPAJLDCFB);
	}

	::System::Void AHJCKHIDPDG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_AHJCKHIDPDG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BFDILBKFGAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_BFDILBKFGAF_OFFSET))(this);
	}

	::System::Void CHMBDPNICML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_CHMBDPNICML_OFFSET))(this);
	}

	::System::Void KBIIKLEJDMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_KBIIKLEJDMO_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> FJKBBOEBOCI()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_FJKBBOEBOCI_OFFSET))(this);
	}

	::System::Void FPEBPPEKFEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_FPEBPPEKFEN_OFFSET))(this);
	}

	::System::Void IBMPJBOPHJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_IBMPJBOPHJN_OFFSET))(this);
	}

	::System::Void KHANFCDHIDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_KHANFCDHIDK_OFFSET))(this);
	}

	::System::Void KNKODNAHFLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_KNKODNAHFLG_OFFSET))(this);
	}

	::System::Void KAHAKKMLIPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_KAHAKKMLIPL_OFFSET))(this);
	}

	::System::Void MPILIIKHDMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MPILIIKHDMD_OFFSET))(this);
	}

	::System::Void NLHDOGGGBAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_NLHDOGGGBAM_OFFSET))(this);
	}

	::System::Void NPOENIONCLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_NPOENIONCLP_OFFSET))(this);
	}

	::System::Void LGHHIBAOHOB(::System::Boolean HFKPDCHKNFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_LGHHIBAOHOB_OFFSET))(this, HFKPDCHKNFD);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void CDLLJFDMDCK(::Il2CppArray<::System::Object*>* IMGGBJHADNE)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_CDLLJFDMDCK_OFFSET))(this, IMGGBJHADNE);
	}

	::System::Void OHBGMLNKBMC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_OHBGMLNKBMC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PONAFFHOIGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_PONAFFHOIGP_OFFSET))(this);
	}

	::System::Void OIOHOCOIOOO(::System::Boolean NOLBECKFLEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_OIOHOCOIOOO_OFFSET))(this, NOLBECKFLEK);
	}

	::System::Void IBNPPBHLCKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_IBNPPBHLCKF_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void MFMDLOJACCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MFMDLOJACCH_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* BAEIBIJKHLK()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_BAEIBIJKHLK_OFFSET))(this);
	}

	::System::Void OIOCAKCOMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_OIOCAKCOMGC_OFFSET))(this);
	}

	::System::Void OFKMIGEFEBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_OFKMIGEFEBC_OFFSET))(this);
	}

	::System::Void DMCECFKOCPO(::Il2CppArray<::System::Object*>* CACBLDNJAMP)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DMCECFKOCPO_OFFSET))(this, CACBLDNJAMP);
	}

	::System::Void LEJLBCECNFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_LEJLBCECNFP_OFFSET))(this);
	}

	::System::Void LIKNPGKLIFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_LIKNPGKLIFD_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraSequence::CoreDataCollection* GCAOGFBGMMH, ::PipelineCamera::CameraSequence::CoreDataBindingResolver* FLJOACIABKD, ::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig KNFMCFAKPGA, ::PipelineCamera::CameraCommandSpawnSubModules*& ABCLGPHOMMP, ::PipelineCamera::CameraCommandUnSpawnSubModules*& HMIFGOCFOFM)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataCollection*, ::PipelineCamera::CameraSequence::CoreDataBindingResolver*, ::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_JLFNAHONPGB_OFFSET))(this, GCAOGFBGMMH, FLJOACIABKD, KNFMCFAKPGA, ABCLGPHOMMP, HMIFGOCFOFM);
	}

	::System::Void DOHPLKLNPNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DOHPLKLNPNG_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelResultPerforms* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_KGNEJKNNODJ_OFFSET))(this);
	}

	::System::Void MELBPMJMEOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MELBPMJMEOI_OFFSET))(this);
	}

	::System::Void HKKEHKJMFMP(::System::String* JHBKKMKLCBH, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_HKKEHKJMFMP_OFFSET))(this, JHBKKMKLCBH, NGODDCIOJDP);
	}

	::System::Void GEIOJACJJHM(::Il2CppArray<::System::Object*>* CACBLDNJAMP)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_GEIOJACJJHM_OFFSET))(this, CACBLDNJAMP);
	}

	::System::Void CIDAPKKOGJE(::Il2CppArray<::System::Object*>* IMGGBJHADNE)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_CIDAPKKOGJE_OFFSET))(this, IMGGBJHADNE);
	}

	static ::System::Boolean ILNAJLGGEHJ(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF)
	{
		return ((::System::Boolean(*)(::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_ILNAJLGGEHJ_OFFSET))(GPBKDGGEBCF);
	}

	::System::Void BDCMJAGFJHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_BDCMJAGFJHC_OFFSET))(this);
	}

	::System::Void ADDPLGJLMDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_ADDPLGJLMDE_OFFSET))(this);
	}

	::System::Void OPGKKCLDOOO(::System::Collections::Generic::List_1<::System::Object*>* OAJILAOAOLB, ::System::Boolean PNJFPDDLKPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_OPGKKCLDOOO_OFFSET))(this, OAJILAOAOLB, PNJFPDDLKPD);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid FKDBKGDDPLC()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_FKDBKGDDPLC_OFFSET))(this);
	}

	::System::Void OMFEPGPOLLH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_OMFEPGPOLLH_OFFSET))(this, KECKGDFIALJ, FIPHFGHNNBE);
	}

	::System::Void FFJGANKMLNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_FFJGANKMLNA_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig MLKONKHHMPK()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MLKONKHHMPK_OFFSET))(this);
	}

	::System::Void MNJHBALJLFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MNJHBALJLFC_OFFSET))(this);
	}

	::System::Void GEPAFBJNIGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_GEPAFBJNIGC_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void EHPKMHOPGHN(::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger DFOLAGMLFPB, ::System::Int32 MJODCBFMDMM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger, ::System::Int32))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_EHPKMHOPGHN_OFFSET))(this, DFOLAGMLFPB, MJODCBFMDMM);
	}

	::System::Void FGFKPMGKCBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_FGFKPMGKCBJ_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_PBGJKMAEINN_OFFSET))(this);
	}

	::System::Void DLMPBAOODGH(::System::Single HMKAJFJIKGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DLMPBAOODGH_OFFSET))(this, HMKAJFJIKGB);
	}

	::System::Void BILMLJBMBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_BILMLJBMBDL_OFFSET))(this);
	}

	::System::Void MNFNCFFCGAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MNFNCFFCGAF_OFFSET))(this);
	}

	::System::Boolean JFGPDEDANIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_JFGPDEDANIK_OFFSET))(this);
	}

	::System::Void DDKIPCNOIMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DDKIPCNOIMJ_OFFSET))(this);
	}

	::System::Void ODEGJAIOAMM(::MoleMole::EntityHandle MMDKDGPNHCK, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger DFOLAGMLFPB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_ODEGJAIOAMM_OFFSET))(this, MMDKDGPNHCK, DFOLAGMLFPB);
	}

	static ::System::Void BEACOJFENBL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILAGIDEHCJG_BEACOJFENBL_OFFSET))();
	}

	::System::Void DFPDGCOHPAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_DFPDGCOHPAI_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* INOGMMOOHGA()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_INOGMMOOHGA_OFFSET))(this);
	}

	::System::Void NBKMICLPMME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_NBKMICLPMME_OFFSET))(this);
	}

	::System::Boolean HKKEHKJMFMP_1(::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect JMDHBJMNBCP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_HKKEHKJMFMP_1_OFFSET))(this, JMDHBJMNBCP);
	}

	::System::Boolean BBEPDDIMDFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_BBEPDDIMDFI_OFFSET))(this);
	}

	static ::PipelineCamera::WorldBasicCameraData LAIODIKOJNB(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::System::Single BHPHKIKEJJM, ::System::Single NLCHAMBPKCF)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_LAIODIKOJNB_OFFSET))(GPBKDGGEBCF, BHPHKIKEJJM, NLCHAMBPKCF);
	}

	::System::Void MOGMLAKFDOK(::MoleMole::Battle::Entity* FINEANOLAPH, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_MOGMLAKFDOK_OFFSET))(this, FINEANOLAPH, FIPHFGHNNBE);
	}
};
