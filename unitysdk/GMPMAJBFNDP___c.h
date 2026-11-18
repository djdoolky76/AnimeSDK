#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELBLLFHAKCB.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define GMPMAJBFNDP___C_CAJAHFNBOEN_OFFSET UNITYSDK_OFFSET(0x18161D40)
#define GMPMAJBFNDP___C_MKJICIHOLEI_OFFSET UNITYSDK_OFFSET(0x18161DE0)
#define GMPMAJBFNDP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18161CF0)
#define GMPMAJBFNDP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18161D30)

inline static constexpr unsigned int GMPMAJBFNDP___c_TypeDefinitionIndex = 47775;

class GMPMAJBFNDP___c : public ::System::Object
{
public:
	static ::System::Func_2<::ELBLLFHAKCB, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::ELBLLFHAKCB, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GMPMAJBFNDP___c_TypeDefinitionIndex)->GetStaticField(0x3B030);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GMPMAJBFNDP___c_TypeDefinitionIndex)->GetStaticField(0x3B038);
	}
	static ::System::Func_2<::ELBLLFHAKCB, ::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::ELBLLFHAKCB, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GMPMAJBFNDP___c_TypeDefinitionIndex)->GetStaticField(0x3B040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMPMAJBFNDP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPMAJBFNDP___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CAJAHFNBOEN(::ELBLLFHAKCB IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::ELBLLFHAKCB))((::PBYTE)hIl2Cpp + GMPMAJBFNDP___C_CAJAHFNBOEN_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Boolean MKJICIHOLEI(::ELBLLFHAKCB IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::ELBLLFHAKCB))((::PBYTE)hIl2Cpp + GMPMAJBFNDP___C_MKJICIHOLEI_OFFSET))(this, IMLLDOHDCNC);
	}
};
