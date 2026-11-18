#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class BMKDEBHINBP;
class EKPAPDKMNPB;
namespace System { class Object; }

#define OEEFFCPKNKP_BEDGKPELGOF_OFFSET UNITYSDK_OFFSET(0x8D15E0)
#define OEEFFCPKNKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8D1580)
#define OEEFFCPKNKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x8D1500)
#define OEEFFCPKNKP_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x8D17D0)
#define OEEFFCPKNKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8D1590)
#define OEEFFCPKNKP_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x8D1640)
#define OEEFFCPKNKP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8D1770)
#define OEEFFCPKNKP_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1DB909A0)
#define OEEFFCPKNKP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8D18F0)
#define OEEFFCPKNKP_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1DB908E0)
#define OEEFFCPKNKP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB90720)
#define OEEFFCPKNKP__CTOR_OFFSET UNITYSDK_OFFSET(0x8D14F0)

inline static constexpr unsigned int OEEFFCPKNKP_TypeDefinitionIndex = 93572;

struct alignas(8) OEEFFCPKNKP
{
	static ::OEEFFCPKNKP* StaticGet_FGBLILBNEHG()
	{
		return (::OEEFFCPKNKP*)Il2CppClass::FromTypeDefinitionIndex(OEEFFCPKNKP_TypeDefinitionIndex)->GetStaticField(0x52600);
	}
	::System::Int32 MAPBNGBHNMC; // 0x10
	::System::Byte _padding0[0x4];
	::BMKDEBHINBP* EJKFBAFDBFG; // 0x18

	::System::Void _ctor(::BMKDEBHINBP* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::BMKDEBHINBP*))((::PBYTE)hIl2Cpp + OEEFFCPKNKP__CTOR_OFFSET))(this, GBELIHABEDH);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEEFFCPKNKP__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::OEEFFCPKNKP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OEEFFCPKNKP))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_GETHASHCODE_OFFSET))(this);
	}

	::EKPAPDKMNPB* BEDGKPELGOF()
	{
		return ((::EKPAPDKMNPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_BEDGKPELGOF_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_HLJPINPGIJN_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::OEEFFCPKNKP KILPCOMOCMD, ::OEEFFCPKNKP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::OEEFFCPKNKP, ::OEEFFCPKNKP))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::OEEFFCPKNKP KILPCOMOCMD, ::OEEFFCPKNKP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::OEEFFCPKNKP, ::OEEFFCPKNKP))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEEFFCPKNKP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
