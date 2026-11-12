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

#define BHFAHPEJDHF_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xBB2DB40)
#define BHFAHPEJDHF_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xBB2DAC0)
#define BHFAHPEJDHF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB2DFF0)
#define BHFAHPEJDHF_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xBB2DBB0)
#define BHFAHPEJDHF_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xBB2DDC0)
#define BHFAHPEJDHF_DEFELLEJNAD_OFFSET UNITYSDK_OFFSET(0xBB2DC90)
#define BHFAHPEJDHF_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xBB2DD60)
#define BHFAHPEJDHF_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xBB2DEB0)
#define BHFAHPEJDHF_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xBB2DF20)
#define BHFAHPEJDHF_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xBB2DE50)
#define BHFAHPEJDHF_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xBB2DC20)
#define BHFAHPEJDHF_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xBB2D930)
#define BHFAHPEJDHF_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xBB2D870)
#define BHFAHPEJDHF_PPBJHBHMFLN_OFFSET UNITYSDK_OFFSET(0xBB2DF90)
#define BHFAHPEJDHF__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB2D750)
#define BHFAHPEJDHF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBB2D820)

inline static constexpr unsigned int BHFAHPEJDHF_TypeDefinitionIndex = 73998;

	class BHFAHPEJDHF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* BFOLCJLBECL; // 0x60
		::KANKEPCJION* HPADAGJIHAO; // 0x68
		::IGKFNIEJGLM PMECLILMEDH; // 0x70
		::UnityEngine::Animator* APPGGMLEPLN; // 0x78
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BHFAHPEJDHF__ONINITPARAMS_OFFSET))(this, a1);
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
