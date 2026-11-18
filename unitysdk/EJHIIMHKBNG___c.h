#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System { template <typename T1, typename T2> class Func_2; }

#define EJHIIMHKBNG___C_MOHMOAIFMFH_OFFSET UNITYSDK_OFFSET(0x10F38F80)
#define EJHIIMHKBNG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F38F30)
#define EJHIIMHKBNG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F38F70)

inline static constexpr unsigned int EJHIIMHKBNG___c_TypeDefinitionIndex = 73351;

class EJHIIMHKBNG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EJHIIMHKBNG___c_TypeDefinitionIndex)->GetStaticField(0x3DA70);
	}
	static ::System::Func_2<::CJIEIHEDMME*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::CJIEIHEDMME*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EJHIIMHKBNG___c_TypeDefinitionIndex)->GetStaticField(0x3DA78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHIIMHKBNG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHIIMHKBNG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MOHMOAIFMFH(::CJIEIHEDMME* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + EJHIIMHKBNG___C_MOHMOAIFMFH_OFFSET))(this, EJCBEJMGFAJ);
	}
};
