#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KANKEPCJION;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define JGMMCGIBKFM_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xB9B9560)
#define JGMMCGIBKFM_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xB9B94E0)
#define JGMMCGIBKFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B98D0)
#define JGMMCGIBKFM_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xB9B95D0)
#define JGMMCGIBKFM_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xB9B9700)
#define JGMMCGIBKFM_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xB9B96A0)
#define JGMMCGIBKFM_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xB9B97F0)
#define JGMMCGIBKFM_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xB9B9860)
#define JGMMCGIBKFM_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xB9B9790)
#define JGMMCGIBKFM_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xB9B9640)
#define JGMMCGIBKFM_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB9B9450)
#define JGMMCGIBKFM_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xB9B9390)
#define JGMMCGIBKFM__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9B92E0)
#define JGMMCGIBKFM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB9B9340)

inline static constexpr unsigned int JGMMCGIBKFM_TypeDefinitionIndex = 74007;

	class JGMMCGIBKFM : public ::FMPCODLIOLG
	{
	public:
		::KANKEPCJION* HPADAGJIHAO; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMMCGIBKFM__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JGMMCGIBKFM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMMCGIBKFM_GNHIMAJIIPK_OFFSET))(this);
		}

	};
