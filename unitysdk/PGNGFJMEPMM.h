#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DJMGAAHIMOJ;
class HDPEJIGDNJB;
class KANKEPCJION;
class KANKEPCJION_JNLBIIDFHMK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define PGNGFJMEPMM_AFEGBCIKDOP_OFFSET UNITYSDK_OFFSET(0xC223210)
#define PGNGFJMEPMM_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xC223660)
#define PGNGFJMEPMM_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC2235E0)
#define PGNGFJMEPMM_CTOR_OFFSET UNITYSDK_OFFSET(0xC223C50)
#define PGNGFJMEPMM_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xC223970)
#define PGNGFJMEPMM_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xC223A90)
#define PGNGFJMEPMM_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xC223A40)
#define PGNGFJMEPMM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC2230E0)
#define PGNGFJMEPMM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC223180)
#define PGNGFJMEPMM_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xC223570)
#define PGNGFJMEPMM_FJECPPOEOKN_OFFSET UNITYSDK_OFFSET(0xC2237D0)
#define PGNGFJMEPMM_GCNPCJDEPLM_OFFSET UNITYSDK_OFFSET(0xC223BA0)
#define PGNGFJMEPMM_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xC223B30)
#define PGNGFJMEPMM_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xC223AE0)
#define PGNGFJMEPMM_LGLEJDOALHN_OFFSET UNITYSDK_OFFSET(0xC223BF0)
#define PGNGFJMEPMM_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xC2239E0)
#define PGNGFJMEPMM_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xC223400)
#define PGNGFJMEPMM_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xC223340)
#define PGNGFJMEPMM__ONBIND_OFFSET UNITYSDK_OFFSET(0xC222F40)
#define PGNGFJMEPMM__ONTICK_OFFSET UNITYSDK_OFFSET(0xC223280)

inline static constexpr unsigned int PGNGFJMEPMM_TypeDefinitionIndex = 71979;

	class PGNGFJMEPMM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* AIOHOMBNLLE; // 0x60
		::System::Action_1<::System::Boolean>* KJPAPFJKEFK; // 0x68
		::System::String* COHDKGNDEGD; // 0x70
		::KANKEPCJION* HPADAGJIHAO; // 0x78
		::KANKEPCJION_JNLBIIDFHMK* PMECLILMEDH; // 0x80
		::UnityEngine::Transform* OMOFMPJILOC; // 0x88
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0x90
		::HDPEJIGDNJB* PNPNGCLCCNP; // 0x98
		::System::Boolean NEHNFKDCHLE; // 0xA0
		::System::Boolean NMHBPOIKIEN; // 0xA1
		// static const ::System::String* BNILBNMAPKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGNGFJMEPMM__ONTICK_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void GCNPCJDEPLM(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_GCNPCJDEPLM_OFFSET))(this, a1);
		}

		::System::Void FJECPPOEOKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_FJECPPOEOKN_OFFSET))(this);
		}

		::System::Void AFEGBCIKDOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_AFEGBCIKDOP_OFFSET))(this);
		}

		::DJMGAAHIMOJ* LGLEJDOALHN()
		{
			return ((::DJMGAAHIMOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNGFJMEPMM_LGLEJDOALHN_OFFSET))(this);
		}

	};
