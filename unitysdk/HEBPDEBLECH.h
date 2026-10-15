#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KANKEPCJION;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HEBPDEBLECH_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x15C36EF0)
#define HEBPDEBLECH_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15C36E70)
#define HEBPDEBLECH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C37220)
#define HEBPDEBLECH_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x15C36F80)
#define HEBPDEBLECH_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x15C37180)
#define HEBPDEBLECH_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x15C37130)
#define HEBPDEBLECH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15C36B60)
#define HEBPDEBLECH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15C36BB0)
#define HEBPDEBLECH_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x15C36C50)
#define HEBPDEBLECH_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x15C37050)
#define HEBPDEBLECH_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x15C370C0)
#define HEBPDEBLECH_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x15C371D0)
#define HEBPDEBLECH_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x15C36FF0)
#define HEBPDEBLECH_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x15C36D60)
#define HEBPDEBLECH_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x15C36CB0)
#define HEBPDEBLECH__ONBIND_OFFSET UNITYSDK_OFFSET(0x15C369C0)

inline static constexpr unsigned int HEBPDEBLECH_TypeDefinitionIndex = 71909;

	class HEBPDEBLECH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* EPBGHBLAOCO; // 0x60
		::UnityEngine::Transform* AIDIMEHEEMI; // 0x68
		::KANKEPCJION* HPADAGJIHAO; // 0x70
		::IGKFNIEJGLM PMECLILMEDH; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HEBPDEBLECH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEBPDEBLECH_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + HEBPDEBLECH_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEBPDEBLECH_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HEBPDEBLECH_KKHOMFOPFJA_OFFSET))(this, a1);
		}

	};
