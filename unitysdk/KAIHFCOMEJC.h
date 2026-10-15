#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"
class FMPCODLIOLG;
class KANKEPCJION;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define KAIHFCOMEJC_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xB2D9040)
#define KAIHFCOMEJC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB2DA3F0)
#define KAIHFCOMEJC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB2DA4C0)
#define KAIHFCOMEJC_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xB2D9850)
#define KAIHFCOMEJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DA560)
#define KAIHFCOMEJC_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xB2D9750)
#define KAIHFCOMEJC_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB2D8FF0)
#define KAIHFCOMEJC_EMBLBFNACLN_OFFSET UNITYSDK_OFFSET(0xB2D9FF0)
#define KAIHFCOMEJC_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xB2D9B10)
#define KAIHFCOMEJC_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xB2D9BE0)
#define KAIHFCOMEJC_JGMMABJELOC_OFFSET UNITYSDK_OFFSET(0xB2DA0C0)
#define KAIHFCOMEJC_JMICKEGFBLI_OFFSET UNITYSDK_OFFSET(0xB2D9520)
#define KAIHFCOMEJC_JMNAJLJBJBA_OFFSET UNITYSDK_OFFSET(0xB2D95B0)
#define KAIHFCOMEJC_KCCAGHPJICO_OFFSET UNITYSDK_OFFSET(0xB2D9F20)
#define KAIHFCOMEJC_KDAJHIPCAGI_OFFSET UNITYSDK_OFFSET(0xB2DA2F0)
#define KAIHFCOMEJC_LHFLNGDOBOK_OFFSET UNITYSDK_OFFSET(0xB2DA290)
#define KAIHFCOMEJC_LJAEPOPOLDM_OFFSET UNITYSDK_OFFSET(0xB2D9E50)
#define KAIHFCOMEJC_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xB2D9930)
#define KAIHFCOMEJC_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB2D9CB0)
#define KAIHFCOMEJC_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xB2D9DA0)
#define KAIHFCOMEJC_OHJFLCFCGHI_OFFSET UNITYSDK_OFFSET(0xB2D92E0)
#define KAIHFCOMEJC_OJOANCLAHBL_OFFSET UNITYSDK_OFFSET(0xB2DA190)
#define KAIHFCOMEJC__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2D8D10)

	class KAIHFCOMEJC : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::UnityEngine::UI::Image*>* IABAHDPNOGD; // 0x60
		::UnityEngine::Animator* APPGGMLEPLN; // 0x68
		::Il2CppArray<::UnityEngine::UI::Image*>* FHMBDLMNLOI; // 0x70
		::IGKFNIEJGLM PMECLILMEDH; // 0x78
		::KANKEPCJION* HPADAGJIHAO; // 0x80
		::System::Int32 FDEALDKHCGJ; // 0x88
		::System::Boolean DMCAMAHNGPJ; // 0x8C
		::System::Boolean AKBPNMEFGAO; // 0x8D
		::System::Boolean HOLOCCCIKBH; // 0x8E
		::System::Byte _padding0[0x1];
		::System::Int32 PHHKEAKDOKA; // 0x90
		::RPG::GameCore::SkillUISpecialButtonType OCLJGOHOHEN; // 0x94
		::System::Int32 LPMAIGGPBCL; // 0x98
		::System::Int32 HJCGEINCLPO; // 0x9C
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* LMEAEOKKCJG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_OAAOHHINHPH_OFFSET))(this);
		}

		::RPG::Client::MonoInControlButton* LJAEPOPOLDM()
		{
			return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_LJAEPOPOLDM_OFFSET))(this);
		}

		::RPG::Client::MonoInControlTip* KCCAGHPJICO()
		{
			return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_KCCAGHPJICO_OFFSET))(this);
		}

		::RPG::Client::LongPressEvent* EMBLBFNACLN()
		{
			return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_EMBLBFNACLN_OFFSET))(this);
		}

		::System::Void JMICKEGFBLI(::RPG::GameCore::SkillUISpecialButtonType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_JMICKEGFBLI_OFFSET))(this, a1);
		}

		::System::Void JMNAJLJBJBA(::RPG::GameCore::SkillUISpecialButtonType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType, ::System::String*))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_JMNAJLJBJBA_OFFSET))(this, a1, a2);
		}

		::System::Void OJOANCLAHBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_OJOANCLAHBL_OFFSET))(this, a1);
		}

		::System::Void LHFLNGDOBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_LHFLNGDOBOK_OFFSET))(this);
		}

		::System::Void OHJFLCFCGHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_OHJFLCFCGHI_OFFSET))(this);
		}

		::System::Void JGMMABJELOC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_JGMMABJELOC_OFFSET))(this, a1);
		}

		::System::Void KDAJHIPCAGI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_KDAJHIPCAGI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIHFCOMEJC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
