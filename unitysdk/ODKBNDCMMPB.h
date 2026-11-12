#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class AGGHHCLPALK;
class EKFMIDBJDIA;
class ENEIHJJPNPI;
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODKBNDCMMPB_ADIMIBOPKNN_OFFSET UNITYSDK_OFFSET(0xC69E020)
#define ODKBNDCMMPB_AMFGAOHDDKK_OFFSET UNITYSDK_OFFSET(0xC69DC00)
#define ODKBNDCMMPB_CAAPOPLBOBM_OFFSET UNITYSDK_OFFSET(0xC69DC90)
#define ODKBNDCMMPB_CKKCFGBNJOH_OFFSET UNITYSDK_OFFSET(0xC69D5B0)
#define ODKBNDCMMPB_CTOR_OFFSET UNITYSDK_OFFSET(0xC69E3B0)
#define ODKBNDCMMPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC69CF60)
#define ODKBNDCMMPB_DJKGAIOBGJF_OFFSET UNITYSDK_OFFSET(0xC69CFB0)
#define ODKBNDCMMPB_DPIGJDNBBHB_OFFSET UNITYSDK_OFFSET(0xC69DA70)
#define ODKBNDCMMPB_GET_ACTIVATEDEXRANKIDLIST_OFFSET UNITYSDK_OFFSET(0xC69DDC0)
#define ODKBNDCMMPB_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0xC69DA50)
#define ODKBNDCMMPB_GET_ISASSISTPLAYER_OFFSET UNITYSDK_OFFSET(0xC69DBA0)
#define ODKBNDCMMPB_GET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xC69DBC0)
#define ODKBNDCMMPB_GET_RANK_OFFSET UNITYSDK_OFFSET(0xC69DDA0)
#define ODKBNDCMMPB_GET_SKINID_OFFSET UNITYSDK_OFFSET(0xC69DBE0)
#define ODKBNDCMMPB_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xC69DC70)
#define ODKBNDCMMPB_GFJGKGEBADE_OFFSET UNITYSDK_OFFSET(0xC69DA80)
#define ODKBNDCMMPB_GOFDPLJEFDG_OFFSET UNITYSDK_OFFSET(0xC69DDE0)
#define ODKBNDCMMPB_JBCPPHPBBAO_OFFSET UNITYSDK_OFFSET(0xC69DF80)
#define ODKBNDCMMPB_KFPIINNPEGL_OFFSET UNITYSDK_OFFSET(0xC69D440)
#define ODKBNDCMMPB_KLIOAJIPOKG_OFFSET UNITYSDK_OFFSET(0xC69DCE0)
#define ODKBNDCMMPB_LICLBAGJLAN_OFFSET UNITYSDK_OFFSET(0xC69D9C0)
#define ODKBNDCMMPB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC69C790)
#define ODKBNDCMMPB_MICKOJNADBA_OFFSET UNITYSDK_OFFSET(0xC69D480)
#define ODKBNDCMMPB_NAFMFGNPENG_OFFSET UNITYSDK_OFFSET(0xC69D910)
#define ODKBNDCMMPB_NIFKJOGDAPH_OFFSET UNITYSDK_OFFSET(0xC69DEB0)
#define ODKBNDCMMPB_OOFLMOBPALH_OFFSET UNITYSDK_OFFSET(0xC69DAE0)
#define ODKBNDCMMPB_PMDPPLFNMAJ_OFFSET UNITYSDK_OFFSET(0xC69DB40)
#define ODKBNDCMMPB_SET_ACTIVATEDEXRANKIDLIST_OFFSET UNITYSDK_OFFSET(0xC69DDD0)
#define ODKBNDCMMPB_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0xC69DA60)
#define ODKBNDCMMPB_SET_ISASSISTPLAYER_OFFSET UNITYSDK_OFFSET(0xC69DBB0)
#define ODKBNDCMMPB_SET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xC69DBD0)
#define ODKBNDCMMPB_SET_RANK_OFFSET UNITYSDK_OFFSET(0xC69DDB0)
#define ODKBNDCMMPB_SET_SKINID_OFFSET UNITYSDK_OFFSET(0xC69DBF0)
#define ODKBNDCMMPB_SET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xC69DC80)

