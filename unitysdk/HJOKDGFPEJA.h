#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJMLAKMIEKN.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/ValueType.h"

class KHFJMGEFPHM;
namespace System { class Object; }
namespace System { class String; }

#define HJOKDGFPEJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x611100)
#define HJOKDGFPEJA_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x611230)
#define HJOKDGFPEJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x611080)
#define HJOKDGFPEJA_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x611280)
#define HJOKDGFPEJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6111E0)
#define HJOKDGFPEJA_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x611320)
#define HJOKDGFPEJA_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x10118A30)
#define HJOKDGFPEJA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6112B0)
#define HJOKDGFPEJA_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x10118C20)
#define HJOKDGFPEJA__CCTOR_OFFSET UNITYSDK_OFFSET(0x10118B40)

inline static constexpr unsigned int HJOKDGFPEJA_TypeDefinitionIndex = 89099;

struct alignas(8) HJOKDGFPEJA
{
	static ::HJOKDGFPEJA* StaticGet_DDGNFJDLOKA()
	{
		return (::HJOKDGFPEJA*)Il2CppClass::FromTypeDefinitionIndex(HJOKDGFPEJA_TypeDefinitionIndex)->GetStaticField(0x37D70);
	}
	::System::String* MCOHLHMKLIP; // 0x10
	::System::UInt64 ACHBBPJIBIE; // 0x18
	::MoleMole::Config::ScreenEffectType IHIMDLELPAG; // 0x20
	::DJMLAKMIEKN GKNBCPNBFLH; // 0x24
	::KHFJMGEFPHM* MPBKANKHADG; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJOKDGFPEJA__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::HJOKDGFPEJA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HJOKDGFPEJA))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Boolean Equals_2(::HJOKDGFPEJA HAAEBCOBKFF, ::HJOKDGFPEJA BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::HJOKDGFPEJA, ::HJOKDGFPEJA))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_EQUALS_2_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
	*/

	/*
	::System::Int32 GetHashCode_1(::HJOKDGFPEJA EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::HJOKDGFPEJA))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_GETHASHCODE_1_OFFSET))(this, EIFONLCJOPG);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::HJOKDGFPEJA GHJFIMDFMAM, ::HJOKDGFPEJA OBCHACPDBPA)
	{
		return ((::System::Boolean(*)(::HJOKDGFPEJA, ::HJOKDGFPEJA))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_INCFIJKMIGG_OFFSET))(GHJFIMDFMAM, OBCHACPDBPA);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::HJOKDGFPEJA GHJFIMDFMAM, ::HJOKDGFPEJA OBCHACPDBPA)
	{
		return ((::System::Boolean(*)(::HJOKDGFPEJA, ::HJOKDGFPEJA))((::PBYTE)hIl2Cpp + HJOKDGFPEJA_NOGJIJMACNO_OFFSET))(GHJFIMDFMAM, OBCHACPDBPA);
	}
	*/
};
