#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELAEHLMANCM.h"
#include "unitysdk/FAPAFCMLKEA.h"
#include "unitysdk/GIKMPLGDOPF.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseSpineEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/ELiveHouseTrackHeadEmojiType.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSettingData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseSpineEmojiData.h"
#include "unitysdk/MoleMole/MusicGame/FLiveHouseTrackHeadEmojiData.h"
#include "unitysdk/NHGGCILDNHH.h"
#include "unitysdk/OJLBKABDDPK.h"
#include "unitysdk/PBHOLIIJDHB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CBFEJFBALJN.h"
#include "unitysdk/DMGKBNMODFJ.h"
#include "unitysdk/EILPENNDLFL.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/KDGEEGMFJMP.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class ALAGDAJALHD;
class DBHAGHMNDBN;
class HAPOADBOJLK;
class HGIDAMPAOGK;
class IJBKAABGJJB;
namespace MoleMole { class ActivityLivehouseRhythmBeatmapConfig; }
namespace MoleMole { class Note; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Config { class ActivityLiveHouseConstValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOBLNGOIHCN_AKOICMOHIOC_OFFSET UNITYSDK_OFFSET(0x10FF7060)
#define GOBLNGOIHCN_AMDGJEHNLGF_OFFSET UNITYSDK_OFFSET(0x10FF67C0)
#define GOBLNGOIHCN_BAFKIJJKAIK_OFFSET UNITYSDK_OFFSET(0x10FF3A70)
#define GOBLNGOIHCN_BGEILCGLNKH_OFFSET UNITYSDK_OFFSET(0x10FF6FE0)
#define GOBLNGOIHCN_BHAJIFOBGPJ_OFFSET UNITYSDK_OFFSET(0x10FF4590)
#define GOBLNGOIHCN_BPGJPOBJDPA_OFFSET UNITYSDK_OFFSET(0x10FF6E10)
#define GOBLNGOIHCN_CAKBJCMBGCE_OFFSET UNITYSDK_OFFSET(0x10FF4B00)
#define GOBLNGOIHCN_CCBGKPPKFAF_OFFSET UNITYSDK_OFFSET(0x10FF6350)
#define GOBLNGOIHCN_CCMHKDBNJLH_OFFSET UNITYSDK_OFFSET(0x10FF4A70)
#define GOBLNGOIHCN_CDJLKBNEFJK_OFFSET UNITYSDK_OFFSET(0x10FF4D70)
#define GOBLNGOIHCN_CGIIGMEABAO_OFFSET UNITYSDK_OFFSET(0x10FF7F70)
#define GOBLNGOIHCN_COJPEMGPBBN_OFFSET UNITYSDK_OFFSET(0x10FF3890)
#define GOBLNGOIHCN_CPHGCJPPHNF_OFFSET UNITYSDK_OFFSET(0x10FF7C50)
#define GOBLNGOIHCN_CPKCLMFEFLK_OFFSET UNITYSDK_OFFSET(0x10FF57C0)
#define GOBLNGOIHCN_DAFMPLNODBJ_OFFSET UNITYSDK_OFFSET(0x10FF70B0)
#define GOBLNGOIHCN_DHGLINAEPOC_OFFSET UNITYSDK_OFFSET(0x10FF3940)
#define GOBLNGOIHCN_DJGJPPJPPAK_OFFSET UNITYSDK_OFFSET(0x10FF3A10)
#define GOBLNGOIHCN_DKACBAAPBDH_OFFSET UNITYSDK_OFFSET(0x10FF7590)
#define GOBLNGOIHCN_EFOEEDJOODP_OFFSET UNITYSDK_OFFSET(0x10FF6A00)
#define GOBLNGOIHCN_EJLONEMLEJC_OFFSET UNITYSDK_OFFSET(0x10FF3BC0)
#define GOBLNGOIHCN_ELOFIDEJAIA_OFFSET UNITYSDK_OFFSET(0x10FF6710)
#define GOBLNGOIHCN_ELOMDJACABB_OFFSET UNITYSDK_OFFSET(0x10FF39B0)
#define GOBLNGOIHCN_EODCHBIHPEC_OFFSET UNITYSDK_OFFSET(0x10FF7310)
#define GOBLNGOIHCN_EOEPLPECKML_OFFSET UNITYSDK_OFFSET(0x10FF7290)
#define GOBLNGOIHCN_FCDLADHJABD_OFFSET UNITYSDK_OFFSET(0x10FF4B80)
#define GOBLNGOIHCN_FDHFALFIEOL_OFFSET UNITYSDK_OFFSET(0x10FF7BB0)
#define GOBLNGOIHCN_FDKCOIODDIL_OFFSET UNITYSDK_OFFSET(0x10FF3B30)
#define GOBLNGOIHCN_FIDGJPLMLNG_OFFSET UNITYSDK_OFFSET(0x10FF5010)
#define GOBLNGOIHCN_FNLGDFHINNA_OFFSET UNITYSDK_OFFSET(0x10FF3E90)
#define GOBLNGOIHCN_GALEMGFACPP_OFFSET UNITYSDK_OFFSET(0x10FF4F10)
#define GOBLNGOIHCN_GBHKNMPOFBE_OFFSET UNITYSDK_OFFSET(0x10FF65A0)
#define GOBLNGOIHCN_GFMMFMKLFFL_OFFSET UNITYSDK_OFFSET(0x10FF7230)
#define GOBLNGOIHCN_GFPFMLHOKGG_OFFSET UNITYSDK_OFFSET(0x10FF7870)
#define GOBLNGOIHCN_GHANIIOKGFL_OFFSET UNITYSDK_OFFSET(0x10FF47B0)
#define GOBLNGOIHCN_GMGBCPKKJFD_OFFSET UNITYSDK_OFFSET(0x10FF5C60)
#define GOBLNGOIHCN_HECMLOPEFPI_OFFSET UNITYSDK_OFFSET(0x10FF46B0)
#define GOBLNGOIHCN_IDIGPBLPGKB_OFFSET UNITYSDK_OFFSET(0x10FF6BD0)
#define GOBLNGOIHCN_IEOCOKJHNGE_OFFSET UNITYSDK_OFFSET(0x10FF7F20)
#define GOBLNGOIHCN_IFPIILAFCMM_OFFSET UNITYSDK_OFFSET(0x10FF4980)
#define GOBLNGOIHCN_IGKHGMOHMEE_OFFSET UNITYSDK_OFFSET(0x10FF6D90)
#define GOBLNGOIHCN_IKHGCGFNKIM_OFFSET UNITYSDK_OFFSET(0x10FF6A80)
#define GOBLNGOIHCN_ILJNMJKGFOI_OFFSET UNITYSDK_OFFSET(0x10FF7EC0)
#define GOBLNGOIHCN_IOJCLEIFCJL_OFFSET UNITYSDK_OFFSET(0x10FF4920)
#define GOBLNGOIHCN_JKNABLKKNHO_OFFSET UNITYSDK_OFFSET(0x10FF5610)
#define GOBLNGOIHCN_JLGHJCCNDNB_OFFSET UNITYSDK_OFFSET(0x10FF3AD0)
#define GOBLNGOIHCN_JLNACPLMAMO_OFFSET UNITYSDK_OFFSET(0x10FF6C40)
#define GOBLNGOIHCN_JOEJJKPKOED_OFFSET UNITYSDK_OFFSET(0x10FF4540)
#define GOBLNGOIHCN_KCBENDAMPGN_OFFSET UNITYSDK_OFFSET(0x10FF4CE0)
#define GOBLNGOIHCN_KNHAMPCOLHF_OFFSET UNITYSDK_OFFSET(0x10FF6B80)
#define GOBLNGOIHCN_LCLFFPDOKHF_OFFSET UNITYSDK_OFFSET(0x10FF7410)
#define GOBLNGOIHCN_LHKIHPEIOGC_OFFSET UNITYSDK_OFFSET(0x10FF77D0)
#define GOBLNGOIHCN_LNACLJOPKLC_OFFSET UNITYSDK_OFFSET(0x10FF7B50)
#define GOBLNGOIHCN_MDJBGBFDFAD_OFFSET UNITYSDK_OFFSET(0x10FF40C0)
#define GOBLNGOIHCN_MIHENIAFHFG_OFFSET UNITYSDK_OFFSET(0x10FF38F0)
#define GOBLNGOIHCN_MKBICAJCPOA_OFFSET UNITYSDK_OFFSET(0x10FF5080)
#define GOBLNGOIHCN_MMNHKDNDEOG_OFFSET UNITYSDK_OFFSET(0x10FF6E80)
#define GOBLNGOIHCN_MMNMPLEODKJ_OFFSET UNITYSDK_OFFSET(0x10FF7550)
#define GOBLNGOIHCN_MOPAIMHHHPI_OFFSET UNITYSDK_OFFSET(0x10FF7640)
#define GOBLNGOIHCN_NEBIBBABFFN_OFFSET UNITYSDK_OFFSET(0x10FF5100)
#define GOBLNGOIHCN_OAKBJOGHCGM_OFFSET UNITYSDK_OFFSET(0x10FF6B20)
#define GOBLNGOIHCN_OBHBGKOKCKM_OFFSET UNITYSDK_OFFSET(0x10FF4760)
#define GOBLNGOIHCN_ODANAMCHAED_OFFSET UNITYSDK_OFFSET(0x10FF7DD0)
#define GOBLNGOIHCN_OFLAMIBCAAL_OFFSET UNITYSDK_OFFSET(0x10FF4070)
#define GOBLNGOIHCN_OJJBGJGHPKF_OFFSET UNITYSDK_OFFSET(0x10FF6D10)
#define GOBLNGOIHCN_OLPFPGKKJCK_OFFSET UNITYSDK_OFFSET(0x10FF42F0)
#define GOBLNGOIHCN_OMOFLGEHNBP_OFFSET UNITYSDK_OFFSET(0x10FF6CA0)
#define GOBLNGOIHCN_ONOIIDCBHHL_OFFSET UNITYSDK_OFFSET(0x10FF44E0)
#define GOBLNGOIHCN_OPFPCODACIP_OFFSET UNITYSDK_OFFSET(0x10FF76A0)
#define GOBLNGOIHCN_PAEHBJKACDO_OFFSET UNITYSDK_OFFSET(0x10FF3EF0)
#define GOBLNGOIHCN_PHMBLPBGHAH_OFFSET UNITYSDK_OFFSET(0x10FF4EB0)
#define GOBLNGOIHCN_PHPLMMGMJKM_OFFSET UNITYSDK_OFFSET(0x10FF5810)
#define GOBLNGOIHCN_PIABIDEJPFG_OFFSET UNITYSDK_OFFSET(0x10FF4FC0)
#define GOBLNGOIHCN_PNIHFMGGGPP_OFFSET UNITYSDK_OFFSET(0x10FF5A40)
#define GOBLNGOIHCN__CCTOR_OFFSET UNITYSDK_OFFSET(0x10FF3640)

inline static constexpr unsigned int GOBLNGOIHCN_TypeDefinitionIndex = 78243;

class GOBLNGOIHCN : public ::System::Object
{
public:
	static ::MoleMole::Config::ActivityLiveHouseConstValue** StaticGet__IAGLMKOFKIF_k__BackingField()
	{
		return (::MoleMole::Config::ActivityLiveHouseConstValue**)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0x365B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MusicGame::ELiveHouseSpineEmojiType>** StaticGet_DMKKKEDHHKA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MusicGame::ELiveHouseSpineEmojiType>**)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0x365B8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_HJHOENALKJA()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0x365C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>** StaticGet__EFLDOEEPLPB_k__BackingField()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0x365C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>** StaticGet__BAKLPGAKKJM_k__BackingField()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>**)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0x365D0);
	}
	static ::System::Double* StaticGet__HCDGGKLCPJO_k__BackingField()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0xC280);
	}
	static ::System::Boolean* StaticGet_MKIENCBBKLH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0xC288);
	}
	static ::System::UInt32* StaticGet_AGHFNEGAOJC()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0xC28C);
	}
	static ::System::Single* StaticGet__MMLDGACNBPF_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0xC290);
	}
	static ::MoleMole::MusicGame::FLiveHouseSettingData* StaticGet__PNHKINPGICA_k__BackingField()
	{
		return (::MoleMole::MusicGame::FLiveHouseSettingData*)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0xC294);
	}
	static ::System::Double* StaticGet__LJJDFFFMDDD_k__BackingField()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(GOBLNGOIHCN_TypeDefinitionIndex)->GetStaticField(0xC300);
	}
	// static const ::System::Int32 MKIBAHLCKJN = 0x12D5; // 0x0
	// static const ::System::Int32 JLFHGBPMECC = 0x3; // 0x0
	// static const ::System::Single CCCFCLDIAGD; // 0x0
	// static const ::System::Int32 BPFPJLAAKFO = 0x30; // 0x0
	// static const ::System::Int32 ILGDCBJGANK = -0x30; // 0x0
	// static const ::System::Single AOPIDHFEJOO; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>* COJPEMGPBBN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_COJPEMGPBBN_OFFSET))();
	}

	static ::System::Boolean MIHENIAFHFG(::OJLBKABDDPK JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::OJLBKABDDPK))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_MIHENIAFHFG_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean DHGLINAEPOC(::MoleMole::Note* FCPGJNLBFMO)
	{
		return ((::System::Boolean(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_DHGLINAEPOC_OFFSET))(FCPGJNLBFMO);
	}

	static ::System::Void ELOMDJACABB(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*>*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_ELOMDJACABB_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DJGJPPJPPAK(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_DJGJPPJPPAK_OFFSET))(EGEGIMGMJHN);
	}

	static ::GIKMPLGDOPF BAFKIJJKAIK(::OJLBKABDDPK JKBLDFBGBPK)
	{
		return ((::GIKMPLGDOPF(*)(::OJLBKABDDPK))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_BAFKIJJKAIK_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Double JLGHJCCNDNB()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_JLGHJCCNDNB_OFFSET))();
	}

	static ::System::Double FDKCOIODDIL(::MoleMole::Note* FCPGJNLBFMO, ::System::Double FKDEEMJPNFE)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_FDKCOIODDIL_OFFSET))(FCPGJNLBFMO, FKDEEMJPNFE);
	}

	static ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType EJLONEMLEJC(::DMGKBNMODFJ DGOMMGANKBO)
	{
		return ((::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType(*)(::DMGKBNMODFJ))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_EJLONEMLEJC_OFFSET))(DGOMMGANKBO);
	}

	static ::System::Boolean PAEHBJKACDO(::DMGKBNMODFJ DGOMMGANKBO)
	{
		return ((::System::Boolean(*)(::DMGKBNMODFJ))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_PAEHBJKACDO_OFFSET))(DGOMMGANKBO);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>* MDJBGBFDFAD(::System::Int32 DLILNANONLN)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType, ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_MDJBGBFDFAD_OFFSET))(DLILNANONLN);
	}

	static ::MoleMole::MusicGame::ELiveHouseSpineEmojiType OLPFPGKKJCK(::DMGKBNMODFJ DGOMMGANKBO)
	{
		return ((::MoleMole::MusicGame::ELiveHouseSpineEmojiType(*)(::DMGKBNMODFJ))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_OLPFPGKKJCK_OFFSET))(DGOMMGANKBO);
	}

	static ::System::Void ONOIIDCBHHL(::MoleMole::Config::ActivityLiveHouseConstValue* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ActivityLiveHouseConstValue*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_ONOIIDCBHHL_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean FNLGDFHINNA(::OJLBKABDDPK JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::OJLBKABDDPK))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_FNLGDFHINNA_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean JOEJJKPKOED(::FAPAFCMLKEA KPOAJJKFBOE)
	{
		return ((::System::Boolean(*)(::FAPAFCMLKEA))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_JOEJJKPKOED_OFFSET))(KPOAJJKFBOE);
	}

	static ::DBHAGHMNDBN* BHAJIFOBGPJ()
	{
		return ((::DBHAGHMNDBN*(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_BHAJIFOBGPJ_OFFSET))();
	}

	static ::System::Boolean OFLAMIBCAAL(::OJLBKABDDPK JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::OJLBKABDDPK))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_OFLAMIBCAAL_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean HECMLOPEFPI(::FAPAFCMLKEA JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::FAPAFCMLKEA))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_HECMLOPEFPI_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Double GHANIIOKGFL(::MoleMole::Note* FCHKNNJEDIF)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_GHANIIOKGFL_OFFSET))(FCHKNNJEDIF);
	}

	static ::System::Double IOJCLEIFCJL()
	{
		return ((::System::Double(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_IOJCLEIFCJL_OFFSET))();
	}

	static ::System::Void IFPIILAFCMM(::MoleMole::MusicGame::FLiveHouseSettingData EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::MusicGame::FLiveHouseSettingData))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_IFPIILAFCMM_OFFSET))(EGEGIMGMJHN);
	}

	static ::DMGKBNMODFJ CCMHKDBNJLH(::IJBKAABGJJB* LJBPECKCCEA)
	{
		return ((::DMGKBNMODFJ(*)(::IJBKAABGJJB*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_CCMHKDBNJLH_OFFSET))(LJBPECKCCEA);
	}

	static ::DMGKBNMODFJ CAKBJCMBGCE(::IJBKAABGJJB* LJBPECKCCEA)
	{
		return ((::DMGKBNMODFJ(*)(::IJBKAABGJJB*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_CAKBJCMBGCE_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Boolean FCDLADHJABD(::HGIDAMPAOGK*& NNFOBEFOHHL, ::System::Int32 NPAKMAGBOCH)
	{
		return ((::System::Boolean(*)(::HGIDAMPAOGK*&, ::System::Int32))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_FCDLADHJABD_OFFSET))(NNFOBEFOHHL, NPAKMAGBOCH);
	}

	static ::NHGGCILDNHH CDJLKBNEFJK(::System::Int32 PAEEEHKILOC)
	{
		return ((::NHGGCILDNHH(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_CDJLKBNEFJK_OFFSET))(PAEEEHKILOC);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* PHMBLPBGHAH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_PHMBLPBGHAH_OFFSET))();
	}

	static ::System::Double GALEMGFACPP(::MoleMole::Note* FCHKNNJEDIF)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_GALEMGFACPP_OFFSET))(FCHKNNJEDIF);
	}

	static ::System::Boolean FIDGJPLMLNG(::KDGEEGMFJMP MLNBANAGAEE, ::KDGEEGMFJMP IFDMOLFBMKJ)
	{
		return ((::System::Boolean(*)(::KDGEEGMFJMP, ::KDGEEGMFJMP))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_FIDGJPLMLNG_OFFSET))(MLNBANAGAEE, IFDMOLFBMKJ);
	}

	static ::System::Int32 MKBICAJCPOA(::System::Int32 OGDNGAMKFDG)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_MKBICAJCPOA_OFFSET))(OGDNGAMKFDG);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* NEBIBBABFFN(::System::Int32 JHFKDGBCOBA, ::System::Int32 NPAKMAGBOCH)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_NEBIBBABFFN_OFFSET))(JHFKDGBCOBA, NPAKMAGBOCH);
	}

	static ::System::Double CPKCLMFEFLK(::MoleMole::Note* FCHKNNJEDIF)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_CPKCLMFEFLK_OFFSET))(FCHKNNJEDIF);
	}

	static ::System::Int32 KCBENDAMPGN()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_KCBENDAMPGN_OFFSET))();
	}

	static ::System::Double PHPLMMGMJKM(::MoleMole::Note* FCHKNNJEDIF)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_PHPLMMGMJKM_OFFSET))(FCHKNNJEDIF);
	}

	static ::System::Double PNIHFMGGGPP(::MoleMole::Note* FCHKNNJEDIF)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_PNIHFMGGGPP_OFFSET))(FCHKNNJEDIF);
	}

	static ::System::Void GMGBCPKKJFD(::MoleMole::UIBaseController* ENFIPKDNBKA, ::NHGGCILDNHH EHNJCPCLCOJ)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseController*, ::NHGGCILDNHH))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_GMGBCPKKJFD_OFFSET))(ENFIPKDNBKA, EHNJCPCLCOJ);
	}

	static ::System::Single CCBGKPPKFAF(::MoleMole::MusicGame::ELiveHouseSpineEmojiType LNFMOIFKNKN)
	{
		return ((::System::Single(*)(::MoleMole::MusicGame::ELiveHouseSpineEmojiType))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_CCBGKPPKFAF_OFFSET))(LNFMOIFKNKN);
	}

	static ::System::Double GBHKNMPOFBE(::MoleMole::Note* FCHKNNJEDIF)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_GBHKNMPOFBE_OFFSET))(FCHKNNJEDIF);
	}

	static ::DMGKBNMODFJ ELOFIDEJAIA(::IJBKAABGJJB* LJBPECKCCEA, ::OJLBKABDDPK JKBLDFBGBPK, ::FAPAFCMLKEA KPOAJJKFBOE, ::PBHOLIIJDHB EOOFIMFACDG)
	{
		return ((::DMGKBNMODFJ(*)(::IJBKAABGJJB*, ::OJLBKABDDPK, ::FAPAFCMLKEA, ::PBHOLIIJDHB))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_ELOFIDEJAIA_OFFSET))(LJBPECKCCEA, JKBLDFBGBPK, KPOAJJKFBOE, EOOFIMFACDG);
	}

	static ::System::String* AMDGJEHNLGF(::MoleMole::MusicGame::ELiveHouseSpineEmojiType LNFMOIFKNKN)
	{
		return ((::System::String*(*)(::MoleMole::MusicGame::ELiveHouseSpineEmojiType))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_AMDGJEHNLGF_OFFSET))(LNFMOIFKNKN);
	}

	static ::System::Double EFOEEDJOODP(::MoleMole::Note* FCHKNNJEDIF)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_EFOEEDJOODP_OFFSET))(FCHKNNJEDIF);
	}

	static ::MoleMole::MusicGame::FLiveHouseSettingData IKHGCGFNKIM()
	{
		return ((::MoleMole::MusicGame::FLiveHouseSettingData(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_IKHGCGFNKIM_OFFSET))();
	}

	static ::System::Single OAKBJOGHCGM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_OAKBJOGHCGM_OFFSET))();
	}

	static ::System::Double KNHAMPCOLHF(::MoleMole::Note* FCPGJNLBFMO)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_KNHAMPCOLHF_OFFSET))(FCPGJNLBFMO);
	}

	static ::System::Double IDIGPBLPGKB(::MoleMole::Note* FCHKNNJEDIF, ::System::Double FKDEEMJPNFE)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_IDIGPBLPGKB_OFFSET))(FCHKNNJEDIF, FKDEEMJPNFE);
	}

	static ::System::Void JLNACPLMAMO(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_JLNACPLMAMO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean OMOFLGEHNBP(::IJBKAABGJJB* BKCNDLNOPMN)
	{
		return ((::System::Boolean(*)(::IJBKAABGJJB*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_OMOFLGEHNBP_OFFSET))(BKCNDLNOPMN);
	}

	static ::System::Boolean OJJBGJGHPKF(::ALAGDAJALHD* FCPGJNLBFMO, ::ELAEHLMANCM DALJDJDLHEA)
	{
		return ((::System::Boolean(*)(::ALAGDAJALHD*, ::ELAEHLMANCM))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_OJJBGJGHPKF_OFFSET))(FCPGJNLBFMO, DALJDJDLHEA);
	}

	static ::System::Double PIABIDEJPFG(::MoleMole::Note* FCPGJNLBFMO)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_PIABIDEJPFG_OFFSET))(FCPGJNLBFMO);
	}

	static ::ELAEHLMANCM IGKHGMOHMEE(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::ELAEHLMANCM(*)(::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_IGKHGMOHMEE_OFFSET))(MLNBANAGAEE);
	}

	static ::EILPENNDLFL BPGJPOBJDPA(::HAPOADBOJLK* LJBPECKCCEA, ::PBHOLIIJDHB EOOFIMFACDG)
	{
		return ((::EILPENNDLFL(*)(::HAPOADBOJLK*, ::PBHOLIIJDHB))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_BPGJPOBJDPA_OFFSET))(LJBPECKCCEA, EOOFIMFACDG);
	}

	static ::System::Double MMNHKDNDEOG(::MoleMole::Note* FCHKNNJEDIF)
	{
		return ((::System::Double(*)(::MoleMole::Note*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_MMNHKDNDEOG_OFFSET))(FCHKNNJEDIF);
	}

	static ::System::Boolean OBHBGKOKCKM(::FAPAFCMLKEA JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::FAPAFCMLKEA))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_OBHBGKOKCKM_OFFSET))(JKBLDFBGBPK);
	}

	static ::DMGKBNMODFJ BGEILCGLNKH(::IJBKAABGJJB* LJBPECKCCEA)
	{
		return ((::DMGKBNMODFJ(*)(::IJBKAABGJJB*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_BGEILCGLNKH_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Boolean AKOICMOHIOC(::FAPAFCMLKEA KPOAJJKFBOE)
	{
		return ((::System::Boolean(*)(::FAPAFCMLKEA))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_AKOICMOHIOC_OFFSET))(KPOAJJKFBOE);
	}

	static ::System::Int32 DAFMPLNODBJ()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_DAFMPLNODBJ_OFFSET))();
	}

	static ::System::Int32 JKNABLKKNHO(::System::Int32 NPAKMAGBOCH)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_JKNABLKKNHO_OFFSET))(NPAKMAGBOCH);
	}

	static ::System::Void GFMMFMKLFFL(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_GFMMFMKLFFL_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::UInt32 EOEPLPECKML()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_EOEPLPECKML_OFFSET))();
	}

	static ::System::Double EODCHBIHPEC(::MoleMole::Note* FCPGJNLBFMO, ::System::Double FKDEEMJPNFE)
	{
		return ((::System::Double(*)(::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_EODCHBIHPEC_OFFSET))(FCPGJNLBFMO, FKDEEMJPNFE);
	}

	static ::MoleMole::MusicGame::ELiveHouseSpineEmojiType LCLFFPDOKHF(::System::String* GIEKEKDBENM)
	{
		return ((::MoleMole::MusicGame::ELiveHouseSpineEmojiType(*)(::System::String*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_LCLFFPDOKHF_OFFSET))(GIEKEKDBENM);
	}

	static ::System::Boolean MMNMPLEODKJ(::FAPAFCMLKEA JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::FAPAFCMLKEA))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_MMNMPLEODKJ_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Void DKACBAAPBDH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_DKACBAAPBDH_OFFSET))();
	}

	static ::MoleMole::Config::ActivityLiveHouseConstValue* MOPAIMHHHPI()
	{
		return ((::MoleMole::Config::ActivityLiveHouseConstValue*(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_MOPAIMHHHPI_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>* OPFPCODACIP(::System::Int32 DLILNANONLN, ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType LNFMOIFKNKN)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MusicGame::FLiveHouseTrackHeadEmojiData>*(*)(::System::Int32, ::MoleMole::MusicGame::ELiveHouseTrackHeadEmojiType))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_OPFPCODACIP_OFFSET))(DLILNANONLN, LNFMOIFKNKN);
	}

	static ::DMGKBNMODFJ LHKIHPEIOGC(::IJBKAABGJJB* LJBPECKCCEA, ::CBFEJFBALJN DDDAFABBFMO)
	{
		return ((::DMGKBNMODFJ(*)(::IJBKAABGJJB*, ::CBFEJFBALJN))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_LHKIHPEIOGC_OFFSET))(LJBPECKCCEA, DDDAFABBFMO);
	}

	static ::System::Void GFPFMLHOKGG(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>* PDFMCDBDPLL)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::MoleMole::MusicGame::ELiveHouseSpineEmojiType, ::MoleMole::MusicGame::FLiveHouseSpineEmojiData>*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_GFPFMLHOKGG_OFFSET))(PDFMCDBDPLL);
	}

	static ::System::Boolean LNACLJOPKLC(::FAPAFCMLKEA JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::FAPAFCMLKEA))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_LNACLJOPKLC_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Void FDHFALFIEOL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBLNGOIHCN_FDHFALFIEOL_OFFSET))();
	}

	static ::System::Double CPHGCJPPHNF(::MoleMole::ActivityLivehouseRhythmBeatmapConfig* DFMKILICPFB)
	{
		return ((::System::Double(*)(::MoleMole::ActivityLivehouseRhythmBeatmapConfig*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_CPHGCJPPHNF_OFFSET))(DFMKILICPFB);
	}

	static ::Foundation::AssetPath ODANAMCHAED(::ALAGDAJALHD* FCHKNNJEDIF)
	{
		return ((::Foundation::AssetPath(*)(::ALAGDAJALHD*))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_ODANAMCHAED_OFFSET))(FCHKNNJEDIF);
	}

	static ::System::Void ILJNMJKGFOI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_ILJNMJKGFOI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean IEOCOKJHNGE(::FAPAFCMLKEA KPOAJJKFBOE)
	{
		return ((::System::Boolean(*)(::FAPAFCMLKEA))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_IEOCOKJHNGE_OFFSET))(KPOAJJKFBOE);
	}

	static ::OJLBKABDDPK CGIIGMEABAO(::FAPAFCMLKEA KPOAJJKFBOE)
	{
		return ((::OJLBKABDDPK(*)(::FAPAFCMLKEA))((::PBYTE)hIl2Cpp + GOBLNGOIHCN_CGIIGMEABAO_OFFSET))(KPOAJJKFBOE);
	}
};
