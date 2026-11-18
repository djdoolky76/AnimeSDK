#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define JFELNJHBDHN___C_IKDAAGMBFEE_OFFSET UNITYSDK_OFFSET(0x19451AC0)
#define JFELNJHBDHN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19451A70)
#define JFELNJHBDHN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19451AB0)

inline static constexpr unsigned int JFELNJHBDHN___c_TypeDefinitionIndex = 67578;

class JFELNJHBDHN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JFELNJHBDHN___c_TypeDefinitionIndex)->GetStaticField(0x38030);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__30_14()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JFELNJHBDHN___c_TypeDefinitionIndex)->GetStaticField(0x38038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFELNJHBDHN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFELNJHBDHN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean IKDAAGMBFEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFELNJHBDHN___C_IKDAAGMBFEE_OFFSET))(this);
	}
};
