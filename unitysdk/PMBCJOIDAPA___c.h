#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define PMBCJOIDAPA___C_BAMBBEHLIMG_OFFSET UNITYSDK_OFFSET(0x1C693700)
#define PMBCJOIDAPA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6936B0)
#define PMBCJOIDAPA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6936F0)

inline static constexpr unsigned int PMBCJOIDAPA___c_TypeDefinitionIndex = 59664;

class PMBCJOIDAPA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PMBCJOIDAPA___c_TypeDefinitionIndex)->GetStaticField(0x51B40);
	}
	static ::System::Func_2<::FBAMLABJMKF*, ::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::FBAMLABJMKF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PMBCJOIDAPA___c_TypeDefinitionIndex)->GetStaticField(0x51B48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMBCJOIDAPA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCJOIDAPA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BAMBBEHLIMG(::FBAMLABJMKF* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + PMBCJOIDAPA___C_BAMBBEHLIMG_OFFSET))(this, CBLGCIFLMKL);
	}
};
