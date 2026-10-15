#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
class EANKAFJCEEH;
class FMPCODLIOLG;
class FOOEDBDMACD;
class JBMLJKFMLBC;
class JCPOFHFHMLD;
class MHOEIMBHDGK;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define KANKEPCJION_AEEJICKNIPN_OFFSET UNITYSDK_OFFSET(0xB2DDA60)
#define KANKEPCJION_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xB2D2940)
#define KANKEPCJION_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB2DDE70)
#define KANKEPCJION_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB2DE010)
#define KANKEPCJION_BDFEBABFDKD_OFFSET UNITYSDK_OFFSET(0xB2DC360)
#define KANKEPCJION_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xB2D2EB0)
#define KANKEPCJION_BMBEMFOKILB_OFFSET UNITYSDK_OFFSET(0xB2DB300)
#define KANKEPCJION_BPAFOKEOOCJ_OFFSET UNITYSDK_OFFSET(0xB2DC930)
#define KANKEPCJION_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0xB2DB210)
#define KANKEPCJION_CDOMMLLDGHF_OFFSET UNITYSDK_OFFSET(0xB2DB620)
#define KANKEPCJION_CFNGHKMBLDM_OFFSET UNITYSDK_OFFSET(0xB2DA7C0)
#define KANKEPCJION_CGJCECFPCIN_OFFSET UNITYSDK_OFFSET(0xB2DDD10)
#define KANKEPCJION_CKKFOGIDAFP_OFFSET UNITYSDK_OFFSET(0xB2DC8C0)
#define KANKEPCJION_CNBDJFOFALP_OFFSET UNITYSDK_OFFSET(0xB2DC9A0)
#define KANKEPCJION_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DE180)
#define KANKEPCJION_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xB2D2DE0)
#define KANKEPCJION_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xB2DBD90)
#define KANKEPCJION_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xB2DBCF0)
#define KANKEPCJION_DGCIKDOCPMC_OFFSET UNITYSDK_OFFSET(0xB2DC720)
#define KANKEPCJION_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB2DAAF0)
#define KANKEPCJION_EAGFCBLIOBM_OFFSET UNITYSDK_OFFSET(0xB2DD430)
#define KANKEPCJION_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB2DAB80)
#define KANKEPCJION_EGAOLPHIABC_OFFSET UNITYSDK_OFFSET(0xB2DC860)
#define KANKEPCJION_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB2DB030)
#define KANKEPCJION_EMBLBFNACLN_OFFSET UNITYSDK_OFFSET(0xB2D3630)
#define KANKEPCJION_EOEIPIPHOEK_OFFSET UNITYSDK_OFFSET(0xB2DD8D0)
#define KANKEPCJION_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xB2D3170)
#define KANKEPCJION_FBKBDPNBOJO_OFFSET UNITYSDK_OFFSET(0xB2DCD40)
#define KANKEPCJION_FKCLHMJMFKE_OFFSET UNITYSDK_OFFSET(0xB2DCCB0)
#define KANKEPCJION_GBLPCLMMEGF_OFFSET UNITYSDK_OFFSET(0xB2DD5E0)
#define KANKEPCJION_GJFNEPDMOGM_OFFSET UNITYSDK_OFFSET(0xB2DBB20)
#define KANKEPCJION_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xB2D3240)
#define KANKEPCJION_HDPKOFJAFJN_OFFSET UNITYSDK_OFFSET(0xB2DCEB0)
#define KANKEPCJION_HLJFOJDPGBO_OFFSET UNITYSDK_OFFSET(0xB2DCE00)
#define KANKEPCJION_IGFDACCJLDB_OFFSET UNITYSDK_OFFSET(0xB2DD6C0)
#define KANKEPCJION_IGMALHDPEHJ_OFFSET UNITYSDK_OFFSET(0xB2DC7B0)
#define KANKEPCJION_IGMELNPDDBO_OFFSET UNITYSDK_OFFSET(0xB2DDA00)
#define KANKEPCJION_IJIEPAFHDCD_OFFSET UNITYSDK_OFFSET(0xB2DDDA0)
#define KANKEPCJION_IKHMEKACNBB_OFFSET UNITYSDK_OFFSET(0xB2DAC30)
#define KANKEPCJION_JDPDNPKMEMF_OFFSET UNITYSDK_OFFSET(0xB2DB100)
#define KANKEPCJION_JLDMMLNLEAC_OFFSET UNITYSDK_OFFSET(0xB2DB2A0)
#define KANKEPCJION_KCCAGHPJICO_OFFSET UNITYSDK_OFFSET(0xB2D3570)
#define KANKEPCJION_KENLJDNCABL_OFFSET UNITYSDK_OFFSET(0xB2DCAE0)
#define KANKEPCJION_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xB2DBDF0)
#define KANKEPCJION_KNNCADODGOK_OFFSET UNITYSDK_OFFSET(0xB2DC1E0)
#define KANKEPCJION_LBCJICIADJA_OFFSET UNITYSDK_OFFSET(0xB2DD720)
#define KANKEPCJION_LCBAGLPOCPE_OFFSET UNITYSDK_OFFSET(0xB2DCB80)
#define KANKEPCJION_LJAEPOPOLDM_OFFSET UNITYSDK_OFFSET(0xB2D34B0)
#define KANKEPCJION_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xB2D2F70)
#define KANKEPCJION_MJBMOHPFCPC_OFFSET UNITYSDK_OFFSET(0xB2DCA40)
#define KANKEPCJION_MJMIMFCGKND_OFFSET UNITYSDK_OFFSET(0xB2DCC60)
#define KANKEPCJION_NIGNPBBCOCI_OFFSET UNITYSDK_OFFSET(0xB2DBEE0)
#define KANKEPCJION_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB2DAEC0)
#define KANKEPCJION_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB2D3320)
#define KANKEPCJION_NOIGLBCBCHE_OFFSET UNITYSDK_OFFSET(0xB2DC4A0)
#define KANKEPCJION_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xB2D33F0)
#define KANKEPCJION_OCEBFAAAJBJ_OFFSET UNITYSDK_OFFSET(0xB2DB7A0)
#define KANKEPCJION_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0xB2DD320)
#define KANKEPCJION_OGINIGEPHJI_OFFSET UNITYSDK_OFFSET(0xB2DDC80)
#define KANKEPCJION_OICHHOCNMMG_OFFSET UNITYSDK_OFFSET(0xB2DB580)
#define KANKEPCJION_PIHMHCMHJLP_OFFSET UNITYSDK_OFFSET(0xB2DCFD0)
#define KANKEPCJION_PMBIKNDECFA_OFFSET UNITYSDK_OFFSET(0xB2DDB80)
#define KANKEPCJION_PMFIGAEHBEN_OFFSET UNITYSDK_OFFSET(0xB2DBF30)
#define KANKEPCJION__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2DA0B0)
#define KANKEPCJION__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB2DB520)

