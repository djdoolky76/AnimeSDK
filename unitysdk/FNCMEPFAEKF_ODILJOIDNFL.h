#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNCMEPFAEKF_PDJMONFMBBI.h"
#include "unitysdk/Foundation/Geometry/EllipseArc2D.h"
#include "unitysdk/Foundation/Geometry/Segment2D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNCMEPFAEKF_ODILJOIDNFL_KNEGMMFNKML.h"
#include "unitysdk/Foundation/Geometry/Ellipse2D.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }

#define FNCMEPFAEKF_ODILJOIDNFL_ABAHLHOEDLA_OFFSET UNITYSDK_OFFSET(0x165BEEC0)
#define FNCMEPFAEKF_ODILJOIDNFL_EINPHFKBHBL_1_OFFSET UNITYSDK_OFFSET(0x165BEAE0)
#define FNCMEPFAEKF_ODILJOIDNFL_EINPHFKBHBL_2_OFFSET UNITYSDK_OFFSET(0x165C0180)
#define FNCMEPFAEKF_ODILJOIDNFL_EINPHFKBHBL_3_OFFSET UNITYSDK_OFFSET(0x165C0460)
#define FNCMEPFAEKF_ODILJOIDNFL_EINPHFKBHBL_OFFSET UNITYSDK_OFFSET(0x165BE890)
#define FNCMEPFAEKF_ODILJOIDNFL_IHOHALHHAED_OFFSET UNITYSDK_OFFSET(0x787120)
#define FNCMEPFAEKF_ODILJOIDNFL_KCNKOLHIHJA_OFFSET UNITYSDK_OFFSET(0x165BEBE0)
#define FNCMEPFAEKF_ODILJOIDNFL_KCPNEFHFJGL_OFFSET UNITYSDK_OFFSET(0x165BD380)
#define FNCMEPFAEKF_ODILJOIDNFL_KFLNKCJFBIK_OFFSET UNITYSDK_OFFSET(0x787020)
#define FNCMEPFAEKF_ODILJOIDNFL_LFKMDDKDGCD_OFFSET UNITYSDK_OFFSET(0x7871A0)
#define FNCMEPFAEKF_ODILJOIDNFL_NDBOMEHDEPC_OFFSET UNITYSDK_OFFSET(0x165BC1E0)
#define FNCMEPFAEKF_ODILJOIDNFL_OFBIMFHNGDB_1_OFFSET UNITYSDK_OFFSET(0x165BB720)
#define FNCMEPFAEKF_ODILJOIDNFL_OFBIMFHNGDB_OFFSET UNITYSDK_OFFSET(0x165BB7D0)
#define FNCMEPFAEKF_ODILJOIDNFL_PEDPLGHGEPN_1_OFFSET UNITYSDK_OFFSET(0x165BC460)
#define FNCMEPFAEKF_ODILJOIDNFL_PEDPLGHGEPN_2_OFFSET UNITYSDK_OFFSET(0x7870F0)
#define FNCMEPFAEKF_ODILJOIDNFL_PEDPLGHGEPN_OFFSET UNITYSDK_OFFSET(0x165BAC20)
#define FNCMEPFAEKF_ODILJOIDNFL_PLOMAIPHFEN_1_OFFSET UNITYSDK_OFFSET(0x165BEF90)
#define FNCMEPFAEKF_ODILJOIDNFL_PLOMAIPHFEN_2_OFFSET UNITYSDK_OFFSET(0x787220)
#define FNCMEPFAEKF_ODILJOIDNFL_PLOMAIPHFEN_OFFSET UNITYSDK_OFFSET(0x165BB890)
#define FNCMEPFAEKF_ODILJOIDNFL_PNCHDKJPBJG_OFFSET UNITYSDK_OFFSET(0x165BB570)
#define FNCMEPFAEKF_ODILJOIDNFL__CCTOR_OFFSET UNITYSDK_OFFSET(0x165BABF0)

inline static constexpr unsigned int FNCMEPFAEKF_ODILJOIDNFL_TypeDefinitionIndex = 50721;

