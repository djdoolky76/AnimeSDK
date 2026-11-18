#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBOIMOHJHAG;
namespace System { template <typename T> class Func_1; }

#define HJEBAFLEPOF___C_APIPOELHMBP_OFFSET UNITYSDK_OFFSET(0x15DB6F70)
#define HJEBAFLEPOF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DB6F20)
#define HJEBAFLEPOF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB6F60)

inline static constexpr unsigned int HJEBAFLEPOF___c_TypeDefinitionIndex = 69081;

class HJEBAFLEPOF___c : public ::System::Object
{
public:
	static ::System::Func_1<::LBOIMOHJHAG*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::LBOIMOHJHAG*>**)Il2CppClass::FromTypeDefinitionIndex(HJEBAFLEPOF___c_TypeDefinitionIndex)->GetStaticField(0x40BC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HJEBAFLEPOF___c_TypeDefinitionIndex)->GetStaticField(0x40BC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJEBAFLEPOF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEBAFLEPOF___C__CTOR_OFFSET))(this);
	}

	::LBOIMOHJHAG* APIPOELHMBP()
	{
		return ((::LBOIMOHJHAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEBAFLEPOF___C_APIPOELHMBP_OFFSET))(this);
	}
};
