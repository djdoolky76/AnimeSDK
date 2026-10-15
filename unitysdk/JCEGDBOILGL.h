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

#define JCEGDBOILGL_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x16579220)
#define JCEGDBOILGL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x165798D0)
#define JCEGDBOILGL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x165799C0)
#define JCEGDBOILGL_BEKLLBPECOF_OFFSET UNITYSDK_OFFSET(0x16579140)
#define JCEGDBOILGL_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x16578F20)
#define JCEGDBOILGL_CTOR_OFFSET UNITYSDK_OFFSET(0x16579A90)
#define JCEGDBOILGL_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x165792E0)
#define JCEGDBOILGL_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x165793D0)
#define JCEGDBOILGL_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x16579380)
#define JCEGDBOILGL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x16577FD0)
#define JCEGDBOILGL_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16578060)
#define JCEGDBOILGL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x16578CC0)
#define JCEGDBOILGL_EOCBKDMEFOJ_OFFSET UNITYSDK_OFFSET(0x16578C10)
#define JCEGDBOILGL_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x16579470)
#define JCEGDBOILGL_FBKBDPNBOJO_OFFSET UNITYSDK_OFFSET(0x16578610)
#define JCEGDBOILGL_FKCLHMJMFKE_OFFSET UNITYSDK_OFFSET(0x165785B0)
#define JCEGDBOILGL_GBLPCLMMEGF_OFFSET UNITYSDK_OFFSET(0x16578B40)
#define JCEGDBOILGL_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x165794C0)
#define JCEGDBOILGL_HDPKOFJAFJN_OFFSET UNITYSDK_OFFSET(0x16578750)
#define JCEGDBOILGL_HIFDNDLKHCK_OFFSET UNITYSDK_OFFSET(0x16578BC0)
#define JCEGDBOILGL_HLJFOJDPGBO_OFFSET UNITYSDK_OFFSET(0x165786B0)
#define JCEGDBOILGL_IGMFCMMBJKK_OFFSET UNITYSDK_OFFSET(0x165795D0)
#define JCEGDBOILGL_JJBLFOLHGKK_OFFSET UNITYSDK_OFFSET(0x16579810)
#define JCEGDBOILGL_JMNAJLJBJBA_OFFSET UNITYSDK_OFFSET(0x16579510)
#define JCEGDBOILGL_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x16579420)
#define JCEGDBOILGL_LCBAGLPOCPE_OFFSET UNITYSDK_OFFSET(0x165784C0)
#define JCEGDBOILGL_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x16579330)
#define JCEGDBOILGL_MJMIMFCGKND_OFFSET UNITYSDK_OFFSET(0x16578560)
#define JCEGDBOILGL_NGHIJFHLNFH_OFFSET UNITYSDK_OFFSET(0x16578460)
#define JCEGDBOILGL_NIEIOIAAFOC_OFFSET UNITYSDK_OFFSET(0x16579760)
#define JCEGDBOILGL_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x16577F50)
#define JCEGDBOILGL_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x16578DA0)
#define JCEGDBOILGL_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x165797D0)
#define JCEGDBOILGL_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0x16578A20)
#define JCEGDBOILGL_PIHMHCMHJLP_OFFSET UNITYSDK_OFFSET(0x165787A0)
#define JCEGDBOILGL_PLEEADGGHIK_OFFSET UNITYSDK_OFFSET(0x16579010)
#define JCEGDBOILGL__ONBIND_OFFSET UNITYSDK_OFFSET(0x16577DC0)
#define JCEGDBOILGL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16578FC0)
#define JCEGDBOILGL__ONTICK_OFFSET UNITYSDK_OFFSET(0x16578360)

inline static constexpr unsigned int JCEGDBOILGL_TypeDefinitionIndex = 71869;

	class JCEGDBOILGL : public ::FMPCODLIOLG
	{
	public:
		::EHLKMDOAFOB* APPIHABBCGK; // 0x60
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0x68
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x70
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x78
		::RPG::Client::LocalizedText* HAPJFLCGOMC; // 0x80
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x88
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x90
		::UnityEngine::UI::Image* PLFDOGJMACP; // 0x98
		::UnityEngine::RectTransform* AIDIMEHEEMI; // 0xA0
		::UnityEngine::Animation* PMOJILOJEPE; // 0xA8
		::NPFBPIJFLKM* CHIFNDEFKKM; // 0xB0
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0xB8
		::System::Boolean IDBHEIBEGBA; // 0xBC
		::System::Boolean FMNEEONAMNO; // 0xBD
		::System::Boolean ECLELLFMJHD; // 0xBE
		::System::Boolean GEIAHCFAHEF; // 0xBF
		::UnityEngine::Vector3 KJHOBHCOIEM; // 0xC0
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
