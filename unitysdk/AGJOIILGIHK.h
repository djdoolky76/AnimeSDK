#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/EmojiGenderEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class HHJLCGGEHPB;
class JBJNJPAOCDA;
class JOLAHHGIFHA;
class KHBEIDOCBCN;
class LCFEMHGIJAG;
class MIKGMGBHLEN;
class OMODPHBHKAG;
class POBLGKIGINE;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGJOIILGIHK_AEJPMGBPDHC_OFFSET UNITYSDK_OFFSET(0xCF2FC60)
#define AGJOIILGIHK_AHANDKFDKIM_OFFSET UNITYSDK_OFFSET(0xCF2F2B0)
#define AGJOIILGIHK_ANAPMHJFJML_OFFSET UNITYSDK_OFFSET(0xCF31840)
#define AGJOIILGIHK_APMFFKHBAGG_OFFSET UNITYSDK_OFFSET(0xCF338A0)
#define AGJOIILGIHK_BFBKKOIOIPJ_OFFSET UNITYSDK_OFFSET(0xCF2FCF0)
#define AGJOIILGIHK_BIOHJNAMPGJ_OFFSET UNITYSDK_OFFSET(0xCF32A70)
#define AGJOIILGIHK_BIPLIFIFKMM_OFFSET UNITYSDK_OFFSET(0xCF31B20)
#define AGJOIILGIHK_CDLPDOEMOFD_OFFSET UNITYSDK_OFFSET(0xCF2FE40)
#define AGJOIILGIHK_CFPIMIOMENM_OFFSET UNITYSDK_OFFSET(0xCF32F10)
#define AGJOIILGIHK_CIFEIPOICOL_OFFSET UNITYSDK_OFFSET(0xCF34D60)
#define AGJOIILGIHK_CKGNJOLAJGP_OFFSET UNITYSDK_OFFSET(0xCF33720)
#define AGJOIILGIHK_CODNFBINCMJ_OFFSET UNITYSDK_OFFSET(0xCF32EA0)
#define AGJOIILGIHK_CTOR_OFFSET UNITYSDK_OFFSET(0xCF2FA10)
#define AGJOIILGIHK_DEBIKNBFIJP_OFFSET UNITYSDK_OFFSET(0xCF34100)
#define AGJOIILGIHK_DINLJIJPFHM_OFFSET UNITYSDK_OFFSET(0xCF33050)
#define AGJOIILGIHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF312B0)
#define AGJOIILGIHK_DKIOAHHJNAJ_OFFSET UNITYSDK_OFFSET(0xCF34440)
#define AGJOIILGIHK_EHADNJCGLHB_OFFSET UNITYSDK_OFFSET(0xCF2F860)
#define AGJOIILGIHK_EHMHHGPGPMM_OFFSET UNITYSDK_OFFSET(0xCF2F5F0)
#define AGJOIILGIHK_EMAAFBHHJBI_OFFSET UNITYSDK_OFFSET(0xCF32250)
#define AGJOIILGIHK_FGHMHKGBOOD_OFFSET UNITYSDK_OFFSET(0xCF33300)
#define AGJOIILGIHK_FICNPLKCJKA_OFFSET UNITYSDK_OFFSET(0xCF2F130)
#define AGJOIILGIHK_GET_RECENTVISITORLIST_OFFSET UNITYSDK_OFFSET(0xCF34D40)
#define AGJOIILGIHK_GET_ROOMOWNERUID_OFFSET UNITYSDK_OFFSET(0xCF34D00)
#define AGJOIILGIHK_GET_ROOMPOPULARITYVALUE_OFFSET UNITYSDK_OFFSET(0xCF34D20)
#define AGJOIILGIHK_GGHHCEABCIG_OFFSET UNITYSDK_OFFSET(0xCF34A70)
#define AGJOIILGIHK_GHAIJFKDOKL_OFFSET UNITYSDK_OFFSET(0xCF34B40)
#define AGJOIILGIHK_GKBFOAKILNE_OFFSET UNITYSDK_OFFSET(0xCF32AD0)
#define AGJOIILGIHK_HGHHDFFGICO_OFFSET UNITYSDK_OFFSET(0xCF2F8A0)
#define AGJOIILGIHK_IDKMCOHAAHD_OFFSET UNITYSDK_OFFSET(0xCF34BD0)
#define AGJOIILGIHK_IHNLHDFPGLE_OFFSET UNITYSDK_OFFSET(0xCF34660)
#define AGJOIILGIHK_IJGCHPKNHHD_OFFSET UNITYSDK_OFFSET(0xCF337F0)
#define AGJOIILGIHK_IMGAHPPFCJL_OFFSET UNITYSDK_OFFSET(0xCF30D30)
#define AGJOIILGIHK_IOFALIBHCMN_OFFSET UNITYSDK_OFFSET(0xCF341E0)
#define AGJOIILGIHK_JABMMIGFBFE_OFFSET UNITYSDK_OFFSET(0xCF335D0)
#define AGJOIILGIHK_JKNNGDAOLIH_OFFSET UNITYSDK_OFFSET(0xCF318E0)
#define AGJOIILGIHK_KEHDFCCLPFK_OFFSET UNITYSDK_OFFSET(0xCF33F50)
#define AGJOIILGIHK_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xCF31340)
#define AGJOIILGIHK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF2FB70)
#define AGJOIILGIHK_LBKKLJOHFPJ_OFFSET UNITYSDK_OFFSET(0xCF32790)
#define AGJOIILGIHK_MCBNCHJDMDN_OFFSET UNITYSDK_OFFSET(0xCF32E30)
#define AGJOIILGIHK_MHIBDLKIFFH_OFFSET UNITYSDK_OFFSET(0xCF34190)
#define AGJOIILGIHK_MOBMEKAGKLM_OFFSET UNITYSDK_OFFSET(0xCF34C60)
#define AGJOIILGIHK_NEGFEJNEDDC_OFFSET UNITYSDK_OFFSET(0xCF31CE0)
#define AGJOIILGIHK_NELDINFPNAO_OFFSET UNITYSDK_OFFSET(0xCF322E0)
#define AGJOIILGIHK_NMLKPBANKDC_OFFSET UNITYSDK_OFFSET(0xCF33E80)
#define AGJOIILGIHK_NNANGIMEFIG_OFFSET UNITYSDK_OFFSET(0xCF31B80)
#define AGJOIILGIHK_OFNAIHBHLCP_OFFSET UNITYSDK_OFFSET(0xCF30E80)
#define AGJOIILGIHK_OKNEDEJFKII_OFFSET UNITYSDK_OFFSET(0xCF321A0)
#define AGJOIILGIHK_OMANKFDFGLJ_OFFSET UNITYSDK_OFFSET(0xCF34DF0)
#define AGJOIILGIHK_PCJNJAOHNAP_OFFSET UNITYSDK_OFFSET(0xCF317F0)
#define AGJOIILGIHK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xCF315A0)
#define AGJOIILGIHK_SET_RECENTVISITORLIST_OFFSET UNITYSDK_OFFSET(0xCF34D50)
#define AGJOIILGIHK_SET_ROOMOWNERUID_OFFSET UNITYSDK_OFFSET(0xCF34D10)
#define AGJOIILGIHK_SET_ROOMPOPULARITYVALUE_OFFSET UNITYSDK_OFFSET(0xCF34D30)

