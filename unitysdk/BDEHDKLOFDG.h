#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEGAIBENLJF.h"
#include "unitysdk/MFAACKDKFHD.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class Object; }

#define BDEHDKLOFDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7287E0)
#define BDEHDKLOFDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x728730)
#define BDEHDKLOFDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7287F0)
#define BDEHDKLOFDG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7288D0)
#define BDEHDKLOFDG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x143CE0D0)
#define BDEHDKLOFDG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x728810)
#define BDEHDKLOFDG_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x728800)
#define BDEHDKLOFDG_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x143CE000)
#define BDEHDKLOFDG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x143CDC80)
#define BDEHDKLOFDG_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x728880)
#define BDEHDKLOFDG__CCTOR_OFFSET UNITYSDK_OFFSET(0x143CDC50)
#define BDEHDKLOFDG__CTOR_OFFSET UNITYSDK_OFFSET(0x728710)

inline static constexpr unsigned int BDEHDKLOFDG_TypeDefinitionIndex = 86099;

struct alignas(8) BDEHDKLOFDG
{
	static ::BDEHDKLOFDG* StaticGet_FDJHEBHLJLD()
	{
		return (::BDEHDKLOFDG*)Il2CppClass::FromTypeDefinitionIndex(BDEHDKLOFDG_TypeDefinitionIndex)->GetStaticField(0x32B40);
	}
	::HEGAIBENLJF CHOGPGJJBEH; // 0x10
	::FluffyUnderware::Curvy::CurvySpline* GDPECGBCBDP; // 0x20
	::System::Boolean NCLIOIJBPDF; // 0x28

	::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::MFAACKDKFHD IENKBIFKKJB)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::MFAACKDKFHD))((::PBYTE)hIl2Cpp + BDEHDKLOFDG__CTOR_OFFSET))(this, PJLEHOLOIGI, IENKBIFKKJB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDEHDKLOFDG__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::BDEHDKLOFDG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BDEHDKLOFDG))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::BDEHDKLOFDG KILPCOMOCMD, ::BDEHDKLOFDG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::BDEHDKLOFDG, ::BDEHDKLOFDG))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::FluffyUnderware::Curvy::CurvySpline* JPPEEOLOGGP(::BDEHDKLOFDG PHHDHIBOCKA)
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::BDEHDKLOFDG))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_JPPEEOLOGGP_OFFSET))(PHHDHIBOCKA);
	}
	*/

	::FluffyUnderware::Curvy::CurvySpline* OMPFLKCBFHF()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_OMPFLKCBFHF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::BDEHDKLOFDG KILPCOMOCMD, ::BDEHDKLOFDG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::BDEHDKLOFDG, ::BDEHDKLOFDG))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHDKLOFDG_HLPHPBAODIF_OFFSET))(this);
	}
};
