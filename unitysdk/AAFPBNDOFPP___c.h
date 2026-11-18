#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFHNDMOMPMJ;
namespace System { template <typename T> class Comparison_1; }

#define AAFPBNDOFPP___C_MAKGHDGPMBB_OFFSET UNITYSDK_OFFSET(0x19BD0080)
#define AAFPBNDOFPP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD0030)
#define AAFPBNDOFPP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD0070)

inline static constexpr unsigned int AAFPBNDOFPP___c_TypeDefinitionIndex = 12019;

class AAFPBNDOFPP___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::HFHNDMOMPMJ*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::HFHNDMOMPMJ*>**)Il2CppClass::FromTypeDefinitionIndex(AAFPBNDOFPP___c_TypeDefinitionIndex)->GetStaticField(0x76A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AAFPBNDOFPP___c_TypeDefinitionIndex)->GetStaticField(0x76A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAFPBNDOFPP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFPBNDOFPP___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MAKGHDGPMBB(::HFHNDMOMPMJ* EJCBEJMGFAJ, ::HFHNDMOMPMJ* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::HFHNDMOMPMJ*, ::HFHNDMOMPMJ*))((::PBYTE)hIl2Cpp + AAFPBNDOFPP___C_MAKGHDGPMBB_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
