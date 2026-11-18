#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKADNKKFCOK.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define EKLMJGLFFED_AELNEJOPGFB_OFFSET UNITYSDK_OFFSET(0x602750)
#define EKLMJGLFFED_BJBICLDHMOB_OFFSET UNITYSDK_OFFSET(0x602700)
#define EKLMJGLFFED_CIBONHMNLEN_OFFSET UNITYSDK_OFFSET(0xFE1D7E0)
#define EKLMJGLFFED_CJKKMPEGIJN_OFFSET UNITYSDK_OFFSET(0x36BEF0)
#define EKLMJGLFFED_CLLHFAPFAGM_OFFSET UNITYSDK_OFFSET(0x602710)
#define EKLMJGLFFED_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x602660)
#define EKLMJGLFFED_EMDGIBMPFEJ_OFFSET UNITYSDK_OFFSET(0x36C210)
#define EKLMJGLFFED_FPIFKGGDGEE_OFFSET UNITYSDK_OFFSET(0xFE1DB90)
#define EKLMJGLFFED_JLFALOGDFJH_OFFSET UNITYSDK_OFFSET(0x602730)
#define EKLMJGLFFED_KDKFFFHGECL_OFFSET UNITYSDK_OFFSET(0xFE1D720)
#define EKLMJGLFFED_KIDMMNGNMPG_OFFSET UNITYSDK_OFFSET(0xFE1DDC0)
#define EKLMJGLFFED_LOGMNFFOOCB_OFFSET UNITYSDK_OFFSET(0xFE1DA00)
#define EKLMJGLFFED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x602650)
#define EKLMJGLFFED__CTOR_OFFSET UNITYSDK_OFFSET(0x6025F0)

inline static constexpr unsigned int EKLMJGLFFED_TypeDefinitionIndex = 74758;

struct alignas(4) EKLMJGLFFED
{
	static ::CKADNKKFCOK* StaticGet__IPMIBJIOIIF_k__BackingField()
	{
		return (::CKADNKKFCOK*)Il2CppClass::FromTypeDefinitionIndex(EKLMJGLFFED_TypeDefinitionIndex)->GetStaticField(0x10190);
	}
	::UnityEngine::Vector3 _DPPCCBEAIHL_k__BackingField; // 0x10
	::MoleMole::UICameraAtom _GEEHOCIEPDD_k__BackingField; // 0x1C
	::UnityEngine::Vector3 _ICCJHGIDNJJ_k__BackingField; // 0x3C

	/*
	::System::Void _ctor(::EKLMJGLFFED LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::EKLMJGLFFED))((::PBYTE)hIl2Cpp + EKLMJGLFFED__CTOR_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMJGLFFED_TOSTRING_OFFSET))(this);
	}

	static ::System::Void KDKFFFHGECL(::CKADNKKFCOK EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::CKADNKKFCOK))((::PBYTE)hIl2Cpp + EKLMJGLFFED_KDKFFFHGECL_OFFSET))(EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMJGLFFED_DPIHOJBBGLA_OFFSET))(this);
	}

	::UnityEngine::Vector3 EMDGIBMPFEJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMJGLFFED_EMDGIBMPFEJ_OFFSET))(this);
	}

	::System::Void BJBICLDHMOB(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EKLMJGLFFED_BJBICLDHMOB_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::EKLMJGLFFED CIBONHMNLEN(::EKLMJGLFFED EJCBEJMGFAJ, ::EKLMJGLFFED EBFCACIEKBC)
	{
		return ((::EKLMJGLFFED(*)(::EKLMJGLFFED, ::EKLMJGLFFED))((::PBYTE)hIl2Cpp + EKLMJGLFFED_CIBONHMNLEN_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::MoleMole::UICameraAtom CLLHFAPFAGM()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMJGLFFED_CLLHFAPFAGM_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLFALOGDFJH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMJGLFFED_JLFALOGDFJH_OFFSET))(this);
	}

	::System::Void CJKKMPEGIJN(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EKLMJGLFFED_CJKKMPEGIJN_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::EKLMJGLFFED LOGMNFFOOCB()
	{
		return ((::EKLMJGLFFED(*)())((::PBYTE)hIl2Cpp + EKLMJGLFFED_LOGMNFFOOCB_OFFSET))();
	}
	*/

	/*
	static ::EKLMJGLFFED FPIFKGGDGEE(::EKLMJGLFFED EJCBEJMGFAJ, ::EKLMJGLFFED EBFCACIEKBC)
	{
		return ((::EKLMJGLFFED(*)(::EKLMJGLFFED, ::EKLMJGLFFED))((::PBYTE)hIl2Cpp + EKLMJGLFFED_FPIFKGGDGEE_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Void AELNEJOPGFB(::MoleMole::UICameraAtom EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + EKLMJGLFFED_AELNEJOPGFB_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::CKADNKKFCOK KIDMMNGNMPG()
	{
		return ((::CKADNKKFCOK(*)())((::PBYTE)hIl2Cpp + EKLMJGLFFED_KIDMMNGNMPG_OFFSET))();
	}
};
