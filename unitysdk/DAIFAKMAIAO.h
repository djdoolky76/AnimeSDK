#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define DAIFAKMAIAO_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xDFC34A0)
#define DAIFAKMAIAO_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xDFC3450)
#define DAIFAKMAIAO_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC3740)
#define DAIFAKMAIAO_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xDFC34F0)
#define DAIFAKMAIAO_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xDFC35E0)
#define DAIFAKMAIAO_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xDFC3590)
#define DAIFAKMAIAO_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xDFC3680)
#define DAIFAKMAIAO_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xDFC36C0)
#define DAIFAKMAIAO_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xDFC3630)
#define DAIFAKMAIAO_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xDFC3540)
#define DAIFAKMAIAO_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xDFC3400)
#define DAIFAKMAIAO_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xDFC3700)

inline static constexpr unsigned int DAIFAKMAIAO_TypeDefinitionIndex = 71958;

	class DAIFAKMAIAO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_CTOR_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIFAKMAIAO_ODGLEFLLDPI_OFFSET))(this);
		}

	};
