#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EANKAFJCEEH;
class EHLKMDOAFOB;
class NPFBPIJFLKM;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define JCEGDBOILGL_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x165871F0)
#define JCEGDBOILGL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16587890)
#define JCEGDBOILGL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16587980)
#define JCEGDBOILGL_BEKLLBPECOF_OFFSET UNITYSDK_OFFSET(0x16587110)
#define JCEGDBOILGL_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x16586ED0)
#define JCEGDBOILGL_CTOR_OFFSET UNITYSDK_OFFSET(0x16587A50)
#define JCEGDBOILGL_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x165872B0)
#define JCEGDBOILGL_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x165873A0)
#define JCEGDBOILGL_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x16587350)
#define JCEGDBOILGL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x16585F30)
#define JCEGDBOILGL_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16585FC0)
#define JCEGDBOILGL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x16586C70)
#define JCEGDBOILGL_EOCBKDMEFOJ_OFFSET UNITYSDK_OFFSET(0x16586BC0)
#define JCEGDBOILGL_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x16587440)
#define JCEGDBOILGL_FBKBDPNBOJO_OFFSET UNITYSDK_OFFSET(0x16586590)
#define JCEGDBOILGL_FKCLHMJMFKE_OFFSET UNITYSDK_OFFSET(0x16586530)
#define JCEGDBOILGL_GBLPCLMMEGF_OFFSET UNITYSDK_OFFSET(0x16586AF0)
#define JCEGDBOILGL_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x16587490)
#define JCEGDBOILGL_HDPKOFJAFJN_OFFSET UNITYSDK_OFFSET(0x165866D0)
#define JCEGDBOILGL_HIFDNDLKHCK_OFFSET UNITYSDK_OFFSET(0x16586B70)
#define JCEGDBOILGL_HLJFOJDPGBO_OFFSET UNITYSDK_OFFSET(0x16586630)
#define JCEGDBOILGL_IGMFCMMBJKK_OFFSET UNITYSDK_OFFSET(0x16587590)
#define JCEGDBOILGL_JJBLFOLHGKK_OFFSET UNITYSDK_OFFSET(0x165877D0)
#define JCEGDBOILGL_JMNAJLJBJBA_OFFSET UNITYSDK_OFFSET(0x165874D0)
#define JCEGDBOILGL_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x165873F0)
#define JCEGDBOILGL_LCBAGLPOCPE_OFFSET UNITYSDK_OFFSET(0x16586440)
#define JCEGDBOILGL_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x16587300)
#define JCEGDBOILGL_MJMIMFCGKND_OFFSET UNITYSDK_OFFSET(0x165864E0)
#define JCEGDBOILGL_NGHIJFHLNFH_OFFSET UNITYSDK_OFFSET(0x165863E0)
#define JCEGDBOILGL_NIEIOIAAFOC_OFFSET UNITYSDK_OFFSET(0x16587720)
#define JCEGDBOILGL_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x16585EB0)
#define JCEGDBOILGL_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x16586D50)
#define JCEGDBOILGL_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x16587790)
#define JCEGDBOILGL_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0x165869C0)
#define JCEGDBOILGL_PIHMHCMHJLP_OFFSET UNITYSDK_OFFSET(0x16586730)
#define JCEGDBOILGL_PLEEADGGHIK_OFFSET UNITYSDK_OFFSET(0x16586FD0)
#define JCEGDBOILGL__ONBIND_OFFSET UNITYSDK_OFFSET(0x16585D20)
#define JCEGDBOILGL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16586F70)
#define JCEGDBOILGL__ONTICK_OFFSET UNITYSDK_OFFSET(0x165862E0)

inline static constexpr unsigned int JCEGDBOILGL_TypeDefinitionIndex = 71870;

	class JCEGDBOILGL : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x60
		::UnityEngine::UI::Image* PLFDOGJMACP; // 0x68
		::NPFBPIJFLKM* CHIFNDEFKKM; // 0x70
		::UnityEngine::RectTransform* AIDIMEHEEMI; // 0x78
		::RPG::Client::LocalizedText* HAPJFLCGOMC; // 0x80
		::UnityEngine::Animation* PMOJILOJEPE; // 0x88
		::EHLKMDOAFOB* APPIHABBCGK; // 0x90
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x98
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0xA0
		::EANKAFJCEEH* ABOBEBEOHPA; // 0xA8
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0xB0
		::System::Boolean ECLELLFMJHD; // 0xB8
		::System::Boolean GEIAHCFAHEF; // 0xB9
		::System::Boolean IDBHEIBEGBA; // 0xBA
		::System::Boolean FMNEEONAMNO; // 0xBB
		::UnityEngine::Vector3 KJHOBHCOIEM; // 0xBC
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0xC8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* BKNKKNOEEMM; // 0x0
		// static const ::System::String* PCCKIHBAPJN; // 0x0
		// static const ::System::String* FNNDJJJIGLP; // 0x0
		// static const ::System::String* BOJJLHLLNKG; // 0x0
		// static const ::System::String* OPMPOFPNDEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JCEGDBOILGL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCEGDBOILGL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LCBAGLPOCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_LCBAGLPOCPE_OFFSET))(this);
		}

		::System::Void FKCLHMJMFKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_FKCLHMJMFKE_OFFSET))(this);
		}

		::System::Void FBKBDPNBOJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_FBKBDPNBOJO_OFFSET))(this);
		}

		::System::Void HLJFOJDPGBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_HLJFOJDPGBO_OFFSET))(this);
		}

		::System::Void ODHBBFCDGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_ODHBBFCDGJB_OFFSET))(this);
		}

		::System::Void GBLPCLMMEGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_GBLPCLMMEGF_OFFSET))(this);
		}

		::System::Void MJMIMFCGKND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_MJMIMFCGKND_OFFSET))(this);
		}

		::System::Void PIHMHCMHJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_PIHMHCMHJLP_OFFSET))(this);
		}

		::System::Boolean HDPKOFJAFJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_HDPKOFJAFJN_OFFSET))(this);
		}

		::System::Void HIFDNDLKHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_HIFDNDLKHCK_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCEGDBOILGL_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCEGDBOILGL_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + JCEGDBOILGL_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCEGDBOILGL_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCEGDBOILGL_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JCEGDBOILGL_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCEGDBOILGL_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCEGDBOILGL_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void NGHIJFHLNFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_NGHIJFHLNFH_OFFSET))(this);
		}

		::System::Void PLEEADGGHIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCEGDBOILGL_PLEEADGGHIK_OFFSET))(this, a1);
		}

		::System::Void EOCBKDMEFOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_EOCBKDMEFOJ_OFFSET))(this);
		}

		::System::Void JMNAJLJBJBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_JMNAJLJBJBA_OFFSET))(this);
		}

		::System::Void NIEIOIAAFOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_NIEIOIAAFOC_OFFSET))(this);
		}

		::System::Void BEKLLBPECOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_BEKLLBPECOF_OFFSET))(this);
		}

		::System::Void IGMFCMMBJKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_IGMFCMMBJKK_OFFSET))(this);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void JJBLFOLHGKK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCEGDBOILGL_JJBLFOLHGKK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGDBOILGL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
