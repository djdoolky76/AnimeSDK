#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define KMLMEOJCPLD___C_COJKBFDODEL_OFFSET UNITYSDK_OFFSET(0x17727B60)
#define KMLMEOJCPLD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17727B10)
#define KMLMEOJCPLD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17727B50)

inline static constexpr unsigned int KMLMEOJCPLD___c_TypeDefinitionIndex = 79747;

class KMLMEOJCPLD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KMLMEOJCPLD___c_TypeDefinitionIndex)->GetStaticField(0x382B0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KMLMEOJCPLD___c_TypeDefinitionIndex)->GetStaticField(0x382B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMLMEOJCPLD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLMEOJCPLD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 COJKBFDODEL(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KMLMEOJCPLD___C_COJKBFDODEL_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
