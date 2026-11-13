#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFOPMEOBPCM;
class JCEGDBOILGL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define DEKCCAHELDD_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x1B377FC0)
#define DEKCCAHELDD_BILCLGDPODA_OFFSET UNITYSDK_OFFSET(0x1B377EB0)
#define DEKCCAHELDD_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1B377F60)
#define DEKCCAHELDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3783D0)
#define DEKCCAHELDD_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x1B378030)
#define DEKCCAHELDD_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x1B378180)
#define DEKCCAHELDD_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x1B378110)
#define DEKCCAHELDD_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x1B378260)
#define DEKCCAHELDD_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x1B3782E0)
#define DEKCCAHELDD_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x1B3781F0)
#define DEKCCAHELDD_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x1B3780A0)
#define DEKCCAHELDD_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x1B377E40)
#define DEKCCAHELDD_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x1B378360)
#define DEKCCAHELDD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B377D90)

inline static constexpr unsigned int DEKCCAHELDD_TypeDefinitionIndex = 73893;

	class DEKCCAHELDD : public ::FMPCODLIOLG
	{
	public:
		::JCEGDBOILGL* ALDHAHCKOPM; // 0x60
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x68
		::IGKFNIEJGLM PMECLILMEDH; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKCCAHELDD_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DEKCCAHELDD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKCCAHELDD_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKCCAHELDD_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + DEKCCAHELDD_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKCCAHELDD_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKCCAHELDD_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEKCCAHELDD_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKCCAHELDD_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DEKCCAHELDD_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKCCAHELDD_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKCCAHELDD_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKCCAHELDD_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void BILCLGDPODA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKCCAHELDD_BILCLGDPODA_OFFSET))(this);
		}

	};
