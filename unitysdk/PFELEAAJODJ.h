#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GKNJNGAHDDM;
class IGIEKBDFBMN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define PFELEAAJODJ_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xC2044D0)
#define PFELEAAJODJ_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC204460)
#define PFELEAAJODJ_BNJOEDFPCBA_OFFSET UNITYSDK_OFFSET(0xC2042A0)
#define PFELEAAJODJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC204940)
#define PFELEAAJODJ_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xC204540)
#define PFELEAAJODJ_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xC2046A0)
#define PFELEAAJODJ_DEFELLEJNAD_OFFSET UNITYSDK_OFFSET(0xC204170)
#define PFELEAAJODJ_DEHCEICJJAL_OFFSET UNITYSDK_OFFSET(0xC203EE0)
#define PFELEAAJODJ_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xC204640)
#define PFELEAAJODJ_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC203E90)
#define PFELEAAJODJ_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC2048D0)
#define PFELEAAJODJ_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xC204830)
#define PFELEAAJODJ_FAJNLALGAAL_OFFSET UNITYSDK_OFFSET(0xC2040F0)
#define PFELEAAJODJ_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xC204880)
#define PFELEAAJODJ_GOGLBPMFFOF_OFFSET UNITYSDK_OFFSET(0xC2041D0)
#define PFELEAAJODJ_HLDCECGEJOK_OFFSET UNITYSDK_OFFSET(0xC204070)
#define PFELEAAJODJ_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xC2047A0)
#define PFELEAAJODJ_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xC2045A0)
#define PFELEAAJODJ_NIGNPBBCOCI_OFFSET UNITYSDK_OFFSET(0xC203F60)
#define PFELEAAJODJ_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xC204390)
#define PFELEAAJODJ_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xC204340)
#define PFELEAAJODJ_PHGCJGAPNJD_OFFSET UNITYSDK_OFFSET(0xC203FC0)
#define PFELEAAJODJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xC203DC0)

inline static constexpr unsigned int PFELEAAJODJ_TypeDefinitionIndex = 71994;

	class PFELEAAJODJ : public ::FMPCODLIOLG
	{
	public:
		::IGKFNIEJGLM PMECLILMEDH; // 0x60
		::UnityEngine::Animation* KPPAKKEFFHF; // 0x68
		::IGIEKBDFBMN* CKLOKAHPOJA; // 0x70
		::GKNJNGAHDDM* NLICJFFLGIG; // 0x78
		::System::Boolean FMNEEONAMNO; // 0x80
		::System::Boolean EINNACFPAEN; // 0x81
		// static const ::System::String* FHDKPLKOEAD; // 0x0
		// static const ::System::String* BIAMKKCKMLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEAAJODJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEAAJODJ__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PFELEAAJODJ_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void DEHCEICJJAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_DEHCEICJJAL_OFFSET))(this, a1);
		}

		::System::Void NIGNPBBCOCI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PFELEAAJODJ_NIGNPBBCOCI_OFFSET))(this, a1);
		}

		::System::Void PHGCJGAPNJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_PHGCJGAPNJD_OFFSET))(this, a1);
		}

		::System::Boolean FAJNLALGAAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEAAJODJ_FAJNLALGAAL_OFFSET))(this);
		}

		::System::Void DEFELLEJNAD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_DEFELLEJNAD_OFFSET))(this, a1);
		}

		::System::Void GOGLBPMFFOF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFELEAAJODJ_GOGLBPMFFOF_OFFSET))(this, a1);
		}

		::System::Void BNJOEDFPCBA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFELEAAJODJ_BNJOEDFPCBA_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEAAJODJ_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + PFELEAAJODJ_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PFELEAAJODJ_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PFELEAAJODJ_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEAAJODJ_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEAAJODJ_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEAAJODJ_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void HLDCECGEJOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFELEAAJODJ_HLDCECGEJOK_OFFSET))(this, a1);
		}

	};
