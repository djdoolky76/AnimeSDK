#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KANKEPCJION;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }

#define BHFAHPEJDHF_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xB4714A0)
#define BHFAHPEJDHF_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xB471420)
#define BHFAHPEJDHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB471950)
#define BHFAHPEJDHF_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xB471510)
#define BHFAHPEJDHF_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xB471720)
#define BHFAHPEJDHF_DEFELLEJNAD_OFFSET UNITYSDK_OFFSET(0xB4715F0)
#define BHFAHPEJDHF_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xB4716C0)
#define BHFAHPEJDHF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB471180)
#define BHFAHPEJDHF_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xB471810)
#define BHFAHPEJDHF_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xB471880)
#define BHFAHPEJDHF_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xB4717B0)
#define BHFAHPEJDHF_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xB471580)
#define BHFAHPEJDHF_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB471290)
#define BHFAHPEJDHF_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xB4711D0)
#define BHFAHPEJDHF_PPBJHBHMFLN_OFFSET UNITYSDK_OFFSET(0xB4718F0)
#define BHFAHPEJDHF__ONBIND_OFFSET UNITYSDK_OFFSET(0xB471100)

inline static constexpr unsigned int BHFAHPEJDHF_TypeDefinitionIndex = 71972;

	class BHFAHPEJDHF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::UnityEngine::Animation* BFOLCJLBECL; // 0x70
		::KANKEPCJION* HPADAGJIHAO; // 0x78
		// static const ::System::String* GGOHHHPLNEK; // 0x0
		// static const ::System::String* CALMIPOMOKI; // 0x0
		// static const ::System::String* ELNCAFMAKIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFAHPEJDHF__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void PPBJHBHMFLN(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_PPBJHBHMFLN_OFFSET))(this, a1);
		}

		::System::Void DEFELLEJNAD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHFAHPEJDHF_DEFELLEJNAD_OFFSET))(this, a1);
		}

	};
