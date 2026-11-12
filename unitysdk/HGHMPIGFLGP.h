#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KANKEPCJION;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define HGHMPIGFLGP_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x16BE97F0)
#define HGHMPIGFLGP_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x16BE97A0)
#define HGHMPIGFLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x16BE9B60)
#define HGHMPIGFLGP_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x16BE9860)
#define HGHMPIGFLGP_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x16BE9990)
#define HGHMPIGFLGP_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x16BE9930)
#define HGHMPIGFLGP_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x16BE9A80)
#define HGHMPIGFLGP_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x16BE9AF0)
#define HGHMPIGFLGP_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x16BE9A20)
#define HGHMPIGFLGP_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x16BE98D0)
#define HGHMPIGFLGP_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x16BE9660)
#define HGHMPIGFLGP_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x16BE95A0)
#define HGHMPIGFLGP_PHGCJGAPNJD_OFFSET UNITYSDK_OFFSET(0x16BE96C0)
#define HGHMPIGFLGP__ONBIND_OFFSET UNITYSDK_OFFSET(0x16BE94F0)
#define HGHMPIGFLGP__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16BE9550)

inline static constexpr unsigned int HGHMPIGFLGP_TypeDefinitionIndex = 74029;

	class HGHMPIGFLGP : public ::FMPCODLIOLG
	{
	public:
		::IGKFNIEJGLM PMECLILMEDH; // 0x60
		::KANKEPCJION* HPADAGJIHAO; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGHMPIGFLGP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGHMPIGFLGP__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HGHMPIGFLGP__ONINITPARAMS_OFFSET))(this, a1);
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
