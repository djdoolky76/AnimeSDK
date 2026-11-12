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

#define KANKEPCJION_AEEJICKNIPN_OFFSET UNITYSDK_OFFSET(0xBB69750)
#define KANKEPCJION_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xBB5D670)
#define KANKEPCJION_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB69B60)
#define KANKEPCJION_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBB69D00)
#define KANKEPCJION_BDFEBABFDKD_OFFSET UNITYSDK_OFFSET(0xBB68050)
#define KANKEPCJION_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xBB5DBE0)
#define KANKEPCJION_BMBEMFOKILB_OFFSET UNITYSDK_OFFSET(0xBB66FF0)
#define KANKEPCJION_BPAFOKEOOCJ_OFFSET UNITYSDK_OFFSET(0xBB68620)
#define KANKEPCJION_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0xBB66EF0)
#define KANKEPCJION_CDOMMLLDGHF_OFFSET UNITYSDK_OFFSET(0xBB67310)
#define KANKEPCJION_CFNGHKMBLDM_OFFSET UNITYSDK_OFFSET(0xBB66490)
#define KANKEPCJION_CGJCECFPCIN_OFFSET UNITYSDK_OFFSET(0xBB69A00)
#define KANKEPCJION_CKKFOGIDAFP_OFFSET UNITYSDK_OFFSET(0xBB685B0)
#define KANKEPCJION_CNBDJFOFALP_OFFSET UNITYSDK_OFFSET(0xBB68690)
#define KANKEPCJION_CTOR_OFFSET UNITYSDK_OFFSET(0xBB69E70)
#define KANKEPCJION_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xBB5DB10)
#define KANKEPCJION_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xBB67A80)
#define KANKEPCJION_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xBB679E0)
#define KANKEPCJION_DGCIKDOCPMC_OFFSET UNITYSDK_OFFSET(0xBB68410)
#define KANKEPCJION_EAGFCBLIOBM_OFFSET UNITYSDK_OFFSET(0xBB69120)
#define KANKEPCJION_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBB66850)
#define KANKEPCJION_EGAOLPHIABC_OFFSET UNITYSDK_OFFSET(0xBB68550)
#define KANKEPCJION_EMBLBFNACLN_OFFSET UNITYSDK_OFFSET(0xBB5E380)
#define KANKEPCJION_EOEIPIPHOEK_OFFSET UNITYSDK_OFFSET(0xBB695C0)
#define KANKEPCJION_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xBB5DEA0)
#define KANKEPCJION_FBKBDPNBOJO_OFFSET UNITYSDK_OFFSET(0xBB68A30)
#define KANKEPCJION_FKCLHMJMFKE_OFFSET UNITYSDK_OFFSET(0xBB689A0)
#define KANKEPCJION_GBLPCLMMEGF_OFFSET UNITYSDK_OFFSET(0xBB692D0)
#define KANKEPCJION_GJFNEPDMOGM_OFFSET UNITYSDK_OFFSET(0xBB67810)
#define KANKEPCJION_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xBB5DF70)
#define KANKEPCJION_HDPKOFJAFJN_OFFSET UNITYSDK_OFFSET(0xBB68BA0)
#define KANKEPCJION_HLJFOJDPGBO_OFFSET UNITYSDK_OFFSET(0xBB68AF0)
#define KANKEPCJION_IGFDACCJLDB_OFFSET UNITYSDK_OFFSET(0xBB693B0)
#define KANKEPCJION_IGMALHDPEHJ_OFFSET UNITYSDK_OFFSET(0xBB684A0)
#define KANKEPCJION_IGMELNPDDBO_OFFSET UNITYSDK_OFFSET(0xBB696F0)
#define KANKEPCJION_IJIEPAFHDCD_OFFSET UNITYSDK_OFFSET(0xBB69A90)
#define KANKEPCJION_IKHMEKACNBB_OFFSET UNITYSDK_OFFSET(0xBB66900)
#define KANKEPCJION_JDPDNPKMEMF_OFFSET UNITYSDK_OFFSET(0xBB66DD0)
#define KANKEPCJION_JLDMMLNLEAC_OFFSET UNITYSDK_OFFSET(0xBB66F80)
#define KANKEPCJION_KCCAGHPJICO_OFFSET UNITYSDK_OFFSET(0xBB5E2B0)
#define KANKEPCJION_KENLJDNCABL_OFFSET UNITYSDK_OFFSET(0xBB687D0)
#define KANKEPCJION_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xBB67AE0)
#define KANKEPCJION_KNNCADODGOK_OFFSET UNITYSDK_OFFSET(0xBB67ED0)
#define KANKEPCJION_LBCJICIADJA_OFFSET UNITYSDK_OFFSET(0xBB69410)
#define KANKEPCJION_LCBAGLPOCPE_OFFSET UNITYSDK_OFFSET(0xBB68870)
#define KANKEPCJION_LJAEPOPOLDM_OFFSET UNITYSDK_OFFSET(0xBB5E1E0)
#define KANKEPCJION_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xBB5DCA0)
#define KANKEPCJION_MJBMOHPFCPC_OFFSET UNITYSDK_OFFSET(0xBB68730)
#define KANKEPCJION_MJMIMFCGKND_OFFSET UNITYSDK_OFFSET(0xBB68950)
#define KANKEPCJION_NIGNPBBCOCI_OFFSET UNITYSDK_OFFSET(0xBB67BD0)
#define KANKEPCJION_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xBB5E050)
#define KANKEPCJION_NOIGLBCBCHE_OFFSET UNITYSDK_OFFSET(0xBB68190)
#define KANKEPCJION_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xBB5E120)
#define KANKEPCJION_OCEBFAAAJBJ_OFFSET UNITYSDK_OFFSET(0xBB67490)
#define KANKEPCJION_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0xBB69010)
#define KANKEPCJION_OGINIGEPHJI_OFFSET UNITYSDK_OFFSET(0xBB69970)
#define KANKEPCJION_OICHHOCNMMG_OFFSET UNITYSDK_OFFSET(0xBB67270)
#define KANKEPCJION_PIHMHCMHJLP_OFFSET UNITYSDK_OFFSET(0xBB68CC0)
#define KANKEPCJION_PMBIKNDECFA_OFFSET UNITYSDK_OFFSET(0xBB69870)
#define KANKEPCJION_PMFIGAEHBEN_OFFSET UNITYSDK_OFFSET(0xBB67C20)
#define KANKEPCJION__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBB66B90)
#define KANKEPCJION__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB65990)
#define KANKEPCJION__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBB67210)
#define KANKEPCJION__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBB667C0)
#define KANKEPCJION__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBB66D00)

