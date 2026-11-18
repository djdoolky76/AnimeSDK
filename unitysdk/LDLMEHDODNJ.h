#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFLJOMGPODL.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class GLFBAHGPEFO;
namespace UnityEngine { class Transform; }

#define LDLMEHDODNJ_AKAKFLDAIIP_OFFSET UNITYSDK_OFFSET(0x19984D00)
#define LDLMEHDODNJ_CBIIAFHMHFF_OFFSET UNITYSDK_OFFSET(0x199849E0)
#define LDLMEHDODNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19983560)
#define LDLMEHDODNJ_EHDIAOKDDML_OFFSET UNITYSDK_OFFSET(0x19984DC0)
#define LDLMEHDODNJ_HBLEBCNPABB_OFFSET UNITYSDK_OFFSET(0x199835E0)
#define LDLMEHDODNJ_HEMHNOHFOLB_OFFSET UNITYSDK_OFFSET(0x19983610)
#define LDLMEHDODNJ_IMKEMPBBDJB_OFFSET UNITYSDK_OFFSET(0x19984C70)
#define LDLMEHDODNJ_MGBNHNBAAOJ_OFFSET UNITYSDK_OFFSET(0x19985510)
#define LDLMEHDODNJ_NEBDHGBBGFG_OFFSET UNITYSDK_OFFSET(0x19985780)
#define LDLMEHDODNJ_ONCREATE_OFFSET UNITYSDK_OFFSET(0x199834E0)
#define LDLMEHDODNJ_ONGFIMHLBJF_OFFSET UNITYSDK_OFFSET(0x19985450)
#define LDLMEHDODNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x199835C0)

inline static constexpr unsigned int LDLMEHDODNJ_TypeDefinitionIndex = 57635;

class LDLMEHDODNJ
{
public:
	::GLFBAHGPEFO* LBBMPIIHJJI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLMEHDODNJ__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_DISPOSE_OFFSET))(this);
	}

	::Unity::Jobs::JobHandle HBLEBCNPABB()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_HBLEBCNPABB_OFFSET))(this);
	}

	::System::Void HEMHNOHFOLB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_HEMHNOHFOLB_OFFSET))(this, PMNLNNGEIFM);
	}

	::CFLJOMGPODL IMKEMPBBDJB(::System::Int32 KKIIJGFNHOD)
	{
		return ((::CFLJOMGPODL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_IMKEMPBBDJB_OFFSET))(this, KKIIJGFNHOD);
	}

	::System::Void CBIIAFHMHFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_CBIIAFHMHFF_OFFSET))(this);
	}

	::System::Void AKAKFLDAIIP(::System::Int32 KKIIJGFNHOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_AKAKFLDAIIP_OFFSET))(this, KKIIJGFNHOD);
	}

	::System::Void EHDIAOKDDML(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_EHDIAOKDDML_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void ONGFIMHLBJF(::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_ONGFIMHLBJF_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void MGBNHNBAAOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_MGBNHNBAAOJ_OFFSET))(this);
	}

	::System::Void NEBDHGBBGFG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDLMEHDODNJ_NEBDHGBBGFG_OFFSET))(this, PMNLNNGEIFM);
	}
};
