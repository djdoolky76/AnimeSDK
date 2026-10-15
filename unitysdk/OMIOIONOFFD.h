#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
class EFDPILJBFIH;
class KANKEPCJION;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define OMIOIONOFFD_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xBF26260)
#define OMIOIONOFFD_AGGMOBNDPDO_OFFSET UNITYSDK_OFFSET(0xBF26300)
#define OMIOIONOFFD_ALACHGEDEKF_OFFSET UNITYSDK_OFFSET(0xBF27090)
#define OMIOIONOFFD_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xBF260B0)
#define OMIOIONOFFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBF279A0)
#define OMIOIONOFFD_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xBF26480)
#define OMIOIONOFFD_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xBF26970)
#define OMIOIONOFFD_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xBF268D0)
#define OMIOIONOFFD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBF25DB0)
#define OMIOIONOFFD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBF25E30)
#define OMIOIONOFFD_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xBF26F40)
#define OMIOIONOFFD_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xBF26B30)
#define OMIOIONOFFD_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xBF26CC0)
#define OMIOIONOFFD_JEBNANBFCGI_OFFSET UNITYSDK_OFFSET(0xBF276B0)
#define OMIOIONOFFD_KKEHEPAOJHD_OFFSET UNITYSDK_OFFSET(0xBF275A0)
#define OMIOIONOFFD_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xBF26A90)
#define OMIOIONOFFD_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xBF26770)
#define OMIOIONOFFD_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xBF25ED0)
#define OMIOIONOFFD_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xBF277A0)
#define OMIOIONOFFD__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF25B30)

inline static constexpr unsigned int OMIOIONOFFD_TypeDefinitionIndex = 71887;

	class OMIOIONOFFD : public ::FMPCODLIOLG
	{
	public:
		::IGKFNIEJGLM PMECLILMEDH; // 0x60
		::EFDPILJBFIH* EHKGJMGCEOL; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::EFDPILJBFIH*>* IIJHLCMENFP; // 0x70
		::UnityEngine::Transform* FHDELHMLMFO; // 0x78
		::KANKEPCJION* HPADAGJIHAO; // 0x80
		::UnityEngine::Transform* EPBGHBLAOCO; // 0x88
		::UnityEngine::Transform* AIDIMEHEEMI; // 0x90
		::System::Boolean IDBHEIBEGBA; // 0x98
		::System::Boolean FHBNNGCEPFD; // 0x99
		::System::Byte _padding0[0x2];
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIOIONOFFD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIOIONOFFD__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OMIOIONOFFD_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIOIONOFFD_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMIOIONOFFD_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMIOIONOFFD_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + OMIOIONOFFD_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMIOIONOFFD_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMIOIONOFFD_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OMIOIONOFFD_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMIOIONOFFD_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMIOIONOFFD_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIOIONOFFD_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIOIONOFFD_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMIOIONOFFD_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void AGGMOBNDPDO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + OMIOIONOFFD_AGGMOBNDPDO_OFFSET))(this, a1, a2);
		}

		::System::Void ALACHGEDEKF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + OMIOIONOFFD_ALACHGEDEKF_OFFSET))(this, a1, a2);
		}

		::System::Void JEBNANBFCGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMIOIONOFFD_JEBNANBFCGI_OFFSET))(this, a1);
		}

		::System::Void KKEHEPAOJHD(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + OMIOIONOFFD_KKEHEPAOJHD_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIOIONOFFD_ODGLEFLLDPI_OFFSET))(this);
		}

	};