inline static constexpr unsigned int KANKEPCJION_TypeDefinitionIndex = 73916;

	class KANKEPCJION : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* GICHMGGOMEB; // 0x60
		::JCPOFHFHMLD* AKCIJFEMHKB; // 0x68
		::UnityEngine::Transform* LHIOIIKGJGN; // 0x70
		::MHOEIMBHDGK* ELKGJBJIOKG; // 0x78
		::UnityEngine::Transform* LDHKPHPPFJK; // 0x80
		::UnityEngine::Animation* APOCMMKNMAP; // 0x88
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x90
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0x98
		::UnityEngine::Transform* MEEJPGNNLLK; // 0xA0
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0xA8
		::JBMLJKFMLBC* MNONMJBHKKG; // 0xB0
		::UnityEngine::UI::Image* AOECKOKHMCE; // 0xB8
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xC0
		::UnityEngine::Transform* HAHOACDNBLP; // 0xC8
		::RPG::GameCore::GameEntity* JDIDAGMBKEL; // 0xD0
		::UnityEngine::Transform* INNNCNCFGEI; // 0xD8
		::UnityEngine::RectTransform* EGKOCBGAFPB; // 0xE0
		::UnityEngine::Animation* HFKOAGGJCBF; // 0xE8
		::RPG::Client::AnimatorButton* DKECLDPHDAB; // 0xF0
		::UnityEngine::Animation* AMBELFJICDC; // 0xF8
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0x100
		::RPG::Client::LocalizedText* HAPJFLCGOMC; // 0x108
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x110
		::UnityEngine::Transform* NKMKJHIIHEG; // 0x118
		::FOOEDBDMACD* IMPFNENJKFC; // 0x120
		::UnityEngine::Transform* GKDKLDGFCNI; // 0x128
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x130
		::UnityEngine::Transform* HKGFBJLMELP; // 0x138
		::UnityEngine::Transform* CPOFOCOHJIL; // 0x140
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0x148
		::System::Boolean FHBNNGCEPFD; // 0x14C
		::System::Boolean FMNEEONAMNO; // 0x14D
		::System::Boolean ECLELLFMJHD; // 0x14E
		::System::Boolean GLEIFOOLBBA; // 0x14F
		::System::Boolean IDBHEIBEGBA; // 0x150
		::System::Boolean LKIOBOGGGOK; // 0x151
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KANKEPCJION__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION__SETUPVIEW_OFFSET))(this);
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
