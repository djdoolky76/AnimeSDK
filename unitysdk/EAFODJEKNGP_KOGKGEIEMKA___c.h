#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define EAFODJEKNGP_KOGKGEIEMKA___C_GDJNDJMEMEB_OFFSET UNITYSDK_OFFSET(0x13E6C090)
#define EAFODJEKNGP_KOGKGEIEMKA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E6C040)
#define EAFODJEKNGP_KOGKGEIEMKA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6C080)

inline static constexpr unsigned int EAFODJEKNGP_KOGKGEIEMKA___c_TypeDefinitionIndex = 90727;

class EAFODJEKNGP_KOGKGEIEMKA___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EAFODJEKNGP_KOGKGEIEMKA___c_TypeDefinitionIndex)->GetStaticField(0x4E360);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EAFODJEKNGP_KOGKGEIEMKA___c_TypeDefinitionIndex)->GetStaticField(0x4E368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAFODJEKNGP_KOGKGEIEMKA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFODJEKNGP_KOGKGEIEMKA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GDJNDJMEMEB(::System::Int32 NHBENPCMJPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EAFODJEKNGP_KOGKGEIEMKA___C_GDJNDJMEMEB_OFFSET))(this, NHBENPCMJPI);
	}
};
