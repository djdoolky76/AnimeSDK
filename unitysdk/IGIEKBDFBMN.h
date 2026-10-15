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

#define IGIEKBDFBMN_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x16401CF0)
#define IGIEKBDFBMN_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x16401CA0)
#define IGIEKBDFBMN_CTOR_OFFSET UNITYSDK_OFFSET(0x16402290)
#define IGIEKBDFBMN_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x16401FE0)
#define IGIEKBDFBMN_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x164020F0)
#define IGIEKBDFBMN_DEFELLEJNAD_OFFSET UNITYSDK_OFFSET(0x16401A00)
#define IGIEKBDFBMN_DEHCEICJJAL_OFFSET UNITYSDK_OFFSET(0x16401830)
#define IGIEKBDFBMN_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x16402050)
#define IGIEKBDFBMN_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x164017A0)
#define IGIEKBDFBMN_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x164021B0)
#define IGIEKBDFBMN_FAJNLALGAAL_OFFSET UNITYSDK_OFFSET(0x164019A0)
#define IGIEKBDFBMN_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x16402220)
#define IGIEKBDFBMN_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x16402150)
#define IGIEKBDFBMN_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x16401C30)
#define IGIEKBDFBMN_NIGNPBBCOCI_OFFSET UNITYSDK_OFFSET(0x16401890)
#define IGIEKBDFBMN_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x16401B80)
#define IGIEKBDFBMN_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x16401AD0)
#define IGIEKBDFBMN_PHGCJGAPNJD_OFFSET UNITYSDK_OFFSET(0x16401910)
#define IGIEKBDFBMN__ONBIND_OFFSET UNITYSDK_OFFSET(0x16401580)

inline static constexpr unsigned int IGIEKBDFBMN_TypeDefinitionIndex = 71990;

	class IGIEKBDFBMN : public ::FMPCODLIOLG
	{
	public:
		::KANKEPCJION* HPADAGJIHAO; // 0x60
		::RPG::Client::AnimatorButton* DKECLDPHDAB; // 0x68
		::UnityEngine::Transform* AIDIMEHEEMI; // 0x70
		::UnityEngine::Animator* APPGGMLEPLN; // 0x78
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x80
		::CHLNCCJDIDI* MNONMJBHKKG; // 0x88
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x90
		::IGKFNIEJGLM PMECLILMEDH; // 0x98
		::UnityEngine::Transform* NEFFAGOFKKD; // 0xA0
		::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0xA8
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IGIEKBDFBMN_DHHDFAAJMMC_OFFSET))(this, a1);
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
