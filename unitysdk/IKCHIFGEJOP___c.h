#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IKCHIFGEJOP_MKEEMLNDIIP.h"

namespace System { template <typename T> class Comparison_1; }

#define IKCHIFGEJOP___C_LBKIJLBLGKI_OFFSET UNITYSDK_OFFSET(0x1657D670)
#define IKCHIFGEJOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1657D620)
#define IKCHIFGEJOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1657D660)

inline static constexpr unsigned int IKCHIFGEJOP___c_TypeDefinitionIndex = 49130;

class IKCHIFGEJOP___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(IKCHIFGEJOP___c_TypeDefinitionIndex)->GetStaticField(0x46590);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IKCHIFGEJOP___c_TypeDefinitionIndex)->GetStaticField(0x46598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCHIFGEJOP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCHIFGEJOP___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LBKIJLBLGKI(::IKCHIFGEJOP_MKEEMLNDIIP EJCBEJMGFAJ, ::IKCHIFGEJOP_MKEEMLNDIIP EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::IKCHIFGEJOP_MKEEMLNDIIP, ::IKCHIFGEJOP_MKEEMLNDIIP))((::PBYTE)hIl2Cpp + IKCHIFGEJOP___C_LBKIJLBLGKI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
