#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CHLNCCJDIDI;
class EANKAFJCEEH;
class KANKEPCJION;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define IGIEKBDFBMN_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x19F5D600)
#define IGIEKBDFBMN_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x19F5D5B0)
#define IGIEKBDFBMN_CTOR_OFFSET UNITYSDK_OFFSET(0x19F5DBA0)
#define IGIEKBDFBMN_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x19F5D8F0)
#define IGIEKBDFBMN_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x19F5DA00)
#define IGIEKBDFBMN_DEFELLEJNAD_OFFSET UNITYSDK_OFFSET(0x19F5D310)
#define IGIEKBDFBMN_DEHCEICJJAL_OFFSET UNITYSDK_OFFSET(0x19F5D140)
#define IGIEKBDFBMN_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x19F5D960)
#define IGIEKBDFBMN_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x19F5DAC0)
#define IGIEKBDFBMN_FAJNLALGAAL_OFFSET UNITYSDK_OFFSET(0x19F5D2B0)
#define IGIEKBDFBMN_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x19F5DB30)
#define IGIEKBDFBMN_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x19F5DA60)
#define IGIEKBDFBMN_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x19F5D540)
#define IGIEKBDFBMN_NIGNPBBCOCI_OFFSET UNITYSDK_OFFSET(0x19F5D1A0)
#define IGIEKBDFBMN_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x19F5D490)
#define IGIEKBDFBMN_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x19F5D3E0)
#define IGIEKBDFBMN_PHGCJGAPNJD_OFFSET UNITYSDK_OFFSET(0x19F5D220)
#define IGIEKBDFBMN__ONBIND_OFFSET UNITYSDK_OFFSET(0x19F5CDD0)
#define IGIEKBDFBMN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19F5D0B0)

inline static constexpr unsigned int IGIEKBDFBMN_TypeDefinitionIndex = 74019;

	class IGIEKBDFBMN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* NEFFAGOFKKD; // 0x60
		::UnityEngine::Transform* AIDIMEHEEMI; // 0x68
		::UnityEngine::Animator* APPGGMLEPLN; // 0x70
		::KANKEPCJION* HPADAGJIHAO; // 0x78
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x80
		::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x88
		::CHLNCCJDIDI* MNONMJBHKKG; // 0x90
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x98
		::IGKFNIEJGLM PMECLILMEDH; // 0xA0
		::RPG::Client::AnimatorButton* DKECLDPHDAB; // 0xA8
		::System::Boolean FHBNNGCEPFD; // 0xB0
		// static const ::System::String* GGOHHHPLNEK; // 0x0
		// static const ::System::String* CALMIPOMOKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEKBDFBMN__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IGIEKBDFBMN__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void DEHCEICJJAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_DEHCEICJJAL_OFFSET))(this, a1);
		}

		::System::Void NIGNPBBCOCI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_NIGNPBBCOCI_OFFSET))(this, a1);
		}

		::System::Void PHGCJGAPNJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_PHGCJGAPNJD_OFFSET))(this, a1);
		}

		::System::Boolean FAJNLALGAAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_FAJNLALGAAL_OFFSET))(this);
		}

		::System::Void DEFELLEJNAD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_DEFELLEJNAD_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_GNHIMAJIIPK_OFFSET))(this);
		}

	};
