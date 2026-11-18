#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class MPINFNMDEED;
namespace System { class String; }

#define GFFIKKPLIGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DD2E30)
#define GFFIKKPLIGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13DD2F40)
#define GFFIKKPLIGC_HBMLABHOHAG_OFFSET UNITYSDK_OFFSET(0x13DD3080)
#define GFFIKKPLIGC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x13DD3070)
#define GFFIKKPLIGC_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13DD31B0)
#define GFFIKKPLIGC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x13DD3100)
#define GFFIKKPLIGC_JIMEPABCHHA_OFFSET UNITYSDK_OFFSET(0x13DD3220)
#define GFFIKKPLIGC_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13DD3110)
#define GFFIKKPLIGC__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD2E20)

inline static constexpr unsigned int GFFIKKPLIGC_TypeDefinitionIndex = 58706;

class GFFIKKPLIGC : public ::System::Object
{
public:
	::System::String* DCJCHGOGLMF; // 0x10
	::MPINFNMDEED* OBMOFJLECMH; // 0x18
	::System::Boolean CHMMELBILPK; // 0x20
	::System::Byte _padding0[0x3];
	::System::Nullable_1<::System::Single> DPHLBIEHGEA; // 0x24

	::System::Void _ctor(::MPINFNMDEED* DJOIBDNKGII, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::MPINFNMDEED*, ::System::String*))((::PBYTE)hIl2Cpp + GFFIKKPLIGC__CTOR_OFFSET))(this, DJOIBDNKGII, MCOHLHMKLIP);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFFIKKPLIGC_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFIKKPLIGC_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFIKKPLIGC_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Int32 HBMLABHOHAG(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GFFIKKPLIGC_HBMLABHOHAG_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFFIKKPLIGC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean NOGJIJMACNO(::GFFIKKPLIGC* KILPCOMOCMD, ::GFFIKKPLIGC* BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::GFFIKKPLIGC*, ::GFFIKKPLIGC*))((::PBYTE)hIl2Cpp + GFFIKKPLIGC_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}

	::System::Boolean JIMEPABCHHA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFIKKPLIGC_JIMEPABCHHA_OFFSET))(this);
	}

	static ::System::Boolean INCFIJKMIGG(::GFFIKKPLIGC* KILPCOMOCMD, ::GFFIKKPLIGC* BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::GFFIKKPLIGC*, ::GFFIKKPLIGC*))((::PBYTE)hIl2Cpp + GFFIKKPLIGC_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
};
