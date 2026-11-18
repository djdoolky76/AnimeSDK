#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJAKGNFCOCK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define ANBELDLEFGJ___C_OJIMPHIIJLN_OFFSET UNITYSDK_OFFSET(0x1DAB11C0)
#define ANBELDLEFGJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAB1170)
#define ANBELDLEFGJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB11B0)

inline static constexpr unsigned int ANBELDLEFGJ___c_TypeDefinitionIndex = 93931;

class ANBELDLEFGJ___c : public ::System::Object
{
public:
	static ::System::Func_2<::EJAKGNFCOCK*, ::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::EJAKGNFCOCK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ANBELDLEFGJ___c_TypeDefinitionIndex)->GetStaticField(0x52590);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ANBELDLEFGJ___c_TypeDefinitionIndex)->GetStaticField(0x52598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANBELDLEFGJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBELDLEFGJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OJIMPHIIJLN(::EJAKGNFCOCK* IMLLDOHDCNC)
	{
		return ((::System::Int32(*)(::PVOID, ::EJAKGNFCOCK*))((::PBYTE)hIl2Cpp + ANBELDLEFGJ___C_OJIMPHIIJLN_OFFSET))(this, IMLLDOHDCNC);
	}
};