inline static constexpr unsigned int AGJOIILGIHK_TypeDefinitionIndex = 66409;

	class AGJOIILGIHK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* PIINKLHJFGN; // 0x10
		::OMODPHBHKAG* NBIAIHMHJCF; // 0x18
		::System::Collections::Generic::List_1<::HHJLCGGEHPB*>* _RecentVisitorList_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* HECDBKDMIBD; // 0x28
		::KHBEIDOCBCN* MEIBAPENENI; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JBJNJPAOCDA*>* DDFCHNLDCEK; // 0x38
		::System::Boolean MAICLCHEIDL; // 0x40
		::RPG::GameCore::CharacterVisibleReason KEFGJMCBJKF; // 0x41
		::System::Boolean BHMFOGDOIOG; // 0x42
		::System::Byte _padding0[0x1];
		::System::UInt32 _RoomOwnerUid_k__BackingField; // 0x44
		::System::UInt32 _RoomPopularityValue_k__BackingField; // 0x48
		::System::Byte _padding1[0x4];
		::System::UInt64 NGHJLHDNPPB; // 0x50
		::System::Int64 JOGACEAKCLK; // 0x58
		::System::Void _ctor(::KHBEIDOCBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHBEIDOCBCN*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_CTOR_OFFSET))(this, a1);
		}

		::System::Void FICNPLKCJKA(::System::UInt32 a1, ::MIKGMGBHLEN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MIKGMGBHLEN*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_FICNPLKCJKA_OFFSET))(this, a1, a2);
		}

		::System::Void AHANDKFDKIM(::LCFEMHGIJAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCFEMHGIJAG*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_AHANDKFDKIM_OFFSET))(this, a1);
		}

		::System::Void EHMHHGPGPMM(::LCFEMHGIJAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCFEMHGIJAG*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_EHMHHGPGPMM_OFFSET))(this, a1);
		}

		::RPG::GameCore::EmojiGenderEnum HGHHDFFGICO(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EmojiGenderEnum(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_HGHHDFFGICO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* EHADNJCGLHB()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_EHADNJCGLHB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void BIPLIFIFKMM(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::JOLAHHGIFHA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::JOLAHHGIFHA*>*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_BIPLIFIFKMM_OFFSET))(this, a1, a2);
		}

		::System::Void NEGFEJNEDDC(::JBJNJPAOCDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_NEGFEJNEDDC_OFFSET))(this, a1);
		}

		::System::Void GKBFOAKILNE(::System::UInt32 a1, ::CBPDACMBHGL a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + AGJOIILGIHK_GKBFOAKILNE_OFFSET))(this, a1, a2);
		}

		::System::Void MCBNCHJDMDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_MCBNCHJDMDN_OFFSET))(this, a1);
		}

		::System::Void CODNFBINCMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_CODNFBINCMJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CFPIMIOMENM()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_CFPIMIOMENM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* DINLJIJPFHM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_DINLJIJPFHM_OFFSET))(this);
		}

		::System::Void FGHMHKGBOOD(::CBPDACMBHGL a1, ::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::CBPDACMBHGL, ::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJOIILGIHK_FGHMHKGBOOD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::PlayerBriefDisplayData* JABMMIGFBFE(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_JABMMIGFBFE_OFFSET))(this, a1);
		}

		::System::Boolean CKGNJOLAJGP(::System::UInt32 a1, ::JBJNJPAOCDA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_CKGNJOLAJGP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*>>* IJGCHPKNHHD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_IJGCHPKNHHD_OFFSET))(this);
		}

		::System::UInt32 APMFFKHBAGG(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_APMFFKHBAGG_OFFSET))(this, a1);
		}

		::System::String* KEHDFCCLPFK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_KEHDFCCLPFK_OFFSET))(this);
		}

		::System::Void DEBIKNBFIJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_DEBIKNBFIJP_OFFSET))(this, a1);
		}

		::System::Void MHIBDLKIFFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_MHIBDLKIFFH_OFFSET))(this);
		}

		::System::Void IOFALIBHCMN(::System::Collections::Generic::IEnumerable_1<::HHJLCGGEHPB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HHJLCGGEHPB*>*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_IOFALIBHCMN_OFFSET))(this, a1);
		}

		::System::Void DKIOAHHJNAJ(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + AGJOIILGIHK_DKIOAHHJNAJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean NMLKPBANKDC(::JBJNJPAOCDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_NMLKPBANKDC_OFFSET))(this, a1);
		}

		::System::Void CDLPDOEMOFD(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_CDLPDOEMOFD_OFFSET))(this, a1);
		}

		::System::Void IHNLHDFPGLE(::JBJNJPAOCDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_IHNLHDFPGLE_OFFSET))(this, a1);
		}

		static ::System::Boolean GGHHCEABCIG(::JBJNJPAOCDA* a1, ::JBJNJPAOCDA* a2)
		{
			return ((::System::Boolean(*)(::JBJNJPAOCDA*, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_GGHHCEABCIG_OFFSET))(a1, a2);
		}

		static ::System::Void GHAIJFKDOKL(::JBJNJPAOCDA* a1, ::JBJNJPAOCDA* a2)
		{
			return ((::System::Void(*)(::JBJNJPAOCDA*, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_GHAIJFKDOKL_OFFSET))(a1, a2);
		}

		::System::Void AEJPMGBPDHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_AEJPMGBPDHC_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void PCJNJAOHNAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_PCJNJAOHNAP_OFFSET))(this);
		}

		::System::Void NELDINFPNAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_NELDINFPNAO_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* IDKMCOHAAHD(::System::UInt32 a1, ::JBJNJPAOCDA* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_IDKMCOHAAHD_OFFSET))(this, a1, a2);
		}

		::System::Void BIOHJNAMPGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_BIOHJNAMPGJ_OFFSET))(this, a1);
		}

		::System::Void JKNNGDAOLIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_JKNNGDAOLIH_OFFSET))(this, a1);
		}

		::System::Void LBKKLJOHFPJ(::System::UInt32 a1, ::JOLAHHGIFHA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JOLAHHGIFHA*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_LBKKLJOHFPJ_OFFSET))(this, a1, a2);
		}

		::System::Void BFBKKOIOIPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_BFBKKOIOIPJ_OFFSET))(this);
		}

		::System::Void NNANGIMEFIG(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::JOLAHHGIFHA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::JOLAHHGIFHA*>*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_NNANGIMEFIG_OFFSET))(this, a1, a2);
		}

		::System::Void IMGAHPPFCJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_IMGAHPPFCJL_OFFSET))(this);
		}

		::System::Void ANAPMHJFJML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_ANAPMHJFJML_OFFSET))(this);
		}

		::System::Void OFNAIHBHLCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_OFNAIHBHLCP_OFFSET))(this);
		}

		::System::Boolean OKNEDEJFKII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_OKNEDEJFKII_OFFSET))(this);
		}

		::System::Boolean MOBMEKAGKLM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_MOBMEKAGKLM_OFFSET))(this);
		}

		::System::UInt32 get_RoomOwnerUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_GET_ROOMOWNERUID_OFFSET))(this);
		}

		::System::Void set_RoomOwnerUid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_SET_ROOMOWNERUID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomPopularityValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_GET_ROOMPOPULARITYVALUE_OFFSET))(this);
		}

		::System::Void set_RoomPopularityValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGJOIILGIHK_SET_ROOMPOPULARITYVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::HHJLCGGEHPB*>* get_RecentVisitorList()
		{
			return ((::System::Collections::Generic::List_1<::HHJLCGGEHPB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_GET_RECENTVISITORLIST_OFFSET))(this);
		}

		::System::Void set_RecentVisitorList(::System::Collections::Generic::List_1<::HHJLCGGEHPB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HHJLCGGEHPB*>*))((::PBYTE)hIl2Cpp + AGJOIILGIHK_SET_RECENTVISITORLIST_OFFSET))(this, a1);
		}

		::CBPDACMBHGL EMAAFBHHJBI()
		{
			return ((::CBPDACMBHGL(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_EMAAFBHHJBI_OFFSET))(this);
		}

		::System::UInt32 CIFEIPOICOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_CIFEIPOICOL_OFFSET))(this);
		}

		::RPG::Client::TextID OMANKFDFGLJ()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK_OMANKFDFGLJ_OFFSET))(this);
		}

	};
