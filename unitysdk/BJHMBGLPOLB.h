#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPHDBDFFDDJ.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordEventType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KBHPNKKKAAL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class BJHMBGLPOLB;
class DDBIKAEOHKB;
class DJJJMOFDALB;
class GHEBHGIJDMC;
class JMECAFJNCOM;
class KFELGAIGHAP;
class KOIACJAJFEC;
class MBBEBLGELAP;
class NGGLPLKJKMM;
class OOCCBMLAELL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class SkillTargetConfig; }
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJHMBGLPOLB_AABOCHLJHKH_OFFSET UNITYSDK_OFFSET(0xB79B460)
#define BJHMBGLPOLB_ABMLKMDBAGA_OFFSET UNITYSDK_OFFSET(0xB79B810)
#define BJHMBGLPOLB_AFPMBFOOHEH_OFFSET UNITYSDK_OFFSET(0xB79CA30)
#define BJHMBGLPOLB_AGLLIMEDCLD_OFFSET UNITYSDK_OFFSET(0xB79B600)
#define BJHMBGLPOLB_AIIDPOOCHCD_OFFSET UNITYSDK_OFFSET(0xB79DD50)
#define BJHMBGLPOLB_BAIFMPPIFNL_OFFSET UNITYSDK_OFFSET(0xB79B660)
#define BJHMBGLPOLB_BLOHMEIEHHD_OFFSET UNITYSDK_OFFSET(0xB79DCC0)
#define BJHMBGLPOLB_BMLIABJLOHO_OFFSET UNITYSDK_OFFSET(0xB79CF90)
#define BJHMBGLPOLB_CAOMAIPMMIN_OFFSET UNITYSDK_OFFSET(0xB79BAC0)
#define BJHMBGLPOLB_CMGBJKMOIAK_OFFSET UNITYSDK_OFFSET(0xB79DED0)
#define BJHMBGLPOLB_CNBKBEGJMLC_OFFSET UNITYSDK_OFFSET(0xB79B1E0)
#define BJHMBGLPOLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB79BB50)
#define BJHMBGLPOLB_DDJBLLGEHBE_OFFSET UNITYSDK_OFFSET(0xB79BCD0)
#define BJHMBGLPOLB_DGMBAGBMPHB_OFFSET UNITYSDK_OFFSET(0xB79D160)
#define BJHMBGLPOLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB79BC80)
#define BJHMBGLPOLB_DKFBBJOBMKK_OFFSET UNITYSDK_OFFSET(0xB79B260)
#define BJHMBGLPOLB_DLFECMKCEDO_OFFSET UNITYSDK_OFFSET(0xB79D0D0)
#define BJHMBGLPOLB_EOMIKLKPBCP_OFFSET UNITYSDK_OFFSET(0xB79BE70)
#define BJHMBGLPOLB_FEKOEFEPNOF_OFFSET UNITYSDK_OFFSET(0xB79C470)
#define BJHMBGLPOLB_FGNINPFBACA_OFFSET UNITYSDK_OFFSET(0xB79C970)
#define BJHMBGLPOLB_GET_CURRENTPILETYPE_OFFSET UNITYSDK_OFFSET(0xB79DF90)
#define BJHMBGLPOLB_GET_PLAYTARGET_OFFSET UNITYSDK_OFFSET(0xB79DE30)
#define BJHMBGLPOLB_GET_UID_OFFSET UNITYSDK_OFFSET(0xB79DE20)
#define BJHMBGLPOLB_GGOBEMHFCCH_OFFSET UNITYSDK_OFFSET(0xB79BE30)
#define BJHMBGLPOLB_HDCOIFPMKDO_OFFSET UNITYSDK_OFFSET(0xB79DF80)
#define BJHMBGLPOLB_HFLBGKEADHI_OFFSET UNITYSDK_OFFSET(0xB79B930)
#define BJHMBGLPOLB_HHGCBBOFLCD_OFFSET UNITYSDK_OFFSET(0xB79B120)
#define BJHMBGLPOLB_HJIMPHGLLFO_OFFSET UNITYSDK_OFFSET(0xB79B2F0)
#define BJHMBGLPOLB_HNNJPEIBAAP_OFFSET UNITYSDK_OFFSET(0xB79DD80)
#define BJHMBGLPOLB_IBGNOCIMOPD_OFFSET UNITYSDK_OFFSET(0xB79C9E0)
#define BJHMBGLPOLB_IIBCNCANOHI_OFFSET UNITYSDK_OFFSET(0xB79C6F0)
#define BJHMBGLPOLB_IKHIMKMNNHA_OFFSET UNITYSDK_OFFSET(0xB79B410)
#define BJHMBGLPOLB_ILHHKEEFFBM_OFFSET UNITYSDK_OFFSET(0xB79D2F0)
#define BJHMBGLPOLB_ILJFJPHOPAB_OFFSET UNITYSDK_OFFSET(0xB79B310)
#define BJHMBGLPOLB_KEAOAPHGPJM_OFFSET UNITYSDK_OFFSET(0xB79B180)
#define BJHMBGLPOLB_KEIHNHHFJFD_OFFSET UNITYSDK_OFFSET(0xB79BDE0)
#define BJHMBGLPOLB_KPGCKCAACMM_OFFSET UNITYSDK_OFFSET(0xB79CD20)
#define BJHMBGLPOLB_LCGJACMGOEO_OFFSET UNITYSDK_OFFSET(0xB79B6F0)
#define BJHMBGLPOLB_LFNFLHFHHPE_OFFSET UNITYSDK_OFFSET(0xB79B1F0)
#define BJHMBGLPOLB_LHHLJKHJIGO_OFFSET UNITYSDK_OFFSET(0xB79B500)
#define BJHMBGLPOLB_LJAFGJCPNIA_OFFSET UNITYSDK_OFFSET(0xB79B280)
#define BJHMBGLPOLB_LLAAOPGMJOE_OFFSET UNITYSDK_OFFSET(0xB79C1F0)
#define BJHMBGLPOLB_LLAPIHDBPGO_OFFSET UNITYSDK_OFFSET(0xB79B680)
#define BJHMBGLPOLB_LOJMNBELANI_OFFSET UNITYSDK_OFFSET(0xB79BEC0)
#define BJHMBGLPOLB_LPGHDPDILIP_OFFSET UNITYSDK_OFFSET(0xB79BD80)
#define BJHMBGLPOLB_MBCHONAGBPC_OFFSET UNITYSDK_OFFSET(0xB79B5B0)
#define BJHMBGLPOLB_MBHAPEDCOHM_OFFSET UNITYSDK_OFFSET(0xB79D030)
#define BJHMBGLPOLB_MGKAEAENOAJ_OFFSET UNITYSDK_OFFSET(0xB79C000)
#define BJHMBGLPOLB_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xB79B100)
#define BJHMBGLPOLB_NAPOELPBDHP_OFFSET UNITYSDK_OFFSET(0xB79B360)
#define BJHMBGLPOLB_NCAAEIFFMND_OFFSET UNITYSDK_OFFSET(0xB79B6A0)
#define BJHMBGLPOLB_NCGALONODDM_OFFSET UNITYSDK_OFFSET(0xB79B2D0)
#define BJHMBGLPOLB_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0xB79B200)
#define BJHMBGLPOLB_NGDELCBPBHO_OFFSET UNITYSDK_OFFSET(0xB79DE50)
#define BJHMBGLPOLB_NKAEPDKJCPB_OFFSET UNITYSDK_OFFSET(0xB79D1D0)
#define BJHMBGLPOLB_NNDOMLKKFIN_OFFSET UNITYSDK_OFFSET(0xB79B3B0)
#define BJHMBGLPOLB_OCAGEPJLLOK_OFFSET UNITYSDK_OFFSET(0xB79B550)
#define BJHMBGLPOLB_PAADPCNNMIA_OFFSET UNITYSDK_OFFSET(0xB79DA70)
#define BJHMBGLPOLB_PKMPPNCKALD_OFFSET UNITYSDK_OFFSET(0xB79D290)
#define BJHMBGLPOLB_POFCENMBLGM_OFFSET UNITYSDK_OFFSET(0xB79DF70)
#define BJHMBGLPOLB_SET_CURRENTPILETYPE_OFFSET UNITYSDK_OFFSET(0xB79DFA0)
#define BJHMBGLPOLB_SET_PLAYTARGET_OFFSET UNITYSDK_OFFSET(0xB79DE40)