inline static constexpr unsigned int ODKBNDCMMPB_TypeDefinitionIndex = 58876;

	class ODKBNDCMMPB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _ActivatedExRankIDList_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarSkillRow*>* APEOPPEOHPJ; // 0x28
		::RPG::GameCore::IAvatarCommonRowWrap* EDNFMPELNBG; // 0x30
		::System::Collections::Generic::List_1<::AGGHHCLPALK*>* APHNHHEDNCO; // 0x38
		::RPG::GameCore::IAdventurePlayerCommonRowWrap* FHLJLHBJEMB; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* CBCCHEHFJFL; // 0x48
		::RPG::GameCore::SpecialAvatarRow* CAPGLMAKHKJ; // 0x50
		::ACINIALAFDE _AvatarType_k__BackingField; // 0x58
		::System::UInt32 _SkinID_k__BackingField; // 0x5C
		::System::UInt32 _Rank_k__BackingField; // 0x60
		::HNOHHOEPFHC _MultiPathAvatarType_k__BackingField; // 0x64
		::System::Boolean _IsAssistPlayer_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::UInt32 a1, ::System::UInt32 a2, ::ACINIALAFDE a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_DISPOSE_OFFSET))(this);
		}

		::System::Void DJKGAIOBGJF(::RPG::GameCore::AdventureAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_DJKGAIOBGJF_OFFSET))(this, a1);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* KFPIINNPEGL()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_KFPIINNPEGL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* MICKOJNADBA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_MICKOJNADBA_OFFSET))(this);
		}

		::System::Void CKKCFGBNJOH(::ENEIHJJPNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_CKKCFGBNJOH_OFFSET))(this, a1);
		}

		::System::Int32 LICLBAGJLAN(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_LICLBAGJLAN_OFFSET))(this, a1);
		}

		::ACINIALAFDE get_AvatarType()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_SET_AVATARTYPE_OFFSET))(this, a1);
		}

		::System::Boolean DPIGJDNBBHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_DPIGJDNBBHB_OFFSET))(this);
		}

		::System::UInt32 GFJGKGEBADE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GFJGKGEBADE_OFFSET))(this);
		}

		::System::Boolean OOFLMOBPALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_OOFLMOBPALH_OFFSET))(this);
		}

		::System::Boolean PMDPPLFNMAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_PMDPPLFNMAJ_OFFSET))(this);
		}

		::System::Boolean get_IsAssistPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GET_ISASSISTPLAYER_OFFSET))(this);
		}

		::System::Void set_IsAssistPlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_SET_ISASSISTPLAYER_OFFSET))(this, a1);
		}

		::HNOHHOEPFHC get_MultiPathAvatarType()
		{
			return ((::HNOHHOEPFHC(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GET_MULTIPATHAVATARTYPE_OFFSET))(this);
		}

		::System::Void set_MultiPathAvatarType(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_SET_MULTIPATHAVATARTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkinID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GET_SKINID_OFFSET))(this);
		}

		::System::Void set_SkinID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_SET_SKINID_OFFSET))(this, a1);
		}

		::System::UInt32 AMFGAOHDDKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_AMFGAOHDDKK_OFFSET))(this);
		}

		::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GET_ULTRASKILLCONFIG_OFFSET))(this);
		}

		::System::Void set_UltraSkillConfig(::RPG::GameCore::AvatarUltraSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_SET_ULTRASKILLCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarSpecialUltraType CAAPOPLBOBM()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_CAAPOPLBOBM_OFFSET))(this);
		}

		::RPG::Client::IAvatarSkinData* KLIOAJIPOKG()
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_KLIOAJIPOKG_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_SET_RANK_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ActivatedExRankIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GET_ACTIVATEDEXRANKIDLIST_OFFSET))(this);
		}

		::System::Void set_ActivatedExRankIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_SET_ACTIVATEDEXRANKIDLIST_OFFSET))(this, a1);
		}

		::System::Void GOFDPLJEFDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_GOFDPLJEFDG_OFFSET))(this);
		}

		::System::Void NIFKJOGDAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_NIFKJOGDAPH_OFFSET))(this);
		}

		::System::Void JBCPPHPBBAO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_JBCPPHPBBAO_OFFSET))(this, a1);
		}

		::System::Void ADIMIBOPKNN(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_ADIMIBOPKNN_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarSkillRow* NAFMFGNPENG(::System::String* a1)
		{
			return ((::RPG::GameCore::AvatarSkillRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODKBNDCMMPB_NAFMFGNPENG_OFFSET))(this, a1);
		}

	};
