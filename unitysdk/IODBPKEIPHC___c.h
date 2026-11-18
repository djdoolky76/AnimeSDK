#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define IODBPKEIPHC___C_MAKHOIJDCBI_OFFSET UNITYSDK_OFFSET(0x141FF180)
#define IODBPKEIPHC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141FF130)
#define IODBPKEIPHC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141FF170)

inline static constexpr unsigned int IODBPKEIPHC___c_TypeDefinitionIndex = 75690;

class IODBPKEIPHC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__107_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IODBPKEIPHC___c_TypeDefinitionIndex)->GetStaticField(0x49E80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IODBPKEIPHC___c_TypeDefinitionIndex)->GetStaticField(0x49E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IODBPKEIPHC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODBPKEIPHC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MAKHOIJDCBI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IODBPKEIPHC___C_MAKHOIJDCBI_OFFSET))(this);
	}
};
