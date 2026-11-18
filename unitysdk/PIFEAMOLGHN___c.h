#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define PIFEAMOLGHN___C_PBBFANOEBMI_OFFSET UNITYSDK_OFFSET(0x1C2A82F0)
#define PIFEAMOLGHN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2A82A0)
#define PIFEAMOLGHN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A82E0)

inline static constexpr unsigned int PIFEAMOLGHN___c_TypeDefinitionIndex = 59134;

class PIFEAMOLGHN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PIFEAMOLGHN___c_TypeDefinitionIndex)->GetStaticField(0x4C990);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PIFEAMOLGHN___c_TypeDefinitionIndex)->GetStaticField(0x4C998);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFEAMOLGHN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFEAMOLGHN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean PBBFANOEBMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFEAMOLGHN___C_PBBFANOEBMI_OFFSET))(this);
	}
};
