#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class Object; }
namespace System { class String; }

#define LJJGNCGBFNE_CHHDCNHHCLL_OFFSET UNITYSDK_OFFSET(0x6C9100)
#define LJJGNCGBFNE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6C9150)
#define LJJGNCGBFNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6C8EB0)
#define LJJGNCGBFNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6C8E60)
#define LJJGNCGBFNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6C8FC0)
#define LJJGNCGBFNE_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6C8FF0)
#define LJJGNCGBFNE_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x11F1D5C0)
#define LJJGNCGBFNE_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6C9070)
#define LJJGNCGBFNE_KPLJIMAIKBE_OFFSET UNITYSDK_OFFSET(0x6C8FE0)
#define LJJGNCGBFNE_MJIMNNFEKNB_OFFSET UNITYSDK_OFFSET(0x6C8FD0)
#define LJJGNCGBFNE_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x11F1D350)
#define LJJGNCGBFNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6C8E50)

inline static constexpr unsigned int LJJGNCGBFNE_TypeDefinitionIndex = 61841;

struct alignas(8) LJJGNCGBFNE
{
	::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC; // 0x10
	::UnityEngine::Vector3 OPMPKFEHOBM; // 0x18
	::UnityEngine::Vector2 FAELKNHJFON; // 0x24
	::System::Single GKFKBLIIKCE; // 0x2C
	::System::Single JEICDLOALMC; // 0x30
	::System::Single KDKFJJPAJAE; // 0x34
	::System::Single OIFHBKFIJGL; // 0x38
	::System::Single GLEEJIJBIEK; // 0x3C
	::System::Single DNDPAEALDFH; // 0x40
	::System::Single CKELOFDFEEM; // 0x44
	::System::Single HBLDJKPIEID; // 0x48
	::System::Single MHFKCPCEAJD; // 0x4C
	::System::Single PMGFIHJAJHL; // 0x50

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_TOSTRING_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::LJJGNCGBFNE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LJJGNCGBFNE))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean MJIMNNFEKNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_MJIMNNFEKNB_OFFSET))(this);
	}

	::System::Single KPLJIMAIKBE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_KPLJIMAIKBE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::LJJGNCGBFNE KILPCOMOCMD, ::LJJGNCGBFNE BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::LJJGNCGBFNE, ::LJJGNCGBFNE))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean CHHDCNHHCLL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_CHHDCNHHCLL_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::LJJGNCGBFNE KILPCOMOCMD, ::LJJGNCGBFNE BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::LJJGNCGBFNE, ::LJJGNCGBFNE))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJGNCGBFNE_DPIHOJBBGLA_OFFSET))(this);
	}
};
