#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define LFMNJGJLLFI___C_AOOBHACJAJL_OFFSET UNITYSDK_OFFSET(0x1A606840)
#define LFMNJGJLLFI___C_LGAFJEKJHIC_OFFSET UNITYSDK_OFFSET(0x1A606850)
#define LFMNJGJLLFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6067F0)
#define LFMNJGJLLFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A606830)

inline static constexpr unsigned int LFMNJGJLLFI___c_TypeDefinitionIndex = 63518;

class LFMNJGJLLFI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LFMNJGJLLFI___c_TypeDefinitionIndex)->GetStaticField(0x4D5C0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__7_10()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LFMNJGJLLFI___c_TypeDefinitionIndex)->GetStaticField(0x4D5C8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LFMNJGJLLFI___c_TypeDefinitionIndex)->GetStaticField(0x4D5D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFMNJGJLLFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNJGJLLFI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AOOBHACJAJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNJGJLLFI___C_AOOBHACJAJL_OFFSET))(this);
	}

	::System::String* LGAFJEKJHIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMNJGJLLFI___C_LGAFJEKJHIC_OFFSET))(this);
	}
};