inline static constexpr unsigned int BJHMBGLPOLB_TypeDefinitionIndex = 55964;

	class BJHMBGLPOLB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GHEBHGIJDMC*>* NLFJNHNDAJG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HPHDBDFFDDJ>* OHEFAGEBNEH; // 0x18
		::RPG::GameCore::GameEntity* _PlayTarget_k__BackingField; // 0x20
		::BJHMBGLPOLB* EJFDJDMBCNG; // 0x28
		::KOIACJAJFEC* ENJNLEEKHBI; // 0x30
		::DJJJMOFDALB* PFDAOOBMGAK; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* DNGKIEKPNIJ; // 0x40
		::KOIACJAJFEC* CNMJEAKFPIO; // 0x48
		::System::Nullable* MCOHIMKANFC; // 0x50
		::RPG::GameCore::FateRinCardPileType _CurrentPileType_k__BackingField; // 0x58
		::System::Boolean FJMKKONHCOG; // 0x5A
		::System::Byte _padding0[0x1];
		::System::UInt32 _UID_k__BackingField; // 0x5C
		::System::Void _ctor(::KOIACJAJFEC* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KOIACJAJFEC*, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_CTOR_OFFSET))(this, a1, a2);
		}

		::JMECAFJNCOM* MMFEEJAHPLJ()
		{
			return ((::JMECAFJNCOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_MMFEEJAHPLJ_OFFSET))(this);
		}

		::System::UInt32 HHGCBBOFLCD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_HHGCBBOFLCD_OFFSET))(this);
		}

		::System::UInt32 KEAOAPHGPJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_KEAOAPHGPJM_OFFSET))(this);
		}

		::KOIACJAJFEC* CNBKBEGJMLC()
		{
			return ((::KOIACJAJFEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_CNBKBEGJMLC_OFFSET))(this);
		}

		::KOIACJAJFEC* LFNFLHFHHPE()
		{
			return ((::KOIACJAJFEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_LFNFLHFHHPE_OFFSET))(this);
		}

		::System::UInt32 NDMBDGKAJEK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* DKFBBJOBMKK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_DKFBBJOBMKK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LJAFGJCPNIA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_LJAFGJCPNIA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::StringHash>* NCGALONODDM()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::StringHash>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_NCGALONODDM_OFFSET))(this);
		}

		::MBBEBLGELAP* HJIMPHGLLFO()
		{
			return ((::MBBEBLGELAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_HJIMPHGLLFO_OFFSET))(this);
		}

		::RPG::GameCore::FateRinCardCasterSource ILJFJPHOPAB()
		{
			return ((::RPG::GameCore::FateRinCardCasterSource(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_ILJFJPHOPAB_OFFSET))(this);
		}

		::RPG::GameCore::FateRinCardCasterSource NAPOELPBDHP()
		{
			return ((::RPG::GameCore::FateRinCardCasterSource(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_NAPOELPBDHP_OFFSET))(this);
		}

		::System::String* NNDOMLKKFIN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_NNDOMLKKFIN_OFFSET))(this);
		}

		::RPG::GameCore::SkillTargetConfig* IKHIMKMNNHA()
		{
			return ((::RPG::GameCore::SkillTargetConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_IKHIMKMNNHA_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AABOCHLJHKH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_AABOCHLJHKH_OFFSET))(this);
		}

		::NGGLPLKJKMM* LHHLJKHJIGO()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_LHHLJKHJIGO_OFFSET))(this);
		}

		::NGGLPLKJKMM* OCAGEPJLLOK()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_OCAGEPJLLOK_OFFSET))(this);
		}

		::NGGLPLKJKMM* MBCHONAGBPC()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_MBCHONAGBPC_OFFSET))(this);
		}

		::NGGLPLKJKMM* AGLLIMEDCLD()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_AGLLIMEDCLD_OFFSET))(this);
		}

		::KFELGAIGHAP* BAIFMPPIFNL()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_BAIFMPPIFNL_OFFSET))(this);
		}

		::KFELGAIGHAP* LLAPIHDBPGO()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_LLAPIHDBPGO_OFFSET))(this);
		}

		::System::Boolean NCAAEIFFMND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_NCAAEIFFMND_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LCGJACMGOEO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_LCGJACMGOEO_OFFSET))(this);
		}

		::System::Void ABMLKMDBAGA(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_ABMLKMDBAGA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HFLBGKEADHI(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_HFLBGKEADHI_OFFSET))(this, a1);
		}

		::System::Boolean CAOMAIPMMIN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_CAOMAIPMMIN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_DISPOSE_OFFSET))(this);
		}

		::System::Void DDJBLLGEHBE(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_DDJBLLGEHBE_OFFSET))(this, a1);
		}

		::System::Void LPGHDPDILIP(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_LPGHDPDILIP_OFFSET))(this, a1);
		}

		::System::Void KEIHNHHFJFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_KEIHNHHFJFD_OFFSET))(this, a1);
		}

		::System::Void GGOBEMHFCCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_GGOBEMHFCCH_OFFSET))(this);
		}

		::System::Void EOMIKLKPBCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_EOMIKLKPBCP_OFFSET))(this);
		}

		::System::Void LOJMNBELANI(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_LOJMNBELANI_OFFSET))(this, a1);
		}

		::System::Void MGKAEAENOAJ(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_MGKAEAENOAJ_OFFSET))(this, a1);
		}

		::System::Void LLAAOPGMJOE(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_LLAAOPGMJOE_OFFSET))(this, a1);
		}

		::System::Void FEKOEFEPNOF(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_FEKOEFEPNOF_OFFSET))(this, a1);
		}

		::System::Void IIBCNCANOHI(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_IIBCNCANOHI_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillCharacterComponent* FGNINPFBACA()
		{
			return ((::RPG::GameCore::SkillCharacterComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_FGNINPFBACA_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* IBGNOCIMOPD()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_IBGNOCIMOPD_OFFSET))(this);
		}

		::System::Void AFPMBFOOHEH(::System::String* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PropertyModifyFunction, ::System::Int32))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_AFPMBFOOHEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BMLIABJLOHO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_BMLIABJLOHO_OFFSET))(this, a1);
		}

		::System::Void MBHAPEDCOHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_MBHAPEDCOHM_OFFSET))(this);
		}

		::System::Void DLFECMKCEDO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_DLFECMKCEDO_OFFSET))(this, a1);
		}

		::System::Boolean DGMBAGBMPHB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_DGMBAGBMPHB_OFFSET))(this, a1);
		}

		::System::Boolean NKAEPDKJCPB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_NKAEPDKJCPB_OFFSET))(this, a1);
		}

		::System::String* PKMPPNCKALD(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_PKMPPNCKALD_OFFSET))(this, a1);
		}

		::System::Void ILHHKEEFFBM(::RPG::GameCore::FateRinKeywordEventType a1, ::OOCCBMLAELL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinKeywordEventType, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_ILHHKEEFFBM_OFFSET))(this, a1, a2);
		}

		::System::Void KPGCKCAACMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_KPGCKCAACMM_OFFSET))(this);
		}

		::System::Void PAADPCNNMIA(::DDBIKAEOHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDBIKAEOHKB*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_PAADPCNNMIA_OFFSET))(this, a1);
		}

		::System::Boolean HNNJPEIBAAP(::GHEBHGIJDMC* a1, ::RPG::GameCore::FateRinKeywordEventType a2, ::KBHPNKKKAAL a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHEBHGIJDMC*, ::RPG::GameCore::FateRinKeywordEventType, ::KBHPNKKKAAL))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_HNNJPEIBAAP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_GET_UID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_PlayTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_GET_PLAYTARGET_OFFSET))(this);
		}

		::System::Void set_PlayTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_SET_PLAYTARGET_OFFSET))(this, a1);
		}

		::System::Int32 NGDELCBPBHO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_NGDELCBPBHO_OFFSET))(this);
		}

		::System::Int32 AIIDPOOCHCD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_AIIDPOOCHCD_OFFSET))(this);
		}

		::System::Int32 CMGBJKMOIAK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_CMGBJKMOIAK_OFFSET))(this);
		}

		::BJHMBGLPOLB* POFCENMBLGM()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_POFCENMBLGM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* HDCOIFPMKDO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_HDCOIFPMKDO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GHEBHGIJDMC*>* BLOHMEIEHHD()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GHEBHGIJDMC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_BLOHMEIEHHD_OFFSET))(this);
		}

		::RPG::GameCore::FateRinCardPileType get_CurrentPileType()
		{
			return ((::RPG::GameCore::FateRinCardPileType(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_GET_CURRENTPILETYPE_OFFSET))(this);
		}

		::System::Void set_CurrentPileType(::RPG::GameCore::FateRinCardPileType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCardPileType))((::PBYTE)hIl2Cpp + BJHMBGLPOLB_SET_CURRENTPILETYPE_OFFSET))(this, a1);
		}

	};