inline static constexpr unsigned int KANKEPCJION_TypeDefinitionIndex = 71894;

	class KANKEPCJION : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* HAHOACDNBLP; // 0x60
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x68
		::UnityEngine::Animation* AMBELFJICDC; // 0x70
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x78
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x80
		::RPG::Client::LocalizedText* HAPJFLCGOMC; // 0x88
		::UnityEngine::Animation* APOCMMKNMAP; // 0x90
		::JCPOFHFHMLD* AKCIJFEMHKB; // 0x98
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xA0
		::RPG::Client::AnimatorButton* DKECLDPHDAB; // 0xA8
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0xB0
		::UnityEngine::UI::Image* AOECKOKHMCE; // 0xB8
		::UnityEngine::RectTransform* EGKOCBGAFPB; // 0xC0
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0xC8
		::UnityEngine::Transform* LHIOIIKGJGN; // 0xD0
		::UnityEngine::Transform* NKMKJHIIHEG; // 0xD8
		::UnityEngine::Transform* LDHKPHPPFJK; // 0xE0
		::UnityEngine::Transform* CPOFOCOHJIL; // 0xE8
		::FOOEDBDMACD* IMPFNENJKFC; // 0xF0
		::UnityEngine::Transform* GICHMGGOMEB; // 0xF8
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0x100
		::JBMLJKFMLBC* MNONMJBHKKG; // 0x108
		::MHOEIMBHDGK* ELKGJBJIOKG; // 0x110
		::UnityEngine::Transform* HKGFBJLMELP; // 0x118
		::UnityEngine::Transform* GKDKLDGFCNI; // 0x120
		::RPG::GameCore::GameEntity* JDIDAGMBKEL; // 0x128
		::UnityEngine::Animation* HFKOAGGJCBF; // 0x130
		::UnityEngine::Transform* MEEJPGNNLLK; // 0x138
		::UnityEngine::Transform* INNNCNCFGEI; // 0x140
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0x148
		::System::Boolean FHBNNGCEPFD; // 0x14C
		::System::Boolean LKIOBOGGGOK; // 0x14D
		::System::Boolean GLEIFOOLBBA; // 0x14E
		::System::Boolean IDBHEIBEGBA; // 0x14F
		::System::Boolean FMNEEONAMNO; // 0x150
		::System::Boolean ECLELLFMJHD; // 0x151
		// static const ::System::String* JGEGLOKFOCM; // 0x0
		// static const ::System::String* JCLANKOMIIP; // 0x0
		// static const ::System::String* AEGLBFIEBAC; // 0x0
		// static const ::System::String* GAOFPPDCPCE; // 0x0
		// static const ::System::String* PAHKELPMCAF; // 0x0
		// static const ::System::String* DBLHHNEALFL; // 0x0
		// static const ::System::String* OKIMBLGMCFD; // 0x0
		// static const ::System::String* ONNNIHPEFDL; // 0x0
		// static const ::System::String* KLMIBMHDODN; // 0x0
		// static const ::System::String* BKNKKNOEEMM; // 0x0
		// static const ::System::String* DGLADLECBAA; // 0x0
		// static const ::System::String* FKIEDFEEAEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION__ONBIND_OFFSET))(this);
		}

		::System::Void CFNGHKMBLDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_CFNGHKMBLDM_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KANKEPCJION_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + KANKEPCJION_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION__ONDISPOSE_OFFSET))(this);
		}

		::System::Void OICHHOCNMMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_OICHHOCNMMG_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KANKEPCJION_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void GJFNEPDMOGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_GJFNEPDMOGM_OFFSET))(this);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KANKEPCJION_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KANKEPCJION_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void NIGNPBBCOCI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KANKEPCJION_NIGNPBBCOCI_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void OCEBFAAAJBJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KANKEPCJION_OCEBFAAAJBJ_OFFSET))(this, a1, a2);
		}

		::System::Void BDFEBABFDKD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KANKEPCJION_BDFEBABFDKD_OFFSET))(this, a1, a2);
		}

		::System::Void CDOMMLLDGHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_CDOMMLLDGHF_OFFSET))(this, a1);
		}

		::System::Void JDPDNPKMEMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_JDPDNPKMEMF_OFFSET))(this);
		}

		::System::Void JLDMMLNLEAC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_JLDMMLNLEAC_OFFSET))(this, a1);
		}

		::System::Void BMBEMFOKILB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_BMBEMFOKILB_OFFSET))(this);
		}

		::System::Void BPAFOKEOOCJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KANKEPCJION_BPAFOKEOOCJ_OFFSET))(this, a1);
		}

		::System::Void CNBDJFOFALP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_CNBDJFOFALP_OFFSET))(this, a1);
		}

		::System::Void MJBMOHPFCPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_MJBMOHPFCPC_OFFSET))(this);
		}

		::System::Void KENLJDNCABL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_KENLJDNCABL_OFFSET))(this);
		}

		::System::Void CKKFOGIDAFP(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + KANKEPCJION_CKKFOGIDAFP_OFFSET))(this, a1);
		}

		::System::Void IKHMEKACNBB(::RPG::Client::LongPressEvent* a1, ::RPG::Client::MonoInControlTip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*, ::RPG::Client::MonoInControlTip*))((::PBYTE)hIl2Cpp + KANKEPCJION_IKHMEKACNBB_OFFSET))(this, a1, a2);
		}

		::System::Void LCBAGLPOCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_LCBAGLPOCPE_OFFSET))(this);
		}

		::System::Void FKCLHMJMFKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_FKCLHMJMFKE_OFFSET))(this);
		}

		::System::Void FBKBDPNBOJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_FBKBDPNBOJO_OFFSET))(this);
		}

		::System::Void HLJFOJDPGBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_HLJFOJDPGBO_OFFSET))(this);
		}

		::System::Void ODHBBFCDGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_ODHBBFCDGJB_OFFSET))(this);
		}

		::System::Void GBLPCLMMEGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_GBLPCLMMEGF_OFFSET))(this);
		}

		::System::Void IGFDACCJLDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_IGFDACCJLDB_OFFSET))(this);
		}

		::System::Boolean EAGFCBLIOBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_EAGFCBLIOBM_OFFSET))(this);
		}

		::System::Boolean HDPKOFJAFJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_HDPKOFJAFJN_OFFSET))(this);
		}

		::System::Void MJMIMFCGKND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_MJMIMFCGKND_OFFSET))(this);
		}

		::System::Void PIHMHCMHJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_PIHMHCMHJLP_OFFSET))(this);
		}

		::System::Boolean IGMELNPDDBO(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KANKEPCJION_IGMELNPDDBO_OFFSET))(this, a1);
		}

		::System::Void IGMALHDPEHJ(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KANKEPCJION_IGMALHDPEHJ_OFFSET))(this, a1);
		}

		::System::Void EGAOLPHIABC(::RPG::GameCore::ControlSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + KANKEPCJION_EGAOLPHIABC_OFFSET))(this, a1);
		}

		::System::Boolean EOEIPIPHOEK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KANKEPCJION_EOEIPIPHOEK_OFFSET))(this, a1);
		}

		::System::Void PMFIGAEHBEN(::System::Int32 a1, ::RPG::GameCore::ICharacterSkillRowData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + KANKEPCJION_PMFIGAEHBEN_OFFSET))(this, a1, a2);
		}

		::System::Void KNNCADODGOK(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + KANKEPCJION_KNNCADODGOK_OFFSET))(this, a1);
		}

		::System::Void NOIGLBCBCHE(::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo))((::PBYTE)hIl2Cpp + KANKEPCJION_NOIGLBCBCHE_OFFSET))(this, a1);
		}

		::System::Void DGCIKDOCPMC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KANKEPCJION_DGCIKDOCPMC_OFFSET))(this, a1);
		}

		::System::Void AEEJICKNIPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KANKEPCJION_AEEJICKNIPN_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LBCJICIADJA()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_LBCJICIADJA_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_OAAOHHINHPH_OFFSET))(this);
		}

		::RPG::Client::MonoInControlButton* LJAEPOPOLDM()
		{
			return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_LJAEPOPOLDM_OFFSET))(this);
		}

		::RPG::Client::MonoInControlTip* KCCAGHPJICO()
		{
			return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_KCCAGHPJICO_OFFSET))(this);
		}

		::RPG::Client::LongPressEvent* EMBLBFNACLN()
		{
			return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_EMBLBFNACLN_OFFSET))(this);
		}

		::System::Void PMBIKNDECFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KANKEPCJION_PMBIKNDECFA_OFFSET))(this, a1);
		}

		::System::Void OGINIGEPHJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KANKEPCJION_OGINIGEPHJI_OFFSET))(this, a1);
		}

		::System::Void CGJCECFPCIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KANKEPCJION_CGJCECFPCIN_OFFSET))(this, a1);
		}

		::System::Void IJIEPAFHDCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KANKEPCJION_IJIEPAFHDCD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
