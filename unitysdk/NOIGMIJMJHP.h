#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Spline { class NAPZoneMetaPlugin_SlideRopeCamera; }
namespace System { class Object; }
namespace System { class String; }

#define NOIGMIJMJHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7A4010)
#define NOIGMIJMJHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A3F90)
#define NOIGMIJMJHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A4020)
#define NOIGMIJMJHP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7A40E0)
#define NOIGMIJMJHP_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x172B1C80)
#define NOIGMIJMJHP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7A4070)
#define NOIGMIJMJHP_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x172B1B90)
#define NOIGMIJMJHP__CTOR_OFFSET UNITYSDK_OFFSET(0x7A3EA0)

inline static constexpr unsigned int NOIGMIJMJHP_TypeDefinitionIndex = 89717;

struct alignas(8) NOIGMIJMJHP
{
	::System::String* IKGGPCFAEND; // 0x10
	::System::Int32 JJLFGPLDNGC; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* DCJCHGOGLMF; // 0x20

	::System::Void _ctor(::MoleMole::Spline::NAPZoneMetaPlugin_SlideRopeCamera* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Spline::NAPZoneMetaPlugin_SlideRopeCamera*))((::PBYTE)hIl2Cpp + NOIGMIJMJHP__CTOR_OFFSET))(this, KHGFAKJKDGG);
	}

	/*
	::System::Boolean Equals(::NOIGMIJMJHP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NOIGMIJMJHP))((::PBYTE)hIl2Cpp + NOIGMIJMJHP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOIGMIJMJHP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIGMIJMJHP_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::NOIGMIJMJHP KILPCOMOCMD, ::NOIGMIJMJHP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::NOIGMIJMJHP, ::NOIGMIJMJHP))((::PBYTE)hIl2Cpp + NOIGMIJMJHP_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::NOIGMIJMJHP KILPCOMOCMD, ::NOIGMIJMJHP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::NOIGMIJMJHP, ::NOIGMIJMJHP))((::PBYTE)hIl2Cpp + NOIGMIJMJHP_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOIGMIJMJHP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIGMIJMJHP_HLPHPBAODIF_OFFSET))(this);
	}
};