struct alignas(4) FNCMEPFAEKF_ODILJOIDNFL
{
	static ::FNCMEPFAEKF_ODILJOIDNFL* StaticGet_FGBLILBNEHG()
	{
		return (::FNCMEPFAEKF_ODILJOIDNFL*)Il2CppClass::FromTypeDefinitionIndex(FNCMEPFAEKF_ODILJOIDNFL_TypeDefinitionIndex)->GetStaticField(0x112D0);
	}
	::FNCMEPFAEKF_PDJMONFMBBI FNLGDLHAEGD; // 0x10
	::Foundation::Geometry::Segment2D EHADNDKGOAM; // 0x14
	::System::Byte _padding0[0x4];
	::Foundation::Geometry::EllipseArc2D PEFGJKHCIHD; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL__CCTOR_OFFSET))();
	}

	static ::System::Int32 PEDPLGHGEPN(::Foundation::Geometry::Segment2D KADDPFPFMKL, ::System::Single HAAEBCOBKFF, ::System::Span_1_9011FAD97750D224<::System::Object*> IGAAKDOIPNN, ::System::Boolean KILPCOMOCMD)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::Segment2D, ::System::Single, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_PEDPLGHGEPN_OFFSET))(KADDPFPFMKL, HAAEBCOBKFF, IGAAKDOIPNN, KILPCOMOCMD);
	}

	/*
	static ::FNCMEPFAEKF_ODILJOIDNFL OFBIMFHNGDB(::Foundation::Geometry::Segment2D KADDPFPFMKL)
	{
		return ((::FNCMEPFAEKF_ODILJOIDNFL(*)(::Foundation::Geometry::Segment2D))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_OFBIMFHNGDB_OFFSET))(KADDPFPFMKL);
	}
	*/

	static ::System::Int32 PLOMAIPHFEN(::Foundation::Geometry::Segment2D KADDPFPFMKL, ::System::Single BFMMEICFNCD, ::System::Span_1_9011FAD97750D224<::System::Object*> IGAAKDOIPNN, ::System::Boolean NIBJPEPGJCH)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::Segment2D, ::System::Single, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_PLOMAIPHFEN_OFFSET))(KADDPFPFMKL, BFMMEICFNCD, IGAAKDOIPNN, NIBJPEPGJCH);
	}

	::System::Single KFLNKCJFBIK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_KFLNKCJFBIK_OFFSET))(this);
	}

	static ::System::Int32 PEDPLGHGEPN_1(::Foundation::Geometry::EllipseArc2D IAEHACABLCP, ::System::Single HAAEBCOBKFF, ::System::Span_1_9011FAD97750D224<::System::Object*> IGAAKDOIPNN, ::System::Boolean KILPCOMOCMD)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::EllipseArc2D, ::System::Single, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_PEDPLGHGEPN_1_OFFSET))(IAEHACABLCP, HAAEBCOBKFF, IGAAKDOIPNN, KILPCOMOCMD);
	}

	static ::System::Int32 KCNKOLHIHJA(::System::Span_1_9011FAD97750D224<::System::Single> IGAAKDOIPNN, ::System::Single HBKDEOFOAPB, ::System::Single NMEEEHMFGOH, ::FNCMEPFAEKF_ODILJOIDNFL_KNEGMMFNKML& param_3)
	{
		return ((::System::Int32(*)(::System::Span_1_9011FAD97750D224<::System::Single>, ::System::Single, ::System::Single, ::FNCMEPFAEKF_ODILJOIDNFL_KNEGMMFNKML&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_KCNKOLHIHJA_OFFSET))(IGAAKDOIPNN, HBKDEOFOAPB, NMEEEHMFGOH, param_3);
	}

	/*
	static ::FNCMEPFAEKF_ODILJOIDNFL EINPHFKBHBL(::Foundation::Geometry::Ellipse2D KHABCOKNEDJ, ::System::Single KKKOLICDDAB, ::System::Single HFMDMDBFOLF)
	{
		return ((::FNCMEPFAEKF_ODILJOIDNFL(*)(::Foundation::Geometry::Ellipse2D, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_EINPHFKBHBL_OFFSET))(KHABCOKNEDJ, KKKOLICDDAB, HFMDMDBFOLF);
	}
	*/

	static ::System::Int32 PNCHDKJPBJG(::Foundation::Geometry::Segment2D KADDPFPFMKL, ::System::Single HAAEBCOBKFF, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> CELGKCKLPJC)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::Segment2D, ::System::Single, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_PNCHDKJPBJG_OFFSET))(KADDPFPFMKL, HAAEBCOBKFF, CELGKCKLPJC);
	}

	/*
	static ::FNCMEPFAEKF_ODILJOIDNFL OFBIMFHNGDB_1(::UnityEngine::Vector2 GIAEPMKCBIB, ::UnityEngine::Vector2 DOBFFIICAII)
	{
		return ((::FNCMEPFAEKF_ODILJOIDNFL(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_OFBIMFHNGDB_1_OFFSET))(GIAEPMKCBIB, DOBFFIICAII);
	}
	*/

	::System::Int32 PEDPLGHGEPN_2(::System::Single HAAEBCOBKFF, ::System::Span_1_9011FAD97750D224<::System::Object*> IGAAKDOIPNN, ::System::Boolean KILPCOMOCMD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_PEDPLGHGEPN_2_OFFSET))(this, HAAEBCOBKFF, IGAAKDOIPNN, KILPCOMOCMD);
	}

	/*
	static ::FNCMEPFAEKF_ODILJOIDNFL EINPHFKBHBL_1(::Foundation::Geometry::EllipseArc2D IAEHACABLCP)
	{
		return ((::FNCMEPFAEKF_ODILJOIDNFL(*)(::Foundation::Geometry::EllipseArc2D))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_EINPHFKBHBL_1_OFFSET))(IAEHACABLCP);
	}
	*/

	static ::System::Int32 KCPNEFHFJGL(::Foundation::Geometry::Ellipse2D KHABCOKNEDJ, ::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC, ::System::Single CBLGCIFLMKL, ::System::Single KKKOLICDDAB, ::System::Single HFMDMDBFOLF, ::System::Span_1_9011FAD97750D224<::System::Single> IOMABOCJNHI)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::Ellipse2D, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Span_1_9011FAD97750D224<::System::Single>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_KCPNEFHFJGL_OFFSET))(KHABCOKNEDJ, EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, KKKOLICDDAB, HFMDMDBFOLF, IOMABOCJNHI);
	}

	::UnityEngine::Vector2 IHOHALHHAED()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_IHOHALHHAED_OFFSET))(this);
	}

	static ::System::Int32 NDBOMEHDEPC(::Foundation::Geometry::Segment2D KADDPFPFMKL, ::System::Single BFMMEICFNCD, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> CELGKCKLPJC)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::Segment2D, ::System::Single, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_NDBOMEHDEPC_OFFSET))(KADDPFPFMKL, BFMMEICFNCD, CELGKCKLPJC);
	}

	static ::System::Int32 PLOMAIPHFEN_1(::Foundation::Geometry::EllipseArc2D IAEHACABLCP, ::System::Single BFMMEICFNCD, ::System::Span_1_9011FAD97750D224<::System::Object*> IGAAKDOIPNN, ::System::Boolean NIBJPEPGJCH)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::EllipseArc2D, ::System::Single, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_PLOMAIPHFEN_1_OFFSET))(IAEHACABLCP, BFMMEICFNCD, IGAAKDOIPNN, NIBJPEPGJCH);
	}

	::UnityEngine::Vector2 LFKMDDKDGCD()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_LFKMDDKDGCD_OFFSET))(this);
	}

	static ::System::Int32 ABAHLHOEDLA(::System::Span_1_9011FAD97750D224<::System::Single> IGAAKDOIPNN, ::System::Single DLJPLHKELCO, ::FNCMEPFAEKF_ODILJOIDNFL_KNEGMMFNKML& param_2)
	{
		return ((::System::Int32(*)(::System::Span_1_9011FAD97750D224<::System::Single>, ::System::Single, ::FNCMEPFAEKF_ODILJOIDNFL_KNEGMMFNKML&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_ABAHLHOEDLA_OFFSET))(IGAAKDOIPNN, DLJPLHKELCO, param_2);
	}

	::System::Int32 PLOMAIPHFEN_2(::System::Single BFMMEICFNCD, ::System::Span_1_9011FAD97750D224<::System::Object*> IGAAKDOIPNN, ::System::Boolean NIBJPEPGJCH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_PLOMAIPHFEN_2_OFFSET))(this, BFMMEICFNCD, IGAAKDOIPNN, NIBJPEPGJCH);
	}

	/*
	static ::FNCMEPFAEKF_ODILJOIDNFL EINPHFKBHBL_2(::Foundation::Geometry::Ellipse2D KHABCOKNEDJ, ::UnityEngine::Vector2 GIAEPMKCBIB, ::UnityEngine::Vector2 DOBFFIICAII)
	{
		return ((::FNCMEPFAEKF_ODILJOIDNFL(*)(::Foundation::Geometry::Ellipse2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_EINPHFKBHBL_2_OFFSET))(KHABCOKNEDJ, GIAEPMKCBIB, DOBFFIICAII);
	}
	*/

	/*
	static ::FNCMEPFAEKF_ODILJOIDNFL EINPHFKBHBL_3(::Foundation::Geometry::Ellipse2D KHABCOKNEDJ)
	{
		return ((::FNCMEPFAEKF_ODILJOIDNFL(*)(::Foundation::Geometry::Ellipse2D))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ODILJOIDNFL_EINPHFKBHBL_3_OFFSET))(KHABCOKNEDJ);
	}
	*/
};
