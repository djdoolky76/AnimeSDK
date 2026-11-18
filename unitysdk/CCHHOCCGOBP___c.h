#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CCHHOCCGOBP___C_HIGCCIMCGDJ_OFFSET UNITYSDK_OFFSET(0x128C5150)
#define CCHHOCCGOBP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128C5100)
#define CCHHOCCGOBP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x128C5140)

inline static constexpr unsigned int CCHHOCCGOBP___c_TypeDefinitionIndex = 52294;

class CCHHOCCGOBP___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__19_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CCHHOCCGOBP___c_TypeDefinitionIndex)->GetStaticField(0x3D540);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CCHHOCCGOBP___c_TypeDefinitionIndex)->GetStaticField(0x3D548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCHHOCCGOBP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHHOCCGOBP___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HIGCCIMCGDJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHHOCCGOBP___C_HIGCCIMCGDJ_OFFSET))(this);
	}
};
