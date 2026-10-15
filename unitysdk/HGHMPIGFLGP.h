#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KANKEPCJION;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define HGHMPIGFLGP_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x15C9F570)
#define HGHMPIGFLGP_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15C9F520)
#define HGHMPIGFLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9F8E0)
#define HGHMPIGFLGP_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x15C9F5E0)
#define HGHMPIGFLGP_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x15C9F710)
#define HGHMPIGFLGP_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x15C9F6B0)
#define HGHMPIGFLGP_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15C9F2D0)
#define HGHMPIGFLGP_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x15C9F800)
#define HGHMPIGFLGP_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x15C9F870)
#define HGHMPIGFLGP_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x15C9F7A0)
#define HGHMPIGFLGP_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x15C9F650)
#define HGHMPIGFLGP_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x15C9F3E0)
#define HGHMPIGFLGP_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x15C9F320)
#define HGHMPIGFLGP_PHGCJGAPNJD_OFFSET UNITYSDK_OFFSET(0x15C9F440)
#define HGHMPIGFLGP__ONBIND_OFFSET UNITYSDK_OFFSET(0x15C9F270)

	class HGHMPIGFLGP : public ::FMPCODLIOLG
	{
	public:
		::KANKEPCJION* HPADAGJIHAO; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGHMPIGFLGP__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void PHGCJGAPNJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_PHGCJGAPNJD_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_GNHIMAJIIPK_OFFSET))(this);
		}

	};
